// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "CudaHelper.generated.h"

#if defined(_WIN64) || defined(__LP64__)
typedef unsigned long long UCudaMemoryPtr;
#else
typedef unsigned int UCudaMemoryPtr;
#endif

typedef struct UCudaIpcMemHandle_st {
	char reserved[64];
} UCudaIpcMemHandle;

typedef struct UShmStruct_st {
	UCudaIpcMemHandle memHandle;
} UShmStruct;

UCLASS()
class BUFFERINGPOTENTIALISLIMITLESS_API UCudaHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static void Synchronize();

	static bool Alloc(uint32 Size, UCudaMemoryPtr& OutMemory);

	static bool Free(UCudaMemoryPtr Memory);

	static bool CopyDeviceToDevice(UCudaMemoryPtr Src, UCudaMemoryPtr Target, uint32 Size, bool bAsync = false);

	static bool CopyDeviceToHost(UCudaMemoryPtr Src, void* Target, uint32 Size, bool bAsync = false);

	static bool CopyDeviceToArray(UCudaMemoryPtr Src, void* Target, uint64 Offset, uint32 Size);

	static bool CopyArrayToArray(void* Src, uint64 SrcOffset, void* Target, uint64 TargetOffset, uint32 Size);

	static bool CopyArrayToDevice(void* Src, UCudaMemoryPtr Target, uint64 Offset, uint32 Size);

	static bool CopyArrayToHost(void* Src, void* Target, uint64 Offset, uint32 Size, bool bAsync = false);

	static bool CopyHostToDevice(void* Src, UCudaMemoryPtr Target, uint32 Size, bool bAsync = false);

	static bool CopyHostToArray(void* Src, void* Target, uint64 Offset, uint32 Size, bool bAsync = false);
public:
	static bool CopyArrayToDevice_2D(void* Src, UCudaMemoryPtr Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter = false, bool bAsync = false);

	static bool CopyDeviceToArray_2D(UCudaMemoryPtr Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter = false, bool bAsync = false);

	static bool CopyArrayToHost_2D(void* Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter = false, bool bAsync = false);

	static bool CopyHostToArray_2D(void* Src, void* Target, const FIntPoint& SrcSize, const FIntPoint& TargetSize, const int32 BlockBytes, bool bClipCenter = false, bool bAsync = false);

public:
	static bool CreateExternalMemoryByShareHandle(void* InShareHandle, uint32 Size, void*& OutExternalMemory);

	static bool CreateExternalMemoryByFdHandle(int InFdHandle, uint32 Size, void*& OutExternalMemory);

	static bool DestoryExternalMemory(void* ExternalMemory);

	static bool GetExternalMemoryBuffer(void* ExternalMemory, uint32 Size, UCudaMemoryPtr& OutExternalMemoryBuffer);

	static bool DestoryExternalMemoryBuffer(UCudaMemoryPtr ExternalMemoryBuffer);

	static bool GetExternalMemoryMappedMipmappedArray(void* ExternalMemory, uint64 Offset, int32 Width, int32 Height, void*& OutMappedMipArray);

	static bool DestoryExternalMemoryMipmappedArray(void* MappedMipArray);

	static bool GetMipmappedArrayByLevel(void* MappedMipArray, int Level, void*& OutArray);

	static bool DestoryMipmappedArray(void* Array);

	static bool IpcCreateMenHandle(UCudaMemoryPtr BindMemory, volatile UCudaIpcMemHandle& OutIPCHandle);

	static bool IpcOpenMenHandle(const volatile UCudaIpcMemHandle& IPCHandle, UCudaMemoryPtr& OutBindMemory);

	static bool IpcCloseMenHandle(UCudaMemoryPtr BindMemory);

	static bool PushContextToCurrentThread();

	static bool PopContextFromCurrentThread();
};
