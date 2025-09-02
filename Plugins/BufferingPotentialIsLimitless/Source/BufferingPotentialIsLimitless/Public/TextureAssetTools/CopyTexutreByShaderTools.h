// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CopyTexutreByShaderTools.generated.h"

class UTextureRenderTarget2D;
class FRHITexture;
class UTexture;

UCLASS()
class BUFFERINGPOTENTIALISLIMITLESS_API UCopyTexutreByShaderTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//传统意义上的纹理拷贝，直接按左上角对齐的方式填充
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTexture(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture);

	static void CopyTexture_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture);

	//根据目标纹理大小在原始纹理上尝试居中裁剪，如果大小不允许则按左上角对齐的方式填充
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTextureClipToCenter(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint());

	static void CopyTextureClipToCenter_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint());


	//在居中裁剪的基础上尝试根据输入压缩的纹理大小进行卷积压缩
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTextureClipToCenterAndCompress(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint(), const FIntPoint& CompressSize = FIntPoint());

	static void CopyTextureClipToCenterAndCompress_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint(), const FIntPoint& CompressSize = FIntPoint());
};
