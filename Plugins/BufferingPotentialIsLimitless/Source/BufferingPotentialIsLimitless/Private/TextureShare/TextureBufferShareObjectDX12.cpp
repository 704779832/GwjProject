#include "TextureShare/TextureBufferShareObjectDX12.h"
#include "Engine/TextureRenderTarget2D.h"
#if PLATFORM_WINDOWS
#include "ID3D12DynamicRHI.h"
THIRD_PARTY_INCLUDES_START
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include <d3d12.h>
#include <aclapi.h>
#include <VersionHelpers.h>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
THIRD_PARTY_INCLUDES_END

static inline const FString MyGetD3D12ComErrorDescription(HRESULT Res)
{
	const uint32 BufSize = 4096;
	WIDECHAR buffer[4096];
	if (::FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM,
		nullptr,
		Res,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_NEUTRAL),
		buffer,
		sizeof(buffer) / sizeof(*buffer),
		nullptr))
	{
		return buffer;
	}
	else
	{
		return TEXT("[cannot find d3d12 error description]");
	}
}

static EPixelFormat DXFormatToPixelFormat(DXGI_FORMAT InFormat)
{
	if (InFormat != DXGI_FORMAT_UNKNOWN)
	{
		for (uint32 PixelFormat = 0; PixelFormat < EPixelFormat::PF_MAX; ++PixelFormat)
		{
			if (GPixelFormats[PixelFormat].Supported
				&& GPixelFormats[PixelFormat].PlatformFormat == InFormat)
			{
				// Found
				return (EPixelFormat)PixelFormat;
			}
		}
	}
	return EPixelFormat::PF_Unknown;
}
#endif

UTextureBufferShareObjectDX12::~UTextureBufferShareObjectDX12()
{
#if PLATFORM_WINDOWS
	if (DX_ShareHandle_NT)
	{
		CloseHandle(DX_ShareHandle_NT);

		DX_ShareHandle_NT = nullptr;
	}

	if (!bExtendRHI)
	{
		if (mBufferRHI.IsValid())
		{
			mBufferRHI.SafeRelease();
			mBufferRHI = nullptr;
		}
	}

	DX_ShareHandle = nullptr;
#endif
}

bool UTextureBufferShareObjectDX12::CreateShareHandle(const FString& InName, int InWidth, int InHeight, EPixelFormat Format)
{
#if PLATFORM_WINDOWS
	if (GDynamicRHI->GetInterfaceType() != ERHIInterfaceType::D3D12)return false;

	ShareName = FString::Printf(TEXT("Global\\%s"), *InName);
	bExtendRHI = false;
	Width = FMath::Max(2, InWidth);
	Height = FMath::Max(2, InHeight);

	//创建共享的缓存Buffer
	FRHITextureCreateDesc Desc =
		FRHITextureCreateDesc::Create2D(TEXT("UTextureBufferShare_DX12"), Width, Height, Format)
		.SetClearValue(FClearValueBinding::None)
		.SetFlags(ETextureCreateFlags::RenderTargetable)
		.SetInitialState(ERHIAccess::Present)
		.DetermineInititialState();

	Desc.AddFlags(ETextureCreateFlags::Shared);
	mBufferRHI = GDynamicRHI->RHICreateTexture(FRHICommandListImmediate::Get(),Desc);
	//创建DX共享句柄
	return CreateDX12BufferShareHandle();
#else
    return false;
#endif


}

bool UTextureBufferShareObjectDX12::CreateShareHandleByRenderTarget(const FString& InName, UTextureRenderTarget2D* Source)
{
#if PLATFORM_WINDOWS
	if (!::IsValid(Source))return false;

	ShareName = FString::Printf(TEXT("Global\\%s"), *InName);
	bExtendRHI = true;
	Width = FMath::Max(2, Source->SizeX);
	Height = FMath::Max(2, Source->SizeY);

	FTextureResource* TextureResource = Source->GetResource();
	if (!TextureResource)return false;
	mBufferRHI = TextureResource->GetTextureRHI();
	//创建DX共享句柄
	return CreateDX12BufferShareHandle();
#else
    return false;
#endif
}

bool UTextureBufferShareObjectDX12::OpenShareHandle(const FString& InName)
{
#if PLATFORM_WINDOWS
	if (GDynamicRHI->GetInterfaceType() != ERHIInterfaceType::D3D12)return false;
	ShareName = FString::Printf(TEXT("Global\\%s"), *InName);

	ID3D12Device* tempD3D12Device = static_cast<ID3D12Device*>(GDynamicRHI->RHIGetNativeDevice());
	HRESULT Result = tempD3D12Device->OpenSharedHandleByName(*ShareName, GENERIC_ALL, &(DX_ShareHandle_NT));
	if (FAILED(Result))
	{
		UE_LOG(LogTemp, Warning, TEXT("OpenSharedHandleByName Failed! %X - %s"), Result,
			*(MyGetD3D12ComErrorDescription(Result)));
		return false;
	}

	Result = tempD3D12Device->OpenSharedHandle(DX_ShareHandle_NT, __uuidof(ID3D12Resource), &(DX_ShareHandle));

	if (FAILED(Result))
	{
		UE_LOG(LogTemp, Warning, TEXT("OpenSharedHandle Failed! %X - %s"), Result,
			*(MyGetD3D12ComErrorDescription(Result)));
		return false;
	}

	ID3D12Resource* tempResource = (ID3D12Resource*)DX_ShareHandle;

	D3D12_RESOURCE_DESC tempDesc= tempResource->GetDesc();

	bExtendRHI = false;
	Width = tempDesc.Width;
	Height = tempDesc.Height;

	mBufferRHI= GetID3D12DynamicRHI()->RHICreateTexture2DFromResource(DXFormatToPixelFormat(tempDesc.Format), 
		TexCreate_Dynamic, FClearValueBinding::None, tempResource);
	return true;
#else
	return false;
#endif
}

bool UTextureBufferShareObjectDX12::CreateDX12BufferShareHandle()
{
#if PLATFORM_WINDOWS
	if (!mBufferRHI.IsValid())return false;

	const int64 TextureMemorySize = GetID3D12DynamicRHI()->RHIGetResourceMemorySize(mBufferRHI);

	ID3D12Device* tempD3D12Device = static_cast<ID3D12Device*>(GDynamicRHI->RHIGetNativeDevice());
	ID3D12Resource* tempResourceD3D12 = static_cast<ID3D12Resource*>(
		mBufferRHI->GetNativeResource());
	const DWORD dwAccess = GENERIC_ALL;

	HRESULT Result = tempD3D12Device->CreateSharedHandle(tempResourceD3D12, NULL, dwAccess, *ShareName, &DX_ShareHandle_NT);
	if (FAILED(Result))
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateSharedHandle Failed! %X - %s"), Result,
			*(MyGetD3D12ComErrorDescription(Result)));
		return false;
	}
	MemorySize = TextureMemorySize;
	return true;
#else
	return false;
#endif
}
