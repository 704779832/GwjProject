#include "TextureShare/TextureBufferShareObjectVulkan.h"
#include "Engine/TextureRenderTarget2D.h"

#include "vulkan/vulkan_core.h"
#include "VulkanCommon.h"
#include "VulkanRHIPrivate.h"
#include "VulkanConfiguration.h"
#include "VulkanDevice.h"
#include "VulkanResources.h"
#if PLATFORM_WINDOWS

#else
#include <sys/un.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

namespace ShareBufferVulkan
{
#if VULKAN_CUSTOM_MEMORY_MANAGER_ENABLED
	VkAllocationCallbacks GAllocationCallbacks;
#endif
	static FORCEINLINE const VkAllocationCallbacks* GetMemoryAllocator(const VkAllocationCallbacks* Allocator)
	{
#if VULKAN_CUSTOM_MEMORY_MANAGER_ENABLED
		extern VkAllocationCallbacks GAllocationCallbacks;
		return Allocator ? Allocator : &GAllocationCallbacks;
#else
		return Allocator;
#endif
	}

	static const VkImageTiling VulkanViewTypeTilingMode[VK_IMAGE_VIEW_TYPE_RANGE_SIZE] =
	{
		VK_IMAGE_TILING_LINEAR,		// VK_IMAGE_VIEW_TYPE_1D
		VK_IMAGE_TILING_OPTIMAL,	// VK_IMAGE_VIEW_TYPE_2D
		VK_IMAGE_TILING_OPTIMAL,	// VK_IMAGE_VIEW_TYPE_3D
		VK_IMAGE_TILING_OPTIMAL,	// VK_IMAGE_VIEW_TYPE_CUBE
		VK_IMAGE_TILING_LINEAR,		// VK_IMAGE_VIEW_TYPE_1D_ARRAY
		VK_IMAGE_TILING_OPTIMAL,	// VK_IMAGE_VIEW_TYPE_2D_ARRAY
		VK_IMAGE_TILING_OPTIMAL,	// VK_IMAGE_VIEW_TYPE_CUBE_ARRAY
	};

	static bool GenerateImageCreateInfo(VkImageCreateInfo& OutImageCreateInfo,
		VkExternalMemoryImageCreateInfo& OutExternalMemImageCreateInfo,
		int32 UETexture_SizeX,
		int32 UETexture_SizeY,
		uint16 UETexture_Depth,
		ETextureCreateFlags UETexture_Flags,
		EPixelFormat UETexture_Format,
		ETextureDimension UETexture_Dimension,
		uint8 UETexture_NumMips,
		uint16 UETexture_ArraySize,
		uint8 UETexture_NumSamples,
		bool bForceLinearTexture = false)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		const VkPhysicalDeviceProperties& DeviceProperties = VulkanDevice->GetDeviceProperties();
		const FPixelFormatInfo& FormatInfo = GPixelFormats[UETexture_Format];
		VkFormat TextureFormat = (VkFormat)FormatInfo.PlatformFormat;

		const ETextureCreateFlags UEFlags = UETexture_Flags;
		if (EnumHasAnyFlags(UEFlags, TexCreate_CPUReadback))
		{
			bForceLinearTexture = true;
		}

		checkf(TextureFormat != VK_FORMAT_UNDEFINED, TEXT("PixelFormat %d, is not supported for images"), (int32)UETexture_Format);
		VkImageCreateInfo& ImageCreateInfo = OutImageCreateInfo;
		ZeroVulkanStruct(ImageCreateInfo, VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO);

		const VkImageViewType ResourceType = UETextureDimensionToVkImageViewType(UETexture_Dimension);
		switch (ResourceType)
		{
		case VK_IMAGE_VIEW_TYPE_1D:
			ImageCreateInfo.imageType = VK_IMAGE_TYPE_1D;
			check((uint32)UETexture_SizeX <= DeviceProperties.limits.maxImageDimension1D);
			break;
		case VK_IMAGE_VIEW_TYPE_CUBE:
		case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
			check(UETexture_SizeX == UETexture_SizeY);
			check((uint32)UETexture_SizeX <= DeviceProperties.limits.maxImageDimensionCube);
			check((uint32)UETexture_SizeY <= DeviceProperties.limits.maxImageDimensionCube);
			ImageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
			break;
		case VK_IMAGE_VIEW_TYPE_2D:
		case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
			check((uint32)UETexture_SizeX <= DeviceProperties.limits.maxImageDimension2D);
			check((uint32)UETexture_SizeY <= DeviceProperties.limits.maxImageDimension2D);
			ImageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
			break;
		case VK_IMAGE_VIEW_TYPE_3D:
			check((uint32)UETexture_SizeY <= DeviceProperties.limits.maxImageDimension3D);
			ImageCreateInfo.imageType = VK_IMAGE_TYPE_3D;
			break;
		default:
			checkf(false, TEXT("Unhandled image type %d"), (int32)ResourceType);
			break;
		}

		//这里是5.5出现编译问题了 后续再想办法
#ifdef VULKAN_HAS_PHYSICAL_DEVICE_PROPERTIES
		VkFormat srgbFormat = UEToVkTextureFormat(UETexture_Format, EnumHasAllFlags(UEFlags, TexCreate_SRGB));
		VkFormat nonSrgbFormat = UEToVkTextureFormat(UETexture_Format, false);
#else
		VkFormat srgbFormat = VkFormat::VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
		VkFormat nonSrgbFormat = VkFormat::VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
#endif

		ImageCreateInfo.format = EnumHasAnyFlags(UEFlags, TexCreate_UAV) ? nonSrgbFormat : srgbFormat;

		checkf(ImageCreateInfo.format != VK_FORMAT_UNDEFINED, TEXT("Pixel Format %d not defined!"), (int32)UETexture_Format);

		ImageCreateInfo.extent.width = UETexture_SizeX;
		ImageCreateInfo.extent.height = UETexture_SizeY;
		ImageCreateInfo.extent.depth = ResourceType == VK_IMAGE_VIEW_TYPE_3D ? UETexture_Depth : 1;
		ImageCreateInfo.mipLevels = UETexture_NumMips;
		uint32 LayerCount = (ResourceType == VK_IMAGE_VIEW_TYPE_CUBE || ResourceType == VK_IMAGE_VIEW_TYPE_CUBE_ARRAY) ? 6 : 1;
		ImageCreateInfo.arrayLayers = UETexture_ArraySize * LayerCount;
		check(ImageCreateInfo.arrayLayers <= DeviceProperties.limits.maxImageArrayLayers);

		ImageCreateInfo.flags = (ResourceType == VK_IMAGE_VIEW_TYPE_CUBE || ResourceType == VK_IMAGE_VIEW_TYPE_CUBE_ARRAY) ? VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT : 0;


		if (EnumHasAllFlags(UEFlags, TexCreate_SRGB))
		{
			ImageCreateInfo.flags |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;
		}

		if (VulkanDevice->GetOptionalExtensions().HasKHRMaintenance4 && ImageCreateInfo.imageType == VK_IMAGE_TYPE_3D)
		{
			ImageCreateInfo.flags |= VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
		}

		ImageCreateInfo.tiling = bForceLinearTexture ? VK_IMAGE_TILING_LINEAR : VulkanViewTypeTilingMode[ResourceType];

		ImageCreateInfo.usage = 0;
		ImageCreateInfo.usage |= VK_IMAGE_USAGE_TRANSFER_DST_BIT;
		//@TODO: should everything be created with the source bit?
		ImageCreateInfo.usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
		ImageCreateInfo.usage |= VK_IMAGE_USAGE_SAMPLED_BIT;

		if (EnumHasAnyFlags(UEFlags, TexCreate_Presentable))
		{
			ImageCreateInfo.usage |= VK_IMAGE_USAGE_STORAGE_BIT;
		}
		else if (EnumHasAnyFlags(UEFlags, TexCreate_RenderTargetable | TexCreate_DepthStencilTargetable))
		{
			if (EnumHasAllFlags(UEFlags, TexCreate_InputAttachmentRead))
			{
				ImageCreateInfo.usage |= VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
			}
			ImageCreateInfo.usage |= (EnumHasAnyFlags(UEFlags, TexCreate_RenderTargetable) ? VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT : VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT);
			ImageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
			if (EnumHasAllFlags(UEFlags, TexCreate_Memoryless) && VulkanDevice->GetDeviceMemoryManager().SupportsMemoryless())
			{
				ImageCreateInfo.usage |= VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT;
				// Remove the transfer and sampled bits, as they are incompatible with the transient bit.
				ImageCreateInfo.usage &= ~(VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_SAMPLED_BIT);
			}
		}
		else if (EnumHasAnyFlags(UEFlags, TexCreate_DepthStencilResolveTarget))
		{
			ImageCreateInfo.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
			ImageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
		}
		else if (EnumHasAnyFlags(UEFlags, TexCreate_ResolveTargetable))
		{
			ImageCreateInfo.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
			ImageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
		}

		if (EnumHasAnyFlags(UEFlags, TexCreate_Foveation) && ValidateShadingRateDataType())
		{
#ifdef VULKAN_SUPPORTS_FRAGMENT_SHADING_RATE
			if (GRHIVariableRateShadingImageDataType == VRSImage_Palette)
			{
				ImageCreateInfo.usage |= VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
			}
#endif

#ifdef VULKAN_SUPPORTS_FRAGMENT_DENSITY_MAP
			if (GRHIVariableRateShadingImageDataType == VRSImage_Fractional)
			{
				ImageCreateInfo.usage |= VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT;
			}
#endif
		}

		if (EnumHasAnyFlags(UEFlags, TexCreate_UAV))
		{
			//cannot have the storage bit on a memoryless texture
			ensure(!EnumHasAnyFlags(UEFlags, TexCreate_Memoryless));
			ImageCreateInfo.usage |= VK_IMAGE_USAGE_STORAGE_BIT;
		}

#ifdef VULKAN_SUPPORTS_EXTERNAL_MEMORY
		if (EnumHasAnyFlags(UEFlags, TexCreate_External))
		{
			VkExternalMemoryImageCreateInfoKHR& ExternalMemImageCreateInfo = OutExternalMemImageCreateInfo;
			ZeroVulkanStruct(ExternalMemImageCreateInfo, VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR);
#if PLATFORM_WINDOWS
			ExternalMemImageCreateInfo.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
#else
			ExternalMemImageCreateInfo.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
#endif
			ExternalMemImageCreateInfo.pNext = ImageCreateInfo.pNext;
			ImageCreateInfo.pNext = &ExternalMemImageCreateInfo;
		}
#endif // VULKAN_SUPPORTS_EXTERNAL_MEMORY

		//#todo-rco: If using CONCURRENT, make sure to NOT do so on render targets as that kills DCC compression
		ImageCreateInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
		ImageCreateInfo.queueFamilyIndexCount = 0;
		ImageCreateInfo.pQueueFamilyIndices = nullptr;

		uint8 NumSamples = UETexture_NumSamples;
		if (ImageCreateInfo.tiling == VK_IMAGE_TILING_LINEAR && NumSamples > 1)
		{
			UE_LOG(LogVulkanRHI, Warning, TEXT("Not allowed to create Linear textures with %d samples, reverting to 1 sample"), NumSamples);
			NumSamples = 1;
		}

		switch (NumSamples)
		{
		case 1:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_1_BIT;
			break;
		case 2:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_2_BIT;
			break;
		case 4:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_4_BIT;
			break;
		case 8:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_8_BIT;
			break;
		case 16:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_16_BIT;
			break;
		case 32:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_32_BIT;
			break;
		case 64:
			ImageCreateInfo.samples = VK_SAMPLE_COUNT_64_BIT;
			break;
		default:
			checkf(0, TEXT("Unsupported number of samples %d"), NumSamples);
			break;
		}

		FVulkanPlatform::SetImageMemoryRequirementWorkaround(ImageCreateInfo);
		//这里是5.5出现编译问题了 后续再想办法
#ifdef VULKAN_HAS_PHYSICAL_DEVICE_PROPERTIES
		
		const VkFormatFeatureFlags FormatFlags = ImageCreateInfo.tiling == VK_IMAGE_TILING_LINEAR ?
			VulkanDevice->GetFormatProperties(ImageCreateInfo.format).linearTilingFeatures :
			VulkanDevice->GetFormatProperties(ImageCreateInfo.format).optimalTilingFeatures;
#else
		const VkFormatFeatureFlags FormatFlags = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT;
#endif
		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT))
		{
			// Some formats don't support sampling and that's ok, we'll use a STORAGE_IMAGE
			check(EnumHasAnyFlags(UEFlags, TexCreate_UAV | TexCreate_CPUReadback));
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_SAMPLED_BIT;
		}

		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT))
		{
			ensure((ImageCreateInfo.usage & VK_IMAGE_USAGE_STORAGE_BIT) == 0);
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_STORAGE_BIT;
		}

		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT))
		{
			ensure((ImageCreateInfo.usage & VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) == 0);
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
		}

		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT))
		{
			ensure((ImageCreateInfo.usage & VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) == 0);
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
		}

		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_TRANSFER_SRC_BIT))
		{
			// this flag is used unconditionally, strip it without warnings 
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
		}

		if (!VKHasAnyFlags(FormatFlags, VK_FORMAT_FEATURE_TRANSFER_DST_BIT))
		{
			// this flag is used unconditionally, strip it without warnings 
			ImageCreateInfo.usage &= ~VK_IMAGE_USAGE_TRANSFER_DST_BIT;
		}

		if (EnumHasAnyFlags(UEFlags, TexCreate_DepthStencilTargetable))
		{
			ImageCreateInfo.usage |= VK_IMAGE_USAGE_STORAGE_BIT;
		}
		return true;
	}

	static void GenerateImageCreateInfoByDesc(VkImageCreateInfo& OutImageCreateInfo,
		VkExternalMemoryImageCreateInfo& OutExternalMemImageCreateInfo,
		const FRHITextureDesc& InDesc,
		bool bForceLinearTexture = false)
	{
		GenerateImageCreateInfo(OutImageCreateInfo, OutExternalMemImageCreateInfo, InDesc.Extent.X, InDesc.Extent.Y, InDesc.Depth,
			InDesc.Flags, InDesc.Format, InDesc.Dimension, InDesc.NumMips, InDesc.ArraySize, InDesc.NumSamples, bForceLinearTexture);
	}


	static bool CreateVulkanImage(const VkImageCreateInfo& ImageCreateInfo, VkImage& OutImage)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		PFN_vkCreateImage FPvkCreateImage = (PFN_vkCreateImage)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkCreateImage");
		if (!FPvkCreateImage)return false;

		VkResult Result = FPvkCreateImage(VulkanDevice->GetInstanceHandle(), &ImageCreateInfo, GetMemoryAllocator(nullptr), &OutImage);
		return Result == VkResult::VK_SUCCESS;
	}

	static bool VulkanAllocateMemory(const VkMemoryAllocateInfo& AllocInfo, VkDeviceMemory& OutMemory)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)
		{
			UE_LOG(LogTemp, Error, TEXT("VulkanAllocateMemory AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
			return false;
		}
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)
		{
			UE_LOG(LogTemp, Error, TEXT("VulkanAllocateMemory BBBBBBBBBBBBBBBBBBBBBBBBBBBB"));
			return false;
		}


		PFN_vkAllocateMemory FPvkAllocateMemory = (PFN_vkAllocateMemory)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkAllocateMemory");
		if (!FPvkAllocateMemory)
		{
			UE_LOG(LogTemp, Error, TEXT("VulkanAllocateMemory Failed By Get vkAllocateMemory  ProcAddr is nullptr"));
			return false;
		}
		VkResult Result = FPvkAllocateMemory(VulkanDevice->GetInstanceHandle(), &AllocInfo, GetMemoryAllocator(nullptr), &OutMemory);

		if (Result != VkResult::VK_SUCCESS)
		{
			UE_LOG(LogTemp, Error, TEXT("VulkanAllocateMemory Failed By vkAllocateMemory Result:%d"), Result);
		}

		return Result == VkResult::VK_SUCCESS;
	}

	static bool GetLinuxFdHandleProperties(int FD, VkMemoryFdPropertiesKHR& OutInfo)
	{

		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;

		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		PFN_vkGetMemoryFdPropertiesKHR FPGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkGetMemoryFdPropertiesKHR");
		if (!FPGetMemoryFdPropertiesKHR)
		{
			UE_LOG(LogTemp, Error, TEXT("GetLinuxFdHandleProperties get vkGetMemoryFdPropertiesKHR ProcAddr nullptr"));
			return false;
		}
		ZeroVulkanStruct(OutInfo, VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR);

		VkResult Result = FPGetMemoryFdPropertiesKHR(VulkanDevice->GetInstanceHandle(), VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT, FD, &OutInfo);

		if (Result != VkResult::VK_SUCCESS)
		{
			UE_LOG(LogTemp, Error, TEXT("GetLinuxFdHandleProperties vkGetMemoryFdPropertiesKHR Failed! Result:%d"), Result);
		}

		return Result == VkResult::VK_SUCCESS;
	}


	static bool VulkanBindImageMemory(VkImage& Image, VkDeviceMemory& DeviceMemory)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;

		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		PFN_vkBindImageMemory FPvkBindImageMemory = (PFN_vkBindImageMemory)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkBindImageMemory");
		if (!FPvkBindImageMemory)
		{
			return false;
		}
		VkResult Result = FPvkBindImageMemory(VulkanDevice->GetInstanceHandle(), Image, DeviceMemory, 0);

		return Result == VkResult::VK_SUCCESS;
	}

	static bool GetVulkanImageRequirements(const VkImage& Image, VkMemoryRequirements& Out)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		//VulkanRHI::vkGetImageMemoryRequirements(VulkanDevice->GetInstanceHandle(), Image, &Out);

		PFN_vkGetImageMemoryRequirements FPvkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkGetImageMemoryRequirements");
		if (!FPvkGetImageMemoryRequirements)return false;

		FPvkGetImageMemoryRequirements(VulkanDevice->GetInstanceHandle(), Image, &Out);

		return true;
	}

	static uint32 FindMemoryType(uint32 Filter, VkMemoryPropertyFlags RequestedProperties)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return -1;
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return -1;
		VkPhysicalDeviceMemoryProperties Properties = {};
		VulkanRHI::vkGetPhysicalDeviceMemoryProperties(VulkanDevice->GetPhysicalHandle(), &Properties);

		uint32 Result = UINT32_MAX;
		for (uint32 i = 0; i < Properties.memoryTypeCount; ++i)
		{
			const bool bTypeFilter = Filter & (1 << i);
			const bool bPropFilter = (Properties.memoryTypes[i].propertyFlags & RequestedProperties) == RequestedProperties;
			if (bTypeFilter && bPropFilter)
			{
				Result = i;
				break;
			}
		}

		check(Result < UINT32_MAX);
		return Result;
	}

	static bool GetVulkanShareHandle(const FVulkanRHIAllocationInfo& Info,int& OutHandleFd)
	{
		FVulkanDynamicRHI* DynamicRHI = static_cast<FVulkanDynamicRHI*>(GetIVulkanDynamicRHI());
		if (!DynamicRHI)return false;
		FVulkanDevice* VulkanDevice = DynamicRHI->GetDevice();
		if (!VulkanDevice)return false;

		VkMemoryGetFdInfoKHR MemoryGetFdInfoKHR = {};
		MemoryGetFdInfoKHR.sType = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
		MemoryGetFdInfoKHR.pNext = NULL;
		MemoryGetFdInfoKHR.memory = Info.Handle;
		MemoryGetFdInfoKHR.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;

		PFN_vkGetMemoryFdKHR FPGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)GetIVulkanDynamicRHI()->RHIGetVkDeviceProcAddr("vkGetMemoryFdKHR");
		if (!FPGetMemoryFdKHR)return false;
		const VkResult Result = FPGetMemoryFdKHR(VulkanDevice->GetInstanceHandle(), &MemoryGetFdInfoKHR, &OutHandleFd);

		return Result == VK_SUCCESS;
	}
};

UTextureBufferShareObjectVulkan::~UTextureBufferShareObjectVulkan()
{
	if (SocketFD >= 0)
	{
		ClosedSocketFD(SocketFD);
	}

	if (ClientSocketFD >= 0)
	{
		ClosedSocketFD(SocketFD);
	}
}

bool UTextureBufferShareObjectVulkan::CreateShareHandle(const FString& InName, int InWidth, int InHeight, EPixelFormat Format)
{
	if (GDynamicRHI->GetInterfaceType() != ERHIInterfaceType::Vulkan)return false;
	ShareName = InName;
	bExtendRHI = false;
	Width = FMath::Max(2, InWidth);
	Height = FMath::Max(2, InHeight);

	//创建共享的缓存Buffer
	FRHITextureCreateDesc CreateDesc =
		FRHITextureCreateDesc::Create2D(TEXT("UTextureBufferShare_ulkan"), Width, Height, Format)
		.SetClearValue(FClearValueBinding::None)
		.SetFlags(ETextureCreateFlags::RenderTargetable)
		.SetInitialState(ERHIAccess::Present)
		.DetermineInititialState();

	CreateDesc.AddFlags(ETextureCreateFlags::External);

	mBufferRHI = GDynamicRHI->RHICreateTexture(FRHICommandListImmediate::Get(),CreateDesc);

	FMemory::Memzero(&ShmStruct, sizeof(VulkanShareTextureShmStruct));

	if (!CreateVulkanBufferShareHandle(mBufferRHI, ShmStruct))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandle->CreateVulkanBufferShareHandle Failed"));
		return false;
	}

	MemorySize = ShmStruct.MemorySize;

	if (!CreateUnixSocket(ShareName, SocketFD,ClientSocketFD))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandle->CreateUnixSocket Failed"));
		return false;
	}

	if (!SendDataToUnixSocket(ClientSocketFD, ShmStruct))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandle->SendDataToUnixSocket Failed"));
		return false;
	}
	return true;
}

bool UTextureBufferShareObjectVulkan::CreateShareHandleByRenderTarget(const FString& InName, UTextureRenderTarget2D* Source)
{
	if (GDynamicRHI->GetInterfaceType() != ERHIInterfaceType::Vulkan)return false;
	ShareName = InName;
	bExtendRHI = true;
	Width = FMath::Max(2, Source->SizeX);
	Height = FMath::Max(2, Source->SizeY);

	FTextureResource* TextureResource = Source->GetResource();
	if (!TextureResource)return false;
	mBufferRHI = TextureResource->GetTextureRHI();

	FMemory::Memzero(&ShmStruct, sizeof(VulkanShareTextureShmStruct));

	if (!CreateVulkanBufferShareHandle(mBufferRHI, ShmStruct))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandleByRenderTarget->CreateVulkanBufferShareHandle Failed"));
		return false;
	}

	MemorySize = ShmStruct.MemorySize;

	if (!CreateUnixSocket(ShareName, SocketFD,ClientSocketFD))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandleByRenderTarget->CreateUnixSocket Failed"));
		return false;
	}

	if (!SendDataToUnixSocket(ClientSocketFD, ShmStruct))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateShareHandle->SendDataToUnixSocket Failed"));
		return false;
	}

	return true;
}

bool UTextureBufferShareObjectVulkan::OpenShareHandle(const FString& InName)
{
	if (GDynamicRHI->GetInterfaceType() != ERHIInterfaceType::Vulkan)return false;
	ShareName = InName;

	FMemory::Memzero(&ShmStruct, sizeof(VulkanShareTextureShmStruct));

	if (!ConnectUnixSocket(ShareName, SocketFD))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenShareHandle->ConnectUnixSocket Failed"));
		return false;
	}
	UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenShareHandle->ConnectUnixSocket Success"));

	if (!ReadDataFromUnixSocket(SocketFD, ShmStruct))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenShareHandle->ReadDataFromUnixSocket Failed"));
		return false;
	}

	{
		UE_LOG(LogTemp, Warning, TEXT("---------------------------------------VulkanShareTextureShmStruct-------------------------------------------------"));
		
		UE_LOG(LogTemp, Warning, TEXT("TextureSize:%d,%d"), ShmStruct.UETexture_SizeX, ShmStruct.UETexture_SizeY);
		UE_LOG(LogTemp, Warning, TEXT("MemorySize:%d"), ShmStruct.MemorySize);

		UE_LOG(LogTemp, Warning, TEXT("---------------------------------------VulkanShareTextureShmStruct-------------------------------------------------"));
	}


	FRHITexture* Texture;
	if (!OpenVulkanBufferShareHandle(ShmStruct, Texture))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenShareHandle->TMapSharedMemoryRegion Failed"));
		return false;
	}
	mBufferRHI = Texture;

	Width = ShmStruct.UETexture_SizeX;
	Height = ShmStruct.UETexture_SizeY;
	MemorySize = ShmStruct.MemorySize;

	return true;
}

bool UTextureBufferShareObjectVulkan::CreateVulkanBufferShareHandle(FRHITexture* Source, VulkanShareTextureShmStruct& Out)
{
	if (!Source)
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateVulkanBufferShareHandle Failed By nullptr "));
		return false;
	}
	IVulkanDynamicRHI* VulkanRHI = GetIVulkanDynamicRHI();
	if (!VulkanRHI)
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateVulkanBufferShareHandle Failed By VulkanRHI is nullptr "));
		return false;
	}

	const FVulkanRHIAllocationInfo TextureAllocationInfo = VulkanRHI->RHIGetAllocationInfo(Source);
	
	VkImage Image = VulkanRHI->RHIGetVkImage(Source);

	Out.Offset = TextureAllocationInfo.Offset;
	Out.MemorySize = TextureAllocationInfo.Offset + TextureAllocationInfo.Size;
	
	const FRHITextureDesc Desc = Source->GetDesc();
	 
	Out.UETexture_SizeX = Desc.Extent.X;
	Out.UETexture_SizeY = Desc.Extent.Y;
	Out.UETexture_Depth = Desc.Depth;
	Out.UETexture_Flags = Desc.Flags;
	Out.UETexture_Format = Desc.Format;
	Out.UETexture_Dimension = Desc.Dimension;
	Out.UETexture_NumMips = Desc.NumMips;
	Out.UETexture_ArraySize = Desc.ArraySize;
	Out.UETexture_NumSamples = Desc.NumSamples;

	int tempFD;
	if (!ShareBufferVulkan::GetVulkanShareHandle(TextureAllocationInfo, tempFD))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateVulkanBufferShareHandle Failed By GetVulkanShareHandle "));
		return false;
	}
	Out.Linux_HandleFd = tempFD;

	return true;
}

bool UTextureBufferShareObjectVulkan::OpenVulkanBufferShareHandle(const VulkanShareTextureShmStruct& Source, FRHITexture*& OutRHITexture)
{
	//根据输入的参数创建VkImage
	VkImage Image;
	{
		VkImageCreateInfo ImageCreateInfo;

		VkExternalMemoryImageCreateInfoKHR ExternalMemImageCreateInfo;

		if (!ShareBufferVulkan::GenerateImageCreateInfo(ImageCreateInfo, ExternalMemImageCreateInfo, Source.UETexture_SizeX, Source.UETexture_SizeY,
			Source.UETexture_Depth, Source.UETexture_Flags, Source.UETexture_Format, Source.UETexture_Dimension, Source.UETexture_NumMips, Source.UETexture_ArraySize, Source.UETexture_NumSamples))
		{
			UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenVulkanBufferShareHandle Failed By GenerateImageCreateInfo"));
			return false;
		}

		if (!ShareBufferVulkan::CreateVulkanImage(ImageCreateInfo, Image))
		{
			UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenVulkanBufferShareHandle Failed By CreateVulkanImage"));
			return false;
		}
	}

	//创建要绑定的显存空间VkDeviceMemory
	VkDeviceMemory DeviceMemory;
	{
		//获取VkImage的配置用于查询内存标记索引
		VkMemoryRequirements ImageRequirements;

		ShareBufferVulkan::GetVulkanImageRequirements(Image, ImageRequirements);

		VkImportMemoryFdInfoKHR ImportMemoryInfo{};
		ZeroVulkanStruct(ImportMemoryInfo, VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR);
		ImportMemoryInfo.sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
		ImportMemoryInfo.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;
		ImportMemoryInfo.fd = Source.Linux_HandleFd;


		VkMemoryAllocateInfo allocInfo = {  };
		ZeroVulkanStruct(allocInfo, VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO);
		allocInfo.pNext = &ImportMemoryInfo;
		allocInfo.allocationSize = Source.MemorySize;
		allocInfo.memoryTypeIndex = ShareBufferVulkan::FindMemoryType(ImageRequirements.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);



		UE_LOG(LogTemp, Error, TEXT("memoryTypeIndex:%d"), allocInfo.memoryTypeIndex);
		if (!ShareBufferVulkan::VulkanAllocateMemory(allocInfo, DeviceMemory))
		{
			UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenVulkanBufferShareHandle Failed By VulkanAllocateMemory"));
			return false;
		}

	}

	//绑定VkDeviceMemory到VkImage
	if (!ShareBufferVulkan::VulkanBindImageMemory(Image, DeviceMemory))
	{
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::OpenVulkanBufferShareHandle Failed By VulkanBindImageMemory"));
		return false;
	}

	OutRHITexture = GetIVulkanDynamicRHI()->RHICreateTexture2DFromResource(Source.UETexture_Format, Source.UETexture_SizeX, Source.UETexture_SizeY,
		Source.UETexture_NumMips, Source.UETexture_NumSamples, Image, ETextureCreateFlags::Dynamic | ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ShaderResource, FClearValueBinding::None);

	return true;
}

bool UTextureBufferShareObjectVulkan::CreateUnixSocket(const FString& Name,  int& OutSocketFD, int& OutClientSocketFD)
{
	const FString SunPath = FString::Printf(TEXT("/tmp/vulkan_%s"), *Name);
	
#if PLATFORM_WINDOWS
	return false;
#else
	// 1. 创建监听Socket
	OutSocketFD = socket(AF_UNIX, SOCK_STREAM, 0);
	struct sockaddr_un addr = { .sun_family = AF_UNIX };

	// 使用抽象命名空间避免文件残留[6](@ref)
	addr.sun_path[0] = '\0';
	strncpy(addr.sun_path + 1, TCHAR_TO_UTF8(*SunPath), sizeof(addr.sun_path) - 2);

	// 2. 绑定并监听
	if (bind(OutSocketFD, (struct sockaddr*)&addr, sizeof(addr)) == -1) {
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::CreateUnixSocket Failed By bind failed"));
		close(OutSocketFD);
		OutSocketFD = -1;
		return false;
	}
	listen(OutSocketFD, 1);

	OutClientSocketFD = accept(OutSocketFD, nullptr, nullptr);
	return true;
#endif
}

bool UTextureBufferShareObjectVulkan::ConnectUnixSocket(const FString& Name, int& OutSocketFD)
{
	const FString SunPath = FString::Printf(TEXT("/tmp/vulkan_%s"), *Name);
#if PLATFORM_WINDOWS
	return false;
#else
	// 1. 创建Socket连接
	OutSocketFD = socket(AF_UNIX, SOCK_STREAM, 0);
	struct sockaddr_un addr = { .sun_family = AF_UNIX };

	// 匹配导出端的抽象命名空间[6](@ref)
	addr.sun_path[0] = '\0';
	strncpy(addr.sun_path + 1, TCHAR_TO_UTF8(*SunPath), sizeof(addr.sun_path) - 2);

	// 2. 连接服务端
	if (connect(OutSocketFD, (struct sockaddr*)&addr, sizeof(addr)) == -1) {
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::ConnectUnixSocket Failed By connect failed"));
		close(OutSocketFD);
		OutSocketFD = -1;
		return false;
	}
	return true;
#endif
}

bool UTextureBufferShareObjectVulkan::ClosedSocketFD(int SocketFD)
{
#if PLATFORM_WINDOWS
	return false;
#else
	close(SocketFD);
	return true;
#endif
}

bool UTextureBufferShareObjectVulkan::SendDataToUnixSocket(int SocketFD, const VulkanShareTextureShmStruct& InData)
{
#if PLATFORM_WINDOWS
	return false;
#else
	// 1. 准备消息结构
	struct msghdr msg = { 0 };
	struct iovec io[1];
	char ctrl_buf[CMSG_SPACE(sizeof(int))];

	// 2. 传递纹理元数据
	char data_buf[sizeof(VulkanShareTextureShmStruct)];
	memcpy(data_buf, &InData, sizeof(VulkanShareTextureShmStruct));
	io[0].iov_base = data_buf;
	io[0].iov_len = sizeof(VulkanShareTextureShmStruct);
	msg.msg_iov = io;
	msg.msg_iovlen = 1;

	// 3. 设置控制消息传递FD
	msg.msg_control = ctrl_buf;
	msg.msg_controllen = sizeof(ctrl_buf);
	struct cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
	cmsg->cmsg_level = SOL_SOCKET;
	cmsg->cmsg_type = SCM_RIGHTS;
	cmsg->cmsg_len = CMSG_LEN(sizeof(int));
	*(int*)CMSG_DATA(cmsg) = InData.Linux_HandleFd;
	msg.msg_controllen = CMSG_SPACE(sizeof(int));

	// 4. 发送数据和FD
	if (sendmsg(SocketFD, &msg, 0) == -1) {
		UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::SendDataToUnixSocket Failed By sendmsg failed"));
		return false;
	}
	return true;
#endif
}

bool UTextureBufferShareObjectVulkan::ReadDataFromUnixSocket(int SocketFD, VulkanShareTextureShmStruct& OutData)
{
#if PLATFORM_WINDOWS
	return false;
#else
	// 1. 准备接收缓冲区
	struct msghdr msg = { 0 };
	struct iovec io[1];
	char ctrl_buf[CMSG_SPACE(sizeof(int))];
	char data_buf[sizeof(VulkanShareTextureShmStruct)];

	// 2. 设置数据接收区
	io[0].iov_base = data_buf;
	io[0].iov_len = sizeof(VulkanShareTextureShmStruct);
	msg.msg_iov = io;
	msg.msg_iovlen = 1;

	// 3. 设置控制消息接收FD
	msg.msg_control = ctrl_buf;
	msg.msg_controllen = sizeof(ctrl_buf);

	// 4. 接收数据和FD
	while (recvmsg(SocketFD, &msg, 0) <= 0) {
		//UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::ReadDataFromUnixSocket Failed By recvmsg failed"));
		//return false;
	}

	// 5. 提取元数据
	memcpy(&OutData, data_buf, sizeof(VulkanShareTextureShmStruct));

	// 6. 提取FD
	struct cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
	if (cmsg && cmsg->cmsg_type == SCM_RIGHTS) {
		OutData.Linux_HandleFd = *(int*)CMSG_DATA(cmsg);
		return true;
	}

	UE_LOG(LogTemp, Error, TEXT("UTextureBufferShareObject_Vulkan::ReadDataFromUnixSocket Failed By End"));
	return false;
#endif
}
