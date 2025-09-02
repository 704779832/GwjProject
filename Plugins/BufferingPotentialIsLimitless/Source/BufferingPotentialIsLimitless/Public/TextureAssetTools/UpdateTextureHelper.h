// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UpdateTextureHelper.generated.h"


class UTexture;
class UTexture2D;
class UVolumeTexture;
class UTexture2DArray;

struct FTexturePlatformData;
enum EPixelFormat : uint8;

UCLASS()
class BUFFERINGPOTENTIALISLIMITLESS_API UUpdateTextureHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static void CopyTextureData2D(const void* Source, void* Dest, uint32 SizeY, EPixelFormat Format, uint32 SourceStride, uint32 DestStride);

	static FTexturePlatformData* SafeGetTexturePlatformData(UTexture* Target);

	static void SafeSetTexturePlatformData(UTexture* Target, FTexturePlatformData* PlatformData);

	static FIntVector4 SafeGetTextureSizeAndNumMip(UTexture* Target);

	static EPixelFormat SafeGetTexturePixelFormat(UTexture* Target);
public:
	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_TextureUpdateResource(UTexture* Target);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_SetTextureSRGB(UTexture* Target, bool bSRGB);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_SetTextureFormat(UTexture* Target, ETextureSourceFormat Format);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_SetTextureCompressionSetting(UTexture* Target, TextureCompressionSettings CompressionSetting);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_SetTextureTextureGroup(UTexture* Target, TextureGroup InGroup);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void Editor_SetTextureSize(UTexture* Target, const FVector& Size, int32 NumMip = 1);

	static void Editor_WriteDataToTexture(UTexture* Target, const TArray<uint8>& Data);

	static void Editor_ClearTextureData(UTexture* Target);

	static void Editor_ReadDataFromTexture(UTexture* Target, TArray<uint8>& Data);
private:
	static void mRuntime_WriteDataToTexture2D_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2D* Target, const TArray<uint8>& Data);

	static void mRuntime_WriteDataToVolumeTexture_RenderThread(FRHICommandListImmediate& RHICmdList, UVolumeTexture* Target, const TArray<uint8>& Data);

	static void mRuntime_WriteDataToTexture2DArray_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2DArray* Target, const TArray<uint8>& Data);

	static void mRuntime_ReadDataFromTexture2D_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2D* Target, TArray<uint8>& Data);

	static void mRuntime_ReadDataFromVolumeTexture_RenderThread(FRHICommandListImmediate& RHICmdList, UVolumeTexture* Target, TArray<uint8>& Data);

	static void mRuntime_ReadDataFromTexture2DArray_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2DArray* Target, TArray<uint8>& Data);
public:
	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void WriteDataToTexture(UTexture* Target, const TArray<uint8>& Data, bool bFlush = false);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void ClearTextureData(UTexture* Target, bool bFlush = false);

	UFUNCTION(BlueprintCallable, Category = "UpdateTextureHelper")
	static void ReadDataFromTexture(UTexture* Target, TArray<uint8>& Data);
};
