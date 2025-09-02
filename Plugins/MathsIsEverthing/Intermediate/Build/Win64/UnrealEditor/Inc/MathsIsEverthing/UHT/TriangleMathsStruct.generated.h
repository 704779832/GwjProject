// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriangleMathsStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTriangleMathsStruct;
#ifdef MATHSISEVERTHING_TriangleMathsStruct_generated_h
#error "TriangleMathsStruct.generated.h already included, missing '#pragma once' in TriangleMathsStruct.h"
#endif
#define MATHSISEVERTHING_TriangleMathsStruct_generated_h

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics; \
	MATHSISEVERTHING_API static class UScriptStruct* StaticStruct();


template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<struct FTriangleMathsStruct>();

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestGetTriangleAreaByCrossVector); \
	DECLARE_FUNCTION(execTestGetTriangleAreaByHeronsFormula); \
	DECLARE_FUNCTION(execTestGetTriangleVector); \
	DECLARE_FUNCTION(execTestGetTriangleAngle);


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriangleMathsHelper(); \
	friend struct Z_Construct_UClass_UTriangleMathsHelper_Statics; \
public: \
	DECLARE_CLASS(UTriangleMathsHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MathsIsEverthing"), NO_API) \
	DECLARE_SERIALIZER(UTriangleMathsHelper)


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriangleMathsHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTriangleMathsHelper(UTriangleMathsHelper&&); \
	UTriangleMathsHelper(const UTriangleMathsHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriangleMathsHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriangleMathsHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriangleMathsHelper) \
	NO_API virtual ~UTriangleMathsHelper();


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_178_PROLOG
#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATHSISEVERTHING_API UClass* StaticClass<class UTriangleMathsHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
