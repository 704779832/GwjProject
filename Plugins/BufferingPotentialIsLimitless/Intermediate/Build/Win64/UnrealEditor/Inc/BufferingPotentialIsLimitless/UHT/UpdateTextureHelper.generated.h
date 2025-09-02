// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureAssetTools/UpdateTextureHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef BUFFERINGPOTENTIALISLIMITLESS_UpdateTextureHelper_generated_h
#error "UpdateTextureHelper.generated.h already included, missing '#pragma once' in UpdateTextureHelper.h"
#endif
#define BUFFERINGPOTENTIALISLIMITLESS_UpdateTextureHelper_generated_h

#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadDataFromTexture); \
	DECLARE_FUNCTION(execClearTextureData); \
	DECLARE_FUNCTION(execWriteDataToTexture); \
	DECLARE_FUNCTION(execEditor_SetTextureSize); \
	DECLARE_FUNCTION(execEditor_SetTextureTextureGroup); \
	DECLARE_FUNCTION(execEditor_SetTextureCompressionSetting); \
	DECLARE_FUNCTION(execEditor_SetTextureFormat); \
	DECLARE_FUNCTION(execEditor_SetTextureSRGB); \
	DECLARE_FUNCTION(execEditor_TextureUpdateResource);


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateTextureHelper(); \
	friend struct Z_Construct_UClass_UUpdateTextureHelper_Statics; \
public: \
	DECLARE_CLASS(UUpdateTextureHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BufferingPotentialIsLimitless"), NO_API) \
	DECLARE_SERIALIZER(UUpdateTextureHelper)


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateTextureHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUpdateTextureHelper(UUpdateTextureHelper&&); \
	UUpdateTextureHelper(const UUpdateTextureHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateTextureHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateTextureHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateTextureHelper) \
	NO_API virtual ~UUpdateTextureHelper();


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_18_PROLOG
#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<class UUpdateTextureHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureAssetTools_UpdateTextureHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
