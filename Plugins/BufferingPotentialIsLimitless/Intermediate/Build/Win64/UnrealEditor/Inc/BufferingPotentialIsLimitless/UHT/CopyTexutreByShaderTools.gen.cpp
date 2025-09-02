// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureAssetTools/CopyTexutreByShaderTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyTexutreByShaderTools() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UCopyTexutreByShaderTools();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UCopyTexutreByShaderTools_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UCopyTexutreByShaderTools Function CopyTexture
struct Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics
{
	struct CopyTexutreByShaderTools_eventCopyTexture_Parms
	{
		const UObject* WorldContextObject;
		UTexture* SourceTexture;
		UTexture* TargetTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CopyTexutreByShaderTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xc7\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TextureAssetTools/CopyTexutreByShaderTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xc7\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTexture_Parms, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_TargetTexture = { "TargetTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTexture_Parms, TargetTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::NewProp_TargetTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCopyTexutreByShaderTools, nullptr, "CopyTexture", nullptr, nullptr, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::CopyTexutreByShaderTools_eventCopyTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::CopyTexutreByShaderTools_eventCopyTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCopyTexutreByShaderTools::execCopyTexture)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTexture,Z_Param_SourceTexture);
	P_GET_OBJECT(UTexture,Z_Param_TargetTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCopyTexutreByShaderTools::CopyTexture(Z_Param_WorldContextObject,Z_Param_SourceTexture,Z_Param_TargetTexture);
	P_NATIVE_END;
}
// End Class UCopyTexutreByShaderTools Function CopyTexture

// Begin Class UCopyTexutreByShaderTools Function CopyTextureClipToCenter
struct Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics
{
	struct CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms
	{
		const UObject* WorldContextObject;
		UTexture* SourceTexture;
		UTexture* TargetTexture;
		FIntPoint ClipSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CopyTexutreByShaderTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xd4\xad\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xbe\xef\xbf\xbd\xef\xbf\xbd\xd0\xb2\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xc7\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_ClipSize", "()" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/CopyTexutreByShaderTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xd4\xad\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xbe\xef\xbf\xbd\xef\xbf\xbd\xd0\xb2\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xc7\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb7\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_TargetTexture = { "TargetTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms, TargetTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms, ClipSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipSize_MetaData), NewProp_ClipSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_TargetTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::NewProp_ClipSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCopyTexutreByShaderTools, nullptr, "CopyTextureClipToCenter", nullptr, nullptr, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::CopyTexutreByShaderTools_eventCopyTextureClipToCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCopyTexutreByShaderTools::execCopyTextureClipToCenter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTexture,Z_Param_SourceTexture);
	P_GET_OBJECT(UTexture,Z_Param_TargetTexture);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ClipSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCopyTexutreByShaderTools::CopyTextureClipToCenter(Z_Param_WorldContextObject,Z_Param_SourceTexture,Z_Param_TargetTexture,Z_Param_Out_ClipSize);
	P_NATIVE_END;
}
// End Class UCopyTexutreByShaderTools Function CopyTextureClipToCenter

// Begin Class UCopyTexutreByShaderTools Function CopyTextureClipToCenterAndCompress
struct Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics
{
	struct CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms
	{
		const UObject* WorldContextObject;
		UTexture* SourceTexture;
		UTexture* TargetTexture;
		FIntPoint ClipSize;
		FIntPoint CompressSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CopyTexutreByShaderTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xda\xbe\xef\xbf\xbd\xef\xbf\xbd\xd0\xb2\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_ClipSize", "()" },
		{ "CPP_Default_CompressSize", "()" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/CopyTexutreByShaderTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xbe\xef\xbf\xbd\xef\xbf\xbd\xd0\xb2\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xd4\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompressSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_TargetTexture = { "TargetTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms, TargetTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms, ClipSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipSize_MetaData), NewProp_ClipSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_CompressSize = { "CompressSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms, CompressSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressSize_MetaData), NewProp_CompressSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_TargetTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_ClipSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::NewProp_CompressSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCopyTexutreByShaderTools, nullptr, "CopyTextureClipToCenterAndCompress", nullptr, nullptr, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::CopyTexutreByShaderTools_eventCopyTextureClipToCenterAndCompress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCopyTexutreByShaderTools::execCopyTextureClipToCenterAndCompress)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTexture,Z_Param_SourceTexture);
	P_GET_OBJECT(UTexture,Z_Param_TargetTexture);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ClipSize);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CompressSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCopyTexutreByShaderTools::CopyTextureClipToCenterAndCompress(Z_Param_WorldContextObject,Z_Param_SourceTexture,Z_Param_TargetTexture,Z_Param_Out_ClipSize,Z_Param_Out_CompressSize);
	P_NATIVE_END;
}
// End Class UCopyTexutreByShaderTools Function CopyTextureClipToCenterAndCompress

// Begin Class UCopyTexutreByShaderTools
void UCopyTexutreByShaderTools::StaticRegisterNativesUCopyTexutreByShaderTools()
{
	UClass* Class = UCopyTexutreByShaderTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyTexture", &UCopyTexutreByShaderTools::execCopyTexture },
		{ "CopyTextureClipToCenter", &UCopyTexutreByShaderTools::execCopyTextureClipToCenter },
		{ "CopyTextureClipToCenterAndCompress", &UCopyTexutreByShaderTools::execCopyTextureClipToCenterAndCompress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCopyTexutreByShaderTools);
UClass* Z_Construct_UClass_UCopyTexutreByShaderTools_NoRegister()
{
	return UCopyTexutreByShaderTools::StaticClass();
}
struct Z_Construct_UClass_UCopyTexutreByShaderTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureAssetTools/CopyTexutreByShaderTools.h" },
		{ "ModuleRelativePath", "Public/TextureAssetTools/CopyTexutreByShaderTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTexture, "CopyTexture" }, // 1598053166
		{ &Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenter, "CopyTextureClipToCenter" }, // 2535421196
		{ &Z_Construct_UFunction_UCopyTexutreByShaderTools_CopyTextureClipToCenterAndCompress, "CopyTextureClipToCenterAndCompress" }, // 3437564362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCopyTexutreByShaderTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::ClassParams = {
	&UCopyTexutreByShaderTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCopyTexutreByShaderTools()
{
	if (!Z_Registration_Info_UClass_UCopyTexutreByShaderTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCopyTexutreByShaderTools.OuterSingleton, Z_Construct_UClass_UCopyTexutreByShaderTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCopyTexutreByShaderTools.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UCopyTexutreByShaderTools>()
{
	return UCopyTexutreByShaderTools::StaticClass();
}
UCopyTexutreByShaderTools::UCopyTexutreByShaderTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCopyTexutreByShaderTools);
UCopyTexutreByShaderTools::~UCopyTexutreByShaderTools() {}
// End Class UCopyTexutreByShaderTools

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_CopyTexutreByShaderTools_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCopyTexutreByShaderTools, UCopyTexutreByShaderTools::StaticClass, TEXT("UCopyTexutreByShaderTools"), &Z_Registration_Info_UClass_UCopyTexutreByShaderTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCopyTexutreByShaderTools), 1560365924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_CopyTexutreByShaderTools_h_4280684253(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_CopyTexutreByShaderTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_CopyTexutreByShaderTools_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
