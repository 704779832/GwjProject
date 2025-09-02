// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathsIsEverthing/Public/MathsHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathsHelper() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UMathsHelper();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UMathsHelper_NoRegister();
UPackage* Z_Construct_UPackage__Script_MathsIsEverthing();
// End Cross Module References

// Begin Class UMathsHelper Function CatmullRomInterp
struct Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics
{
	struct MathsHelper_eventCatmullRomInterp_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D C;
		FVector2D D;
		double T;
		double Alpha;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catmull-Rom\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_Alpha", "0.500000" },
		{ "CPP_Default_T", "0.000000" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catmull-Rom\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_D;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_T;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCatmullRomInterp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "CatmullRomInterp", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::MathsHelper_eventCatmullRomInterp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::MathsHelper_eventCatmullRomInterp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_CatmullRomInterp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_CatmullRomInterp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execCatmullRomInterp)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_C);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_D);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_T);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::CatmullRomInterp(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_Out_D,Z_Param_T,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UMathsHelper Function CatmullRomInterp

// Begin Class UMathsHelper Function CubicBezier
struct Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics
{
	struct MathsHelper_eventCubicBezier_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D C;
		FVector2D D;
		double T;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_T", "0.000000" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_D;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventCubicBezier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "CubicBezier", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::MathsHelper_eventCubicBezier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::MathsHelper_eventCubicBezier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_CubicBezier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_CubicBezier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execCubicBezier)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_C);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_D);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::CubicBezier(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_Out_D,Z_Param_T);
	P_NATIVE_END;
}
// End Class UMathsHelper Function CubicBezier

// Begin Class UMathsHelper Function GenerateBezierCurves
struct Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics
{
	struct MathsHelper_eventGenerateBezierCurves_Parms
	{
		TArray<FVector2D> Points;
		int32 SegmentNum;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_SegmentNum", "100" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateBezierCurves_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_SegmentNum = { "SegmentNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateBezierCurves_Parms, SegmentNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateBezierCurves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_SegmentNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "GenerateBezierCurves", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::MathsHelper_eventGenerateBezierCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::MathsHelper_eventGenerateBezierCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execGenerateBezierCurves)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_PROPERTY(FIntProperty,Z_Param_SegmentNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=UMathsHelper::GenerateBezierCurves(Z_Param_Out_Points,Z_Param_SegmentNum);
	P_NATIVE_END;
}
// End Class UMathsHelper Function GenerateBezierCurves

// Begin Class UMathsHelper Function GenerateCatmullRomCurves
struct Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics
{
	struct MathsHelper_eventGenerateCatmullRomCurves_Parms
	{
		TArray<FVector2D> Points;
		int32 SegmentNum;
		double Alpha;
		bool bClosed;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catmull-Rom\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_Alpha", "0.500000" },
		{ "CPP_Default_bClosed", "false" },
		{ "CPP_Default_SegmentNum", "100" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catmull-Rom\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentNum;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateCatmullRomCurves_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_SegmentNum = { "SegmentNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateCatmullRomCurves_Parms, SegmentNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateCatmullRomCurves_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((MathsHelper_eventGenerateCatmullRomCurves_Parms*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventGenerateCatmullRomCurves_Parms), &Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateCatmullRomCurves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_SegmentNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "GenerateCatmullRomCurves", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::MathsHelper_eventGenerateCatmullRomCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::MathsHelper_eventGenerateCatmullRomCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execGenerateCatmullRomCurves)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_PROPERTY(FIntProperty,Z_Param_SegmentNum);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_UBOOL(Z_Param_bClosed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=UMathsHelper::GenerateCatmullRomCurves(Z_Param_Out_Points,Z_Param_SegmentNum,Z_Param_Alpha,Z_Param_bClosed);
	P_NATIVE_END;
}
// End Class UMathsHelper Function GenerateCatmullRomCurves

// Begin Class UMathsHelper Function GenerateRegularPolygon
struct Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics
{
	struct MathsHelper_eventGenerateRegularPolygon_Parms
	{
		FVector2D Offset;
		int32 N;
		double R;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_R;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygon_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygon_Parms, N), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygon_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygon_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "GenerateRegularPolygon", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::MathsHelper_eventGenerateRegularPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::MathsHelper_eventGenerateRegularPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execGenerateRegularPolygon)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_N);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_R);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=UMathsHelper::GenerateRegularPolygon(Z_Param_Out_Offset,Z_Param_N,Z_Param_R);
	P_NATIVE_END;
}
// End Class UMathsHelper Function GenerateRegularPolygon

// Begin Class UMathsHelper Function GenerateRegularPolygonBySingle
struct Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics
{
	struct MathsHelper_eventGenerateRegularPolygonBySingle_Parms
	{
		FVector2D Offset;
		int32 N;
		double R;
		double StartAngle;
		int32 Index;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_R;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, N), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventGenerateRegularPolygonBySingle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_StartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "GenerateRegularPolygonBySingle", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::MathsHelper_eventGenerateRegularPolygonBySingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::MathsHelper_eventGenerateRegularPolygonBySingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execGenerateRegularPolygonBySingle)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_N);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_R);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartAngle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::GenerateRegularPolygonBySingle(Z_Param_Out_Offset,Z_Param_N,Z_Param_R,Z_Param_StartAngle,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UMathsHelper Function GenerateRegularPolygonBySingle

// Begin Class UMathsHelper Function IsParallelVector2D
struct Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics
{
	struct MathsHelper_eventIsParallelVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xc6\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xc6\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector2D_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventIsParallelVector2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventIsParallelVector2D_Parms), &Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "IsParallelVector2D", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::MathsHelper_eventIsParallelVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::MathsHelper_eventIsParallelVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_IsParallelVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_IsParallelVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execIsParallelVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::IsParallelVector2D(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UMathsHelper Function IsParallelVector2D

// Begin Class UMathsHelper Function IsParallelVector3D
struct Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics
{
	struct MathsHelper_eventIsParallelVector3D_Parms
	{
		FVector A;
		FVector B;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xc6\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xc6\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector3D_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector3D_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsParallelVector3D_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventIsParallelVector3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventIsParallelVector3D_Parms), &Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "IsParallelVector3D", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::MathsHelper_eventIsParallelVector3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::MathsHelper_eventIsParallelVector3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_IsParallelVector3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_IsParallelVector3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execIsParallelVector3D)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::IsParallelVector3D(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UMathsHelper Function IsParallelVector3D

// Begin Class UMathsHelper Function IsPointOnSegment
struct Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics
{
	struct MathsHelper_eventIsPointOnSegment_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D P;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnSegment_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnSegment_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnSegment_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnSegment_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventIsPointOnSegment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventIsPointOnSegment_Parms), &Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "IsPointOnSegment", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::MathsHelper_eventIsPointOnSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::MathsHelper_eventIsPointOnSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_IsPointOnSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_IsPointOnSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execIsPointOnSegment)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::IsPointOnSegment(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_P,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UMathsHelper Function IsPointOnSegment

// Begin Class UMathsHelper Function IsPointOnTriangle
struct Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics
{
	struct MathsHelper_eventIsPointOnTriangle_Parms
	{
		FVector2D P;
		FVector2D A;
		FVector2D B;
		FVector2D C;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnTriangle_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnTriangle_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnTriangle_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventIsPointOnTriangle_Parms, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
void Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventIsPointOnTriangle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventIsPointOnTriangle_Parms), &Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "IsPointOnTriangle", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::MathsHelper_eventIsPointOnTriangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::MathsHelper_eventIsPointOnTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execIsPointOnTriangle)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_C);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::IsPointOnTriangle(Z_Param_Out_P,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
	P_NATIVE_END;
}
// End Class UMathsHelper Function IsPointOnTriangle

// Begin Class UMathsHelper Function LinearBezier
struct Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics
{
	struct MathsHelper_eventLinearBezier_Parms
	{
		FVector2D A;
		FVector2D B;
		double T;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xd2\xbb\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_T", "0.000000" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd2\xbb\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLinearBezier_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLinearBezier_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLinearBezier_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLinearBezier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "LinearBezier", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::MathsHelper_eventLinearBezier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::MathsHelper_eventLinearBezier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_LinearBezier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_LinearBezier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execLinearBezier)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::LinearBezier(Z_Param_Out_A,Z_Param_Out_B,Z_Param_T);
	P_NATIVE_END;
}
// End Class UMathsHelper Function LinearBezier

// Begin Class UMathsHelper Function LineSegmentIntersection
struct Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics
{
	struct MathsHelper_eventLineSegmentIntersection_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D VStart;
		FVector2D VEnd;
		FVector2D OutPos;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xe0\xbd\xbb\xef\xbf\xbd\xd2\xb7\xef\xbf\xbd\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xe0\xbd\xbb\xef\xbf\xbd\xd2\xb7\xef\xbf\xbd\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPos;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_VStart = { "VStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, VStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VStart_MetaData), NewProp_VStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_VEnd = { "VEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, VEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VEnd_MetaData), NewProp_VEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_OutPos = { "OutPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, OutPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersection_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventLineSegmentIntersection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventLineSegmentIntersection_Parms), &Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_VStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_VEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_OutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "LineSegmentIntersection", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::MathsHelper_eventLineSegmentIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::MathsHelper_eventLineSegmentIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execLineSegmentIntersection)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VStart);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VEnd);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPos);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::LineSegmentIntersection(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_VStart,Z_Param_Out_VEnd,Z_Param_Out_OutPos,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UMathsHelper Function LineSegmentIntersection

// Begin Class UMathsHelper Function LineSegmentIntersectionFromVector
struct Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics
{
	struct MathsHelper_eventLineSegmentIntersectionFromVector_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D VStart;
		FVector2D VDir;
		FVector2D OutPos;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry" },
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPos;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_VStart = { "VStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, VStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VStart_MetaData), NewProp_VStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_VDir = { "VDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, VDir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VDir_MetaData), NewProp_VDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_OutPos = { "OutPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, OutPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventLineSegmentIntersectionFromVector_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MathsHelper_eventLineSegmentIntersectionFromVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MathsHelper_eventLineSegmentIntersectionFromVector_Parms), &Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_VStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_VDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_OutPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "LineSegmentIntersectionFromVector", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::MathsHelper_eventLineSegmentIntersectionFromVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::MathsHelper_eventLineSegmentIntersectionFromVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execLineSegmentIntersectionFromVector)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VStart);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VDir);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPos);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMathsHelper::LineSegmentIntersectionFromVector(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_VStart,Z_Param_Out_VDir,Z_Param_Out_OutPos,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UMathsHelper Function LineSegmentIntersectionFromVector

// Begin Class UMathsHelper Function Nth_orderBezier
struct Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics
{
	struct MathsHelper_eventNth_orderBezier_Parms
	{
		TArray<FVector2D> Points;
		double T;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*N\xef\xbf\xbd\xd7\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_T", "0.000000" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "N\xef\xbf\xbd\xd7\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventNth_orderBezier_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventNth_orderBezier_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventNth_orderBezier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "Nth_orderBezier", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::MathsHelper_eventNth_orderBezier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::MathsHelper_eventNth_orderBezier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_Nth_orderBezier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_Nth_orderBezier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execNth_orderBezier)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::Nth_orderBezier(Z_Param_Out_Points,Z_Param_T);
	P_NATIVE_END;
}
// End Class UMathsHelper Function Nth_orderBezier

// Begin Class UMathsHelper Function QuadraticBezier
struct Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics
{
	struct MathsHelper_eventQuadraticBezier_Parms
	{
		FVector2D A;
		FVector2D B;
		FVector2D C;
		double T;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "CPP_Default_T", "0.000000" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventQuadraticBezier_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventQuadraticBezier_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventQuadraticBezier_Parms, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventQuadraticBezier_Parms, T), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MathsHelper_eventQuadraticBezier_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathsHelper, nullptr, "QuadraticBezier", nullptr, nullptr, Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::MathsHelper_eventQuadraticBezier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::MathsHelper_eventQuadraticBezier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMathsHelper_QuadraticBezier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathsHelper_QuadraticBezier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMathsHelper::execQuadraticBezier)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_C);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_T);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMathsHelper::QuadraticBezier(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_T);
	P_NATIVE_END;
}
// End Class UMathsHelper Function QuadraticBezier

// Begin Class UMathsHelper
void UMathsHelper::StaticRegisterNativesUMathsHelper()
{
	UClass* Class = UMathsHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CatmullRomInterp", &UMathsHelper::execCatmullRomInterp },
		{ "CubicBezier", &UMathsHelper::execCubicBezier },
		{ "GenerateBezierCurves", &UMathsHelper::execGenerateBezierCurves },
		{ "GenerateCatmullRomCurves", &UMathsHelper::execGenerateCatmullRomCurves },
		{ "GenerateRegularPolygon", &UMathsHelper::execGenerateRegularPolygon },
		{ "GenerateRegularPolygonBySingle", &UMathsHelper::execGenerateRegularPolygonBySingle },
		{ "IsParallelVector2D", &UMathsHelper::execIsParallelVector2D },
		{ "IsParallelVector3D", &UMathsHelper::execIsParallelVector3D },
		{ "IsPointOnSegment", &UMathsHelper::execIsPointOnSegment },
		{ "IsPointOnTriangle", &UMathsHelper::execIsPointOnTriangle },
		{ "LinearBezier", &UMathsHelper::execLinearBezier },
		{ "LineSegmentIntersection", &UMathsHelper::execLineSegmentIntersection },
		{ "LineSegmentIntersectionFromVector", &UMathsHelper::execLineSegmentIntersectionFromVector },
		{ "Nth_orderBezier", &UMathsHelper::execNth_orderBezier },
		{ "QuadraticBezier", &UMathsHelper::execQuadraticBezier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMathsHelper);
UClass* Z_Construct_UClass_UMathsHelper_NoRegister()
{
	return UMathsHelper::StaticClass();
}
struct Z_Construct_UClass_UMathsHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"MathsHelper|Geometry\")\n" },
#endif
		{ "IncludePath", "MathsHelper.h" },
		{ "ModuleRelativePath", "Public/MathsHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"MathsHelper|Geometry\")" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathsHelper_CatmullRomInterp, "CatmullRomInterp" }, // 4278144466
		{ &Z_Construct_UFunction_UMathsHelper_CubicBezier, "CubicBezier" }, // 2614619202
		{ &Z_Construct_UFunction_UMathsHelper_GenerateBezierCurves, "GenerateBezierCurves" }, // 2178299319
		{ &Z_Construct_UFunction_UMathsHelper_GenerateCatmullRomCurves, "GenerateCatmullRomCurves" }, // 1976850196
		{ &Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygon, "GenerateRegularPolygon" }, // 3998454845
		{ &Z_Construct_UFunction_UMathsHelper_GenerateRegularPolygonBySingle, "GenerateRegularPolygonBySingle" }, // 150404914
		{ &Z_Construct_UFunction_UMathsHelper_IsParallelVector2D, "IsParallelVector2D" }, // 2706790523
		{ &Z_Construct_UFunction_UMathsHelper_IsParallelVector3D, "IsParallelVector3D" }, // 238120434
		{ &Z_Construct_UFunction_UMathsHelper_IsPointOnSegment, "IsPointOnSegment" }, // 1685630888
		{ &Z_Construct_UFunction_UMathsHelper_IsPointOnTriangle, "IsPointOnTriangle" }, // 2620973351
		{ &Z_Construct_UFunction_UMathsHelper_LinearBezier, "LinearBezier" }, // 1298489662
		{ &Z_Construct_UFunction_UMathsHelper_LineSegmentIntersection, "LineSegmentIntersection" }, // 3734777474
		{ &Z_Construct_UFunction_UMathsHelper_LineSegmentIntersectionFromVector, "LineSegmentIntersectionFromVector" }, // 4163337714
		{ &Z_Construct_UFunction_UMathsHelper_Nth_orderBezier, "Nth_orderBezier" }, // 2154264224
		{ &Z_Construct_UFunction_UMathsHelper_QuadraticBezier, "QuadraticBezier" }, // 3553887205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathsHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMathsHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMathsHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMathsHelper_Statics::ClassParams = {
	&UMathsHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMathsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UMathsHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMathsHelper()
{
	if (!Z_Registration_Info_UClass_UMathsHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMathsHelper.OuterSingleton, Z_Construct_UClass_UMathsHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMathsHelper.OuterSingleton;
}
template<> MATHSISEVERTHING_API UClass* StaticClass<UMathsHelper>()
{
	return UMathsHelper::StaticClass();
}
UMathsHelper::UMathsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMathsHelper);
UMathsHelper::~UMathsHelper() {}
// End Class UMathsHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMathsHelper, UMathsHelper::StaticClass, TEXT("UMathsHelper"), &Z_Registration_Info_UClass_UMathsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMathsHelper), 668658787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_3797274791(TEXT("/Script/MathsIsEverthing"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_MathsHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
