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
	//��ͳ�����ϵ���������ֱ�Ӱ����ϽǶ���ķ�ʽ���
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTexture(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture);

	static void CopyTexture_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture);

	//����Ŀ�������С��ԭʼ�����ϳ��Ծ��вü��������С�����������ϽǶ���ķ�ʽ���
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTextureClipToCenter(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint());

	static void CopyTextureClipToCenter_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint());


	//�ھ��вü��Ļ����ϳ��Ը�������ѹ���������С���о��ѹ��
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "CopyTexutreByShaderTools")
	static void CopyTextureClipToCenterAndCompress(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint(), const FIntPoint& CompressSize = FIntPoint());

	static void CopyTextureClipToCenterAndCompress_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize = FIntPoint(), const FIntPoint& CompressSize = FIntPoint());
};
