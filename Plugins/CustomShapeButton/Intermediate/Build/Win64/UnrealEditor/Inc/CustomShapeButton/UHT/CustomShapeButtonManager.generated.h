// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomShapeButtonManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomShapeButton;
class UCustomShapeButtonManager;
#ifdef CUSTOMSHAPEBUTTON_CustomShapeButtonManager_generated_h
#error "CustomShapeButtonManager.generated.h already included, missing '#pragma once' in CustomShapeButtonManager.h"
#endif
#define CUSTOMSHAPEBUTTON_CustomShapeButtonManager_generated_h

#define FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanRegisterButton); \
	DECLARE_FUNCTION(execUnregisterButton); \
	DECLARE_FUNCTION(execRegisterButton); \
	DECLARE_FUNCTION(execGetCustomShapeButtonManager);


#define FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomShapeButtonManager(); \
	friend struct Z_Construct_UClass_UCustomShapeButtonManager_Statics; \
public: \
	DECLARE_CLASS(UCustomShapeButtonManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomShapeButton"), NO_API) \
	DECLARE_SERIALIZER(UCustomShapeButtonManager)


#define FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomShapeButtonManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomShapeButtonManager(UCustomShapeButtonManager&&); \
	UCustomShapeButtonManager(const UCustomShapeButtonManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomShapeButtonManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomShapeButtonManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomShapeButtonManager) \
	NO_API virtual ~UCustomShapeButtonManager();


#define FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_18_PROLOG
#define FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMSHAPEBUTTON_API UClass* StaticClass<class UCustomShapeButtonManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
