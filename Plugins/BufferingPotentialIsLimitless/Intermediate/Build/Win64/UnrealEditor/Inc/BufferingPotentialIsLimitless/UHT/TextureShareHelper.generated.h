// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureShare/TextureShareHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
class UTextureBufferShareObject;
class UTextureRenderTarget2D;
#ifdef BUFFERINGPOTENTIALISLIMITLESS_TextureShareHelper_generated_h
#error "TextureShareHelper.generated.h already included, missing '#pragma once' in TextureShareHelper.h"
#endif
#define BUFFERINGPOTENTIALISLIMITLESS_TextureShareHelper_generated_h

#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyTextureShareHandleToTexture); \
	DECLARE_FUNCTION(execOpenTextureShareHandle); \
	DECLARE_FUNCTION(execCreateTextureShareHandleByRT); \
	DECLARE_FUNCTION(execCreateTextureShareHandle);


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureShareHelper(); \
	friend struct Z_Construct_UClass_UTextureShareHelper_Statics; \
public: \
	DECLARE_CLASS(UTextureShareHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BufferingPotentialIsLimitless"), NO_API) \
	DECLARE_SERIALIZER(UTextureShareHelper)


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureShareHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureShareHelper(UTextureShareHelper&&); \
	UTextureShareHelper(const UTextureShareHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureShareHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureShareHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureShareHelper) \
	NO_API virtual ~UTextureShareHelper();


#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_13_PROLOG
#define FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<class UTextureShareHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureShareHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
