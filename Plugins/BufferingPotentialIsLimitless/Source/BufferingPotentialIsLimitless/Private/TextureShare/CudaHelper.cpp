#include "TextureShare/CudaHelper.h"
#include "CudaModule.h"

void UCudaHelper::Synchronize()
{
	FCUDAModule::CUDA().cuCtxSynchronize();
}

bool UCudaHelper::Alloc(uint32 Size, UCudaMemoryPtr& OutMemory)
{
	CUresult Result = FCUDAModule::CUDA().cuMemAlloc(&OutMemory, Size);
	FCUDAModule::CUDA().cuCtxSynchronize();

	void* aaa = &OutMemory;

	UCudaMemoryPtr bbb = *(UCudaMemoryPtr*)aaa;

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::Free(UCudaMemoryPtr Memory)
{
	if (!Memory)return false;

	CUresult Result = FCUDAModule::CUDA().cuMemFree(Memory);

	FCUDAModule::CUDA().cuCtxSynchronize();

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyDeviceToDevice(UCudaMemoryPtr Src, UCudaMemoryPtr Target, uint32 Size, bool bAsync)
{
	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpyDtoDAsync(Target, Src, Size, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpyDtoD(Target, Src, Size);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyDeviceToHost(UCudaMemoryPtr Src, void* Target, uint32 Size, bool bAsync)
{
	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpyDtoHAsync(Target, Src, Size, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpyDtoH(Target, Src, Size);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyDeviceToArray(UCudaMemoryPtr Src, void* Target, uint64 Offset, uint32 Size)
{
	CUresult Result = FCUDAModule::CUDA().cuMemcpyDtoA((CUarray)Target, Offset, Src, Size);
	FCUDAModule::CUDA().cuCtxSynchronize();

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyArrayToArray(void* Src, uint64 SrcOffset, void* Target, uint64 TargetOffset, uint32 Size)
{
	CUresult Result = FCUDAModule::CUDA().cuMemcpyAtoA((CUarray)Target, TargetOffset, (CUarray)Src, SrcOffset, Size);
	FCUDAModule::CUDA().cuCtxSynchronize();

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyArrayToDevice(void* Src, UCudaMemoryPtr Target, uint64 Offset, uint32 Size)
{
	CUresult Result = FCUDAModule::CUDA().cuMemcpyAtoD(Target, (CUarray)Src, Offset, Size);
	FCUDAModule::CUDA().cuCtxSynchronize();

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyArrayToHost(void* Src, void* Target, uint64 Offset, uint32 Size, bool bAsync)
{
	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpyAtoHAsync(Target, (CUarray)Src, Offset, Size, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpyAtoH(Target, (CUarray)Src, Offset, Size);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyHostToDevice(void* Src, UCudaMemoryPtr Target, uint32 Size, bool bAsync)
{
	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpyHtoDAsync(Target, Src, Size, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpyHtoD(Target, Src, Size);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyHostToArray(void* Src, void* Target, uint64 Offset, uint32 Size, bool bAsync)
{
	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpyHtoAAsync((CUarray)Target, Offset, Src, Size, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpyHtoA((CUarray)Target, Offset, Src, Size);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

static bool CudaCopy2D_ClipCenter(CUDA_MEMCPY2D& In, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bAsync)
{
	const int32 tempMinX = FMath::Min(SrcSize.X, TargetSize.X);
	const int32 tempMinY = FMath::Min(SrcSize.Y, TargetSize.Y);

	const int32 tempXOffset = SrcSize.X - TargetSize.X;
	const int32 tempYOffset = SrcSize.Y - TargetSize.Y;

	In.WidthInBytes = tempMinX * BlockBytes;
	In.Height = tempMinY;

	if (tempXOffset < 0)
	{
		In.dstXInBytes = FMath::Abs(tempXOffset) / 2 * BlockBytes;
	}
	else
	{
		In.srcXInBytes = tempXOffset / 2 * BlockBytes;
	}

	if (tempYOffset < 0)
	{
		In.dstY = FMath::Abs(tempYOffset) / 2;
	}
	else
	{
		In.srcY = tempYOffset / 2;
	}

	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpy2DAsync(&In, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpy2D(&In);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

static bool CudaCopy2D_LeftTop(CUDA_MEMCPY2D& In, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bAsync)
{
	const int32 tempMinX = FMath::Min(SrcSize.X, TargetSize.X);
	const int32 tempMinY = FMath::Min(SrcSize.Y, TargetSize.Y);

	const int32 tempXOffset = SrcSize.X - TargetSize.X;
	const int32 tempYOffset = SrcSize.Y - TargetSize.Y;

	In.WidthInBytes = tempMinX * BlockBytes;
	In.Height = tempMinY;

	if (tempXOffset < 0)
	{
		In.dstPitch = tempMinX * BlockBytes;
	}
	else
	{
		In.srcPitch = tempMinX * BlockBytes;
	}

	CUresult Result;
	if (bAsync)
	{
		Result = FCUDAModule::CUDA().cuMemcpy2DAsync(&In, 0);
	}
	else
	{
		Result = FCUDAModule::CUDA().cuMemcpy2D(&In);

		FCUDAModule::CUDA().cuCtxSynchronize();
	}

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CopyArrayToDevice_2D(void* Src, UCudaMemoryPtr Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter , bool bAsync)
{
	CUDA_MEMCPY2D temp = {};
	temp.srcMemoryType = CUmemorytype::CU_MEMORYTYPE_ARRAY;
	temp.srcArray = (CUarray)Src;

	temp.dstMemoryType = CUmemorytype::CU_MEMORYTYPE_DEVICE;
	temp.dstDevice = Target;

	if (bClipCenter)
	{
		return CudaCopy2D_ClipCenter(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
	else
	{
		return CudaCopy2D_LeftTop(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
}

bool UCudaHelper::CopyDeviceToArray_2D(UCudaMemoryPtr Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter, bool bAsync)
{
	CUDA_MEMCPY2D temp = {};
	temp.srcMemoryType = CUmemorytype::CU_MEMORYTYPE_DEVICE;
	temp.srcDevice = Src;

	temp.dstMemoryType = CUmemorytype::CU_MEMORYTYPE_ARRAY;
	temp.dstArray = (CUarray)Target;
	if (bClipCenter)
	{
		return CudaCopy2D_ClipCenter(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
	else
	{
		return CudaCopy2D_LeftTop(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
}

bool UCudaHelper::CopyArrayToHost_2D(void* Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter, bool bAsync)
{
	CUDA_MEMCPY2D temp = {};
	temp.srcMemoryType = CUmemorytype::CU_MEMORYTYPE_ARRAY;
	temp.srcArray = (CUarray)Src;

	temp.dstMemoryType = CUmemorytype::CU_MEMORYTYPE_HOST;
	temp.dstHost = Target;
	if (bClipCenter)
	{
		return CudaCopy2D_ClipCenter(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
	else
	{
		return CudaCopy2D_LeftTop(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
}

bool UCudaHelper::CopyHostToArray_2D(void* Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter, bool bAsync)
{
	CUDA_MEMCPY2D temp = {};
	temp.srcMemoryType = CUmemorytype::CU_MEMORYTYPE_HOST;
	temp.srcHost = Src;

	temp.dstMemoryType = CUmemorytype::CU_MEMORYTYPE_ARRAY;
	temp.dstArray = (CUarray)Target;
	if (bClipCenter)
	{
		return CudaCopy2D_ClipCenter(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
	else
	{
		return CudaCopy2D_LeftTop(temp, SrcSize, TargetSize, BlockBytes, bAsync);
	}
}

bool UCudaHelper::CreateExternalMemoryByShareHandle(void* InShareHandle, uint32 Size, void*& OutExternalMemory)
{
	CUDA_EXTERNAL_MEMORY_HANDLE_DESC CudaExtMemHandleDesc = {};
	CudaExtMemHandleDesc.type = CU_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE;
	CudaExtMemHandleDesc.handle.win32.name = NULL;
	CudaExtMemHandleDesc.handle.win32.handle = InShareHandle;
	CudaExtMemHandleDesc.size = Size;
	// Necessary for committed resources (DX11 and committed DX12 resources)
	CudaExtMemHandleDesc.flags |= CUDA_EXTERNAL_MEMORY_DEDICATED;

	CUexternalMemory MappedExternalMemory = nullptr;
	CUresult Result = FCUDAModule::CUDA().cuImportExternalMemory(&MappedExternalMemory, &CudaExtMemHandleDesc);

	OutExternalMemory = MappedExternalMemory;
	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::CreateExternalMemoryByFdHandle(int InFdHandle, uint32 Size, void*& OutExternalMemory)
{
	CUDA_EXTERNAL_MEMORY_HANDLE_DESC CudaExtMemHandleDesc = {};
	CudaExtMemHandleDesc.type = CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD;
	CudaExtMemHandleDesc.handle.fd = InFdHandle;
	CudaExtMemHandleDesc.size = Size;

	CUexternalMemory MappedExternalMemory = nullptr;
	CUresult Result = FCUDAModule::CUDA().cuImportExternalMemory(&MappedExternalMemory, &CudaExtMemHandleDesc);

	OutExternalMemory = MappedExternalMemory;
	return Result == CUDA_SUCCESS;;
}


bool UCudaHelper::DestoryExternalMemory(void* ExternalMemory)
{
	CUresult Result = FCUDAModule::CUDA().cuDestroyExternalMemory((CUexternalMemory)ExternalMemory);

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::GetExternalMemoryBuffer(void* ExternalMemory, uint32 Size, UCudaMemoryPtr& OutExternalMemoryBuffer)
{
	CUDA_EXTERNAL_MEMORY_BUFFER_DESC tempDesc = {};
	tempDesc.offset = 0;
	tempDesc.size = Size;
	tempDesc.flags = 0;

	CUresult Result = FCUDAModule::CUDA().cuExternalMemoryGetMappedBuffer(&OutExternalMemoryBuffer, ((CUexternalMemory)ExternalMemory), &tempDesc);

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::DestoryExternalMemoryBuffer(UCudaMemoryPtr ExternalMemoryBuffer)
{
	return Free(ExternalMemoryBuffer);
}

bool UCudaHelper::GetExternalMemoryMappedMipmappedArray(void* ExternalMemory, uint64 Offset, int32 Width, int32 Height, void*& OutMappedMipArray)
{
	CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC MipmapDesc = {};
	MipmapDesc.numLevels = 1;
	MipmapDesc.offset = Offset;
	MipmapDesc.arrayDesc.Width = Width;
	MipmapDesc.arrayDesc.Height = Height;
#if PLATFORM_WINDOWS
	MipmapDesc.arrayDesc.Depth = 1;//DX使用深度 1
#else
	MipmapDesc.arrayDesc.Depth = 0;//Vulkan使用深度 1
#endif
	MipmapDesc.arrayDesc.NumChannels = 4;
	MipmapDesc.arrayDesc.Format = CU_AD_FORMAT_UNSIGNED_INT8;
	MipmapDesc.arrayDesc.Flags = CUDA_ARRAY3D_SURFACE_LDST | CUDA_ARRAY3D_COLOR_ATTACHMENT;

	CUmipmappedArray MappedMipArray = nullptr;
	CUresult Result = FCUDAModule::CUDA().cuExternalMemoryGetMappedMipmappedArray(&MappedMipArray, ((CUexternalMemory)ExternalMemory), &MipmapDesc);

	OutMappedMipArray = MappedMipArray;

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::DestoryExternalMemoryMipmappedArray(void* MappedMipArray)
{
	CUresult Result = FCUDAModule::CUDA().cuMipmappedArrayDestroy((CUmipmappedArray)MappedMipArray);
	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::GetMipmappedArrayByLevel(void* MappedMipArray, int Level, void*& OutArray)
{
	CUarray MappedArray = nullptr;
	CUresult Result = FCUDAModule::CUDA().cuMipmappedArrayGetLevel(&MappedArray, (CUmipmappedArray)MappedMipArray, Level);
	OutArray = MappedArray;

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::DestoryMipmappedArray(void* Array)
{
	CUresult Result = FCUDAModule::CUDA().cuArrayDestroy((CUarray)Array);

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::IpcCreateMenHandle(UCudaMemoryPtr BindMemory, volatile UCudaIpcMemHandle& OutIPCHandle)
{
	CUresult Result = FCUDAModule::CUDA().cuIpcGetMemHandle((CUipcMemHandle*)(&OutIPCHandle), BindMemory);
	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::IpcOpenMenHandle(const volatile UCudaIpcMemHandle& IPCHandle, UCudaMemoryPtr& OutBindMemory)
{
	//cudaIpcMemLazyEnablePeerAccess 0x01
	//CUipcMemHandle temp;
	//std::memcpy(temp.reserved, IPCHandle.reserved, 64);
	CUresult Result = FCUDAModule::CUDA().cuIpcOpenMemHandle(&OutBindMemory, *(CUipcMemHandle*)(&IPCHandle), 0x01);
	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::IpcCloseMenHandle(UCudaMemoryPtr BindMemory)
{
	CUresult Result = FCUDAModule::CUDA().cuIpcCloseMemHandle(BindMemory);
	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::PushContextToCurrentThread()
{
	CUresult Result =  FCUDAModule::CUDA().cuCtxPushCurrent(
		FModuleManager::GetModuleChecked<FCUDAModule>("CUDA").GetCudaContext());

	return Result == CUDA_SUCCESS;
}

bool UCudaHelper::PopContextFromCurrentThread()
{
	CUresult Result = FCUDAModule::CUDA().cuCtxPopCurrent(NULL);
	return Result == CUDA_SUCCESS;
}
