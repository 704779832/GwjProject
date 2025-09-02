// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureShare/TextureShareHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShareHelper() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObject_NoRegister();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureShareHelper();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureShareHelper_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UTextureShareHelper Function CopyTextureShareHandleToTexture
struct Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics
{
	struct TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms
	{
		UObject* WorldContextObject;
		UTextureBufferShareObject* Source;
		UTexture* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TextureShareHelper" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureShareHelper.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms, Source), Z_Construct_UClass_UTextureBufferShareObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms), &Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareHelper, nullptr, "CopyTextureShareHandleToTexture", nullptr, nullptr, Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::TextureShareHelper_eventCopyTextureShareHandleToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureShareHelper::execCopyTextureShareHandleToTexture)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTextureBufferShareObject,Z_Param_Source);
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTextureShareHelper::CopyTextureShareHandleToTexture(Z_Param_WorldContextObject,Z_Param_Source,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UTextureShareHelper Function CopyTextureShareHandleToTexture

// Begin Class UTextureShareHelper Function CreateTextureShareHandle
struct Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics
{
	struct TextureShareHelper_eventCreateTextureShareHandle_Parms
	{
		UObject* WorldContextObject;
		FString InName;
		int32 InWidth;
		int32 InHeight;
		TEnumAsByte<EPixelFormat> Format;
		UTextureBufferShareObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TextureShareHelper" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureShareHelper.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(0, nullptr) }; // 2051073252
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandle_Parms, ReturnValue), Z_Construct_UClass_UTextureBufferShareObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareHelper, nullptr, "CreateTextureShareHandle", nullptr, nullptr, Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::TextureShareHelper_eventCreateTextureShareHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::TextureShareHelper_eventCreateTextureShareHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureShareHelper::execCreateTextureShareHandle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_PROPERTY(FByteProperty,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureBufferShareObject**)Z_Param__Result=UTextureShareHelper::CreateTextureShareHandle(Z_Param_WorldContextObject,Z_Param_InName,Z_Param_InWidth,Z_Param_InHeight,EPixelFormat(Z_Param_Format));
	P_NATIVE_END;
}
// End Class UTextureShareHelper Function CreateTextureShareHandle

// Begin Class UTextureShareHelper Function CreateTextureShareHandleByRT
struct Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics
{
	struct TextureShareHelper_eventCreateTextureShareHandleByRT_Parms
	{
		UObject* WorldContextObject;
		FString InName;
		UTextureRenderTarget2D* Source;
		UTextureBufferShareObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TextureShareHelper" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureShareHelper.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandleByRT_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandleByRT_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandleByRT_Parms, Source), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventCreateTextureShareHandleByRT_Parms, ReturnValue), Z_Construct_UClass_UTextureBufferShareObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareHelper, nullptr, "CreateTextureShareHandleByRT", nullptr, nullptr, Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::TextureShareHelper_eventCreateTextureShareHandleByRT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::TextureShareHelper_eventCreateTextureShareHandleByRT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureShareHelper::execCreateTextureShareHandleByRT)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureBufferShareObject**)Z_Param__Result=UTextureShareHelper::CreateTextureShareHandleByRT(Z_Param_WorldContextObject,Z_Param_InName,Z_Param_Source);
	P_NATIVE_END;
}
// End Class UTextureShareHelper Function CreateTextureShareHandleByRT

// Begin Class UTextureShareHelper Function OpenTextureShareHandle
struct Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics
{
	struct TextureShareHelper_eventOpenTextureShareHandle_Parms
	{
		UObject* WorldContextObject;
		FString InName;
		UTextureBufferShareObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TextureShareHelper" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureShareHelper.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventOpenTextureShareHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventOpenTextureShareHandle_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShareHelper_eventOpenTextureShareHandle_Parms, ReturnValue), Z_Construct_UClass_UTextureBufferShareObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareHelper, nullptr, "OpenTextureShareHandle", nullptr, nullptr, Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::TextureShareHelper_eventOpenTextureShareHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::TextureShareHelper_eventOpenTextureShareHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureShareHelper::execOpenTextureShareHandle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureBufferShareObject**)Z_Param__Result=UTextureShareHelper::OpenTextureShareHandle(Z_Param_WorldContextObject,Z_Param_InName);
	P_NATIVE_END;
}
// End Class UTextureShareHelper Function OpenTextureShareHandle

// Begin Class UTextureShareHelper
void UTextureShareHelper::StaticRegisterNativesUTextureShareHelper()
{
	UClass* Class = UTextureShareHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyTextureShareHandleToTexture", &UTextureShareHelper::execCopyTextureShareHandleToTexture },
		{ "CreateTextureShareHandle", &UTextureShareHelper::execCreateTextureShareHandle },
		{ "CreateTextureShareHandleByRT", &UTextureShareHelper::execCreateTextureShareHandleByRT },
		{ "OpenTextureShareHandle", &UTextureShareHelper::execOpenTextureShareHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureShareHelper);
UClass* Z_Construct_UClass_UTextureShareHelper_NoRegister()
{
	return UTextureShareHelper::StaticClass();
}
struct Z_Construct_UClass_UTextureShareHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureShare/TextureShareHelper.h" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureShareHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureShareHelper_CopyTextureShareHandleToTexture, "CopyTextureShareHandleToTexture" }, // 1683289410
		{ &Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandle, "CreateTextureShareHandle" }, // 3467791305
		{ &Z_Construct_UFunction_UTextureShareHelper_CreateTextureShareHandleByRT, "CreateTextureShareHandleByRT" }, // 2989863023
		{ &Z_Construct_UFunction_UTextureShareHelper_OpenTextureShareHandle, "OpenTextureShareHandle" }, // 898795982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureShareHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureShareHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureShareHelper_Statics::ClassParams = {
	&UTextureShareHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureShareHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureShareHelper()
{
	if (!Z_Registration_Info_UClass_UTextureShareHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureShareHelper.OuterSingleton, Z_Construct_UClass_UTextureShareHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureShareHelper.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UTextureShareHelper>()
{
	return UTextureShareHelper::StaticClass();
}
UTextureShareHelper::UTextureShareHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureShareHelper);
UTextureShareHelper::~UTextureShareHelper() {}
// End Class UTextureShareHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureShareHelper, UTextureShareHelper::StaticClass, TEXT("UTextureShareHelper"), &Z_Registration_Info_UClass_UTextureShareHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureShareHelper), 185294916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_2755838698(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
