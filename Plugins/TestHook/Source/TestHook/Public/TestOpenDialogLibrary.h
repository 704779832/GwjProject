// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestOpenDialogLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TESTHOOK_API UTestOpenDialogLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static void TestOpenDialog();
};
