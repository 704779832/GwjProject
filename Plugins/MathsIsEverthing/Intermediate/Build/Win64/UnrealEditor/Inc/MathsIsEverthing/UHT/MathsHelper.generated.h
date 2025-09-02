// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MathsHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATHSISEVERTHING_MathsHelper_generated_h
#error "MathsHelper.generated.h already included, missing '#pragma once' in MathsHelper.h"
#endif
#define MATHSISEVERTHING_MathsHelper_generated_h

#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateCatmullRomCurves); \
	DECLARE_FUNCTION(execCatmullRomInterp); \
	DECLARE_FUNCTION(execGenerateBezierCurves); \
	DECLARE_FUNCTION(execNth_orderBezier); \
	DECLARE_FUNCTION(execCubicBezier); \
	DECLARE_FUNCTION(execQuadraticBezier); \
	DECLARE_FUNCTION(execLinearBezier); \
	DECLARE_FUNCTION(execGenerateRegularPolygonBySingle); \
	DECLARE_FUNCTION(execGenerateRegularPolygon); \
	DECLARE_FUNCTION(execIsPointOnTriangle); \
	DECLARE_FUNCTION(execLineSegmentIntersectionFromVector); \
	DECLARE_FUNCTION(execLineSegmentIntersection); \
	DECLARE_FUNCTION(execIsParallelVector3D); \
	DECLARE_FUNCTION(execIsParallelVector2D); \
	DECLARE_FUNCTION(execIsPointOnSegment);


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMathsHelper(); \
	friend struct Z_Construct_UClass_UMathsHelper_Statics; \
public: \
	DECLARE_CLASS(UMathsHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MathsIsEverthing"), NO_API) \
	DECLARE_SERIALIZER(UMathsHelper)


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMathsHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMathsHelper(UMathsHelper&&); \
	UMathsHelper(const UMathsHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMathsHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMathsHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMathsHelper) \
	NO_API virtual ~UMathsHelper();


#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_11_PROLOG
#define FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATHSISEVERTHING_API UClass* StaticClass<class UMathsHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
