// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PolygonMathsStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolygonMathsStruct;
struct FPolygonWithHoleMathsStruct;
struct FRegularPolygonMathsStruct;
#ifdef MATHSISEVERTHING_PolygonMathsStruct_generated_h
#error "PolygonMathsStruct.generated.h already included, missing '#pragma once' in PolygonMathsStruct.h"
#endif
#define MATHSISEVERTHING_PolygonMathsStruct_generated_h

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics; \
	MATHSISEVERTHING_API static class UScriptStruct* StaticStruct();


template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<struct FPolygonMathsStruct>();

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics; \
	MATHSISEVERTHING_API static class UScriptStruct* StaticStruct();


template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<struct FPolygonWithHoleMathsStruct>();

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics; \
	MATHSISEVERTHING_API static class UScriptStruct* StaticStruct();


template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<struct FRegularPolygonMathsStruct>();

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPointOnRegularPolygon); \
	DECLARE_FUNCTION(execIsPointOnPolygonWithHole); \
	DECLARE_FUNCTION(execIsPointOnPolygon); \
	DECLARE_FUNCTION(execGetRegularPolygonArea); \
	DECLARE_FUNCTION(execGetPolygonAreaWithHole); \
	DECLARE_FUNCTION(execGetPolygonArea); \
	DECLARE_FUNCTION(execRegularPolygonTriangularization); \
	DECLARE_FUNCTION(execPolygonWithHoleTriangularization); \
	DECLARE_FUNCTION(execPolygonTriangularization);


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolygonMathsHelper(); \
	friend struct Z_Construct_UClass_UPolygonMathsHelper_Statics; \
public: \
	DECLARE_CLASS(UPolygonMathsHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MathsIsEverthing"), NO_API) \
	DECLARE_SERIALIZER(UPolygonMathsHelper)


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolygonMathsHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPolygonMathsHelper(UPolygonMathsHelper&&); \
	UPolygonMathsHelper(const UPolygonMathsHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolygonMathsHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolygonMathsHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolygonMathsHelper) \
	NO_API virtual ~UPolygonMathsHelper();


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_191_PROLOG
#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATHSISEVERTHING_API UClass* StaticClass<class UPolygonMathsHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
