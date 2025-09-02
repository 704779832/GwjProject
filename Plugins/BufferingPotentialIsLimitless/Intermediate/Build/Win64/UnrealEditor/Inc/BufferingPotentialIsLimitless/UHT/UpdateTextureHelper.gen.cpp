// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureAssetTools/UpdateTextureHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateTextureHelper() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UUpdateTextureHelper();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UUpdateTextureHelper_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UUpdateTextureHelper Function ClearTextureData
struct Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics
{
	struct UpdateTextureHelper_eventClearTextureData_Parms
	{
		UTexture* Target;
		bool bFlush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "CPP_Default_bFlush", "false" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bFlush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventClearTextureData_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_bFlush_SetBit(void* Obj)
{
	((UpdateTextureHelper_eventClearTextureData_Parms*)Obj)->bFlush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_bFlush = { "bFlush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateTextureHelper_eventClearTextureData_Parms), &Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_bFlush_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::NewProp_bFlush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "ClearTextureData", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::UpdateTextureHelper_eventClearTextureData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::UpdateTextureHelper_eventClearTextureData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execClearTextureData)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bFlush);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::ClearTextureData(Z_Param_Target,Z_Param_bFlush);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function ClearTextureData

// Begin Class UUpdateTextureHelper Function Editor_SetTextureCompressionSetting
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics
{
	struct UpdateTextureHelper_eventEditor_SetTextureCompressionSetting_Parms
	{
		UTexture* Target;
		TEnumAsByte<TextureCompressionSettings> CompressionSetting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureCompressionSetting_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::NewProp_CompressionSetting = { "CompressionSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureCompressionSetting_Parms, CompressionSetting), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(0, nullptr) }; // 2123615340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::NewProp_CompressionSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_SetTextureCompressionSetting", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::UpdateTextureHelper_eventEditor_SetTextureCompressionSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::UpdateTextureHelper_eventEditor_SetTextureCompressionSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_SetTextureCompressionSetting)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_PROPERTY(FByteProperty,Z_Param_CompressionSetting);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_SetTextureCompressionSetting(Z_Param_Target,TextureCompressionSettings(Z_Param_CompressionSetting));
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_SetTextureCompressionSetting

// Begin Class UUpdateTextureHelper Function Editor_SetTextureFormat
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics
{
	struct UpdateTextureHelper_eventEditor_SetTextureFormat_Parms
	{
		UTexture* Target;
		TEnumAsByte<ETextureSourceFormat> Format;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureFormat_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureFormat_Parms, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(0, nullptr) }; // 3865012508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_SetTextureFormat", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::UpdateTextureHelper_eventEditor_SetTextureFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::UpdateTextureHelper_eventEditor_SetTextureFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_SetTextureFormat)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_PROPERTY(FByteProperty,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_SetTextureFormat(Z_Param_Target,ETextureSourceFormat(Z_Param_Format));
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_SetTextureFormat

// Begin Class UUpdateTextureHelper Function Editor_SetTextureSize
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics
{
	struct UpdateTextureHelper_eventEditor_SetTextureSize_Parms
	{
		UTexture* Target;
		FVector Size;
		int32 NumMip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "CPP_Default_NumMip", "1" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumMip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureSize_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureSize_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_NumMip = { "NumMip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureSize_Parms, NumMip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::NewProp_NumMip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_SetTextureSize", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::UpdateTextureHelper_eventEditor_SetTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::UpdateTextureHelper_eventEditor_SetTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_SetTextureSize)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumMip);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_SetTextureSize(Z_Param_Target,Z_Param_Out_Size,Z_Param_NumMip);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_SetTextureSize

// Begin Class UUpdateTextureHelper Function Editor_SetTextureSRGB
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics
{
	struct UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms
	{
		UTexture* Target;
		bool bSRGB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_bSRGB_SetBit(void* Obj)
{
	((UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms*)Obj)->bSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms), &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::NewProp_bSRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_SetTextureSRGB", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::UpdateTextureHelper_eventEditor_SetTextureSRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_SetTextureSRGB)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bSRGB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_SetTextureSRGB(Z_Param_Target,Z_Param_bSRGB);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_SetTextureSRGB

// Begin Class UUpdateTextureHelper Function Editor_SetTextureTextureGroup
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics
{
	struct UpdateTextureHelper_eventEditor_SetTextureTextureGroup_Parms
	{
		UTexture* Target;
		TEnumAsByte<TextureGroup> InGroup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureTextureGroup_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_SetTextureTextureGroup_Parms, InGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(0, nullptr) }; // 2065735531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::NewProp_InGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_SetTextureTextureGroup", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::UpdateTextureHelper_eventEditor_SetTextureTextureGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::UpdateTextureHelper_eventEditor_SetTextureTextureGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_SetTextureTextureGroup)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_PROPERTY(FByteProperty,Z_Param_InGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_SetTextureTextureGroup(Z_Param_Target,TextureGroup(Z_Param_InGroup));
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_SetTextureTextureGroup

// Begin Class UUpdateTextureHelper Function Editor_TextureUpdateResource
struct Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics
{
	struct UpdateTextureHelper_eventEditor_TextureUpdateResource_Parms
	{
		UTexture* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventEditor_TextureUpdateResource_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "Editor_TextureUpdateResource", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::UpdateTextureHelper_eventEditor_TextureUpdateResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::UpdateTextureHelper_eventEditor_TextureUpdateResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execEditor_TextureUpdateResource)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::Editor_TextureUpdateResource(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function Editor_TextureUpdateResource

// Begin Class UUpdateTextureHelper Function ReadDataFromTexture
struct Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics
{
	struct UpdateTextureHelper_eventReadDataFromTexture_Parms
	{
		UTexture* Target;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventReadDataFromTexture_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventReadDataFromTexture_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "ReadDataFromTexture", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::UpdateTextureHelper_eventReadDataFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::UpdateTextureHelper_eventReadDataFromTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execReadDataFromTexture)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::ReadDataFromTexture(Z_Param_Target,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function ReadDataFromTexture

// Begin Class UUpdateTextureHelper Function WriteDataToTexture
struct Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics
{
	struct UpdateTextureHelper_eventWriteDataToTexture_Parms
	{
		UTexture* Target;
		TArray<uint8> Data;
		bool bFlush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UpdateTextureHelper" },
		{ "CPP_Default_bFlush", "false" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bFlush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventWriteDataToTexture_Parms, Target), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateTextureHelper_eventWriteDataToTexture_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_bFlush_SetBit(void* Obj)
{
	((UpdateTextureHelper_eventWriteDataToTexture_Parms*)Obj)->bFlush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_bFlush = { "bFlush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateTextureHelper_eventWriteDataToTexture_Parms), &Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_bFlush_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::NewProp_bFlush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateTextureHelper, nullptr, "WriteDataToTexture", nullptr, nullptr, Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::UpdateTextureHelper_eventWriteDataToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::UpdateTextureHelper_eventWriteDataToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateTextureHelper::execWriteDataToTexture)
{
	P_GET_OBJECT(UTexture,Z_Param_Target);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bFlush);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateTextureHelper::WriteDataToTexture(Z_Param_Target,Z_Param_Out_Data,Z_Param_bFlush);
	P_NATIVE_END;
}
// End Class UUpdateTextureHelper Function WriteDataToTexture

// Begin Class UUpdateTextureHelper
void UUpdateTextureHelper::StaticRegisterNativesUUpdateTextureHelper()
{
	UClass* Class = UUpdateTextureHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTextureData", &UUpdateTextureHelper::execClearTextureData },
		{ "Editor_SetTextureCompressionSetting", &UUpdateTextureHelper::execEditor_SetTextureCompressionSetting },
		{ "Editor_SetTextureFormat", &UUpdateTextureHelper::execEditor_SetTextureFormat },
		{ "Editor_SetTextureSize", &UUpdateTextureHelper::execEditor_SetTextureSize },
		{ "Editor_SetTextureSRGB", &UUpdateTextureHelper::execEditor_SetTextureSRGB },
		{ "Editor_SetTextureTextureGroup", &UUpdateTextureHelper::execEditor_SetTextureTextureGroup },
		{ "Editor_TextureUpdateResource", &UUpdateTextureHelper::execEditor_TextureUpdateResource },
		{ "ReadDataFromTexture", &UUpdateTextureHelper::execReadDataFromTexture },
		{ "WriteDataToTexture", &UUpdateTextureHelper::execWriteDataToTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateTextureHelper);
UClass* Z_Construct_UClass_UUpdateTextureHelper_NoRegister()
{
	return UUpdateTextureHelper::StaticClass();
}
struct Z_Construct_UClass_UUpdateTextureHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureAssetTools/UpdateTextureHelper.h" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/UpdateTextureHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateTextureHelper_ClearTextureData, "ClearTextureData" }, // 4111419595
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureCompressionSetting, "Editor_SetTextureCompressionSetting" }, // 2870690303
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureFormat, "Editor_SetTextureFormat" }, // 4269830779
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSize, "Editor_SetTextureSize" }, // 3338805717
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureSRGB, "Editor_SetTextureSRGB" }, // 168710809
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_SetTextureTextureGroup, "Editor_SetTextureTextureGroup" }, // 1824344426
		{ &Z_Construct_UFunction_UUpdateTextureHelper_Editor_TextureUpdateResource, "Editor_TextureUpdateResource" }, // 4217338143
		{ &Z_Construct_UFunction_UUpdateTextureHelper_ReadDataFromTexture, "ReadDataFromTexture" }, // 3668384884
		{ &Z_Construct_UFunction_UUpdateTextureHelper_WriteDataToTexture, "WriteDataToTexture" }, // 866843390
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateTextureHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUpdateTextureHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateTextureHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateTextureHelper_Statics::ClassParams = {
	&UUpdateTextureHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateTextureHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpdateTextureHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUpdateTextureHelper()
{
	if (!Z_Registration_Info_UClass_UUpdateTextureHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateTextureHelper.OuterSingleton, Z_Construct_UClass_UUpdateTextureHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateTextureHelper.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UUpdateTextureHelper>()
{
	return UUpdateTextureHelper::StaticClass();
}
UUpdateTextureHelper::UUpdateTextureHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateTextureHelper);
UUpdateTextureHelper::~UUpdateTextureHelper() {}
// End Class UUpdateTextureHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateTextureHelper, UUpdateTextureHelper::StaticClass, TEXT("UUpdateTextureHelper"), &Z_Registration_Info_UClass_UUpdateTextureHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateTextureHelper), 1251535365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_2264120675(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
