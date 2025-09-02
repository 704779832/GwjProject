// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextureShareHelper.generated.h"

class UTextureBufferShareObject;
class UTextureRenderTarget2D;
class UTexture;

UCLASS()
class BUFFERINGPOTENTIALISLIMITLESS_API UTextureShareHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "TextureShareHelper")
	static UTextureBufferShareObject* CreateTextureShareHandle(UObject* WorldContextObject, const FString& InName, int InWidth, int InHeight, EPixelFormat Format);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "TextureShareHelper")
	static UTextureBufferShareObject* CreateTextureShareHandleByRT(UObject* WorldContextObject, const FString& InName, UTextureRenderTarget2D* Source);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "TextureShareHelper")
	static UTextureBufferShareObject* OpenTextureShareHandle(UObject* WorldContextObject, const FString& InName);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "TextureShareHelper")
	static bool CopyTextureShareHandleToTexture(UObject* WorldContextObject, UTextureBufferShareObject* Source, UTexture* Target);
};
