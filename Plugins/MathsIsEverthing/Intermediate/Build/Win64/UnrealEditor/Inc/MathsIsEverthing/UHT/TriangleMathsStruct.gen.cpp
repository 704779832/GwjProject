// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathsIsEverthing/Public/TriangleMathsStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangleMathsStruct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UTriangleMathsHelper();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UTriangleMathsHelper_NoRegister();
MATHSISEVERTHING_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleMathsStruct();
UPackage* Z_Construct_UPackage__Script_MathsIsEverthing();
// End Cross Module References

// Begin ScriptStruct FTriangleMathsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriangleMathsStruct;
class UScriptStruct* FTriangleMathsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriangleMathsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriangleMathsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangleMathsStruct, (UObject*)Z_Construct_UPackage__Script_MathsIsEverthing(), TEXT("TriangleMathsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TriangleMathsStruct.OuterSingleton;
}
template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<FTriangleMathsStruct>()
{
	return FTriangleMathsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangleMathsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangleMathsStruct, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangleMathsStruct, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangleMathsStruct, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewProp_C,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
	nullptr,
	&NewStructOps,
	"TriangleMathsStruct",
	Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::PropPointers),
	sizeof(FTriangleMathsStruct),
	alignof(FTriangleMathsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriangleMathsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriangleMathsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriangleMathsStruct.InnerSingleton, Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TriangleMathsStruct.InnerSingleton;
}
// End ScriptStruct FTriangleMathsStruct

// Begin Class UTriangleMathsHelper Function TestGetTriangleAngle
struct Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics
{
	struct TriangleMathsHelper_eventTestGetTriangleAngle_Parms
	{
		FTriangleMathsStruct In;
		double Aangle;
		double Aradians;
		double Bangle;
		double Bradians;
		double Cangle;
		double Cradians;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TriangleMathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Aangle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Aradians;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Bangle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Bradians;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Cangle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Cradians;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, In), Z_Construct_UScriptStruct_FTriangleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 4124203920
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Aangle = { "Aangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Aangle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Aradians = { "Aradians", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Aradians), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Bangle = { "Bangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Bangle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Bradians = { "Bradians", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Bradians), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Cangle = { "Cangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Cangle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Cradians = { "Cradians", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAngle_Parms, Cradians), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Aangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Aradians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Bangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Bradians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Cangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::NewProp_Cradians,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangleMathsHelper, nullptr, "TestGetTriangleAngle", nullptr, nullptr, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::TriangleMathsHelper_eventTestGetTriangleAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::TriangleMathsHelper_eventTestGetTriangleAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriangleMathsHelper::execTestGetTriangleAngle)
{
	P_GET_STRUCT_REF(FTriangleMathsStruct,Z_Param_Out_In);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Aangle);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Aradians);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Bangle);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Bradians);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Cangle);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Cradians);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTriangleMathsHelper::TestGetTriangleAngle(Z_Param_Out_In,Z_Param_Out_Aangle,Z_Param_Out_Aradians,Z_Param_Out_Bangle,Z_Param_Out_Bradians,Z_Param_Out_Cangle,Z_Param_Out_Cradians);
	P_NATIVE_END;
}
// End Class UTriangleMathsHelper Function TestGetTriangleAngle

// Begin Class UTriangleMathsHelper Function TestGetTriangleAreaByCrossVector
struct Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics
{
	struct TriangleMathsHelper_eventTestGetTriangleAreaByCrossVector_Parms
	{
		FTriangleMathsStruct In;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TriangleMathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAreaByCrossVector_Parms, In), Z_Construct_UScriptStruct_FTriangleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 4124203920
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAreaByCrossVector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangleMathsHelper, nullptr, "TestGetTriangleAreaByCrossVector", nullptr, nullptr, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::TriangleMathsHelper_eventTestGetTriangleAreaByCrossVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::TriangleMathsHelper_eventTestGetTriangleAreaByCrossVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriangleMathsHelper::execTestGetTriangleAreaByCrossVector)
{
	P_GET_STRUCT_REF(FTriangleMathsStruct,Z_Param_Out_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UTriangleMathsHelper::TestGetTriangleAreaByCrossVector(Z_Param_Out_In);
	P_NATIVE_END;
}
// End Class UTriangleMathsHelper Function TestGetTriangleAreaByCrossVector

// Begin Class UTriangleMathsHelper Function TestGetTriangleAreaByHeronsFormula
struct Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics
{
	struct TriangleMathsHelper_eventTestGetTriangleAreaByHeronsFormula_Parms
	{
		FTriangleMathsStruct In;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TriangleMathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAreaByHeronsFormula_Parms, In), Z_Construct_UScriptStruct_FTriangleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 4124203920
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleAreaByHeronsFormula_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangleMathsHelper, nullptr, "TestGetTriangleAreaByHeronsFormula", nullptr, nullptr, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::TriangleMathsHelper_eventTestGetTriangleAreaByHeronsFormula_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::TriangleMathsHelper_eventTestGetTriangleAreaByHeronsFormula_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriangleMathsHelper::execTestGetTriangleAreaByHeronsFormula)
{
	P_GET_STRUCT_REF(FTriangleMathsStruct,Z_Param_Out_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UTriangleMathsHelper::TestGetTriangleAreaByHeronsFormula(Z_Param_Out_In);
	P_NATIVE_END;
}
// End Class UTriangleMathsHelper Function TestGetTriangleAreaByHeronsFormula

// Begin Class UTriangleMathsHelper Function TestGetTriangleVector
struct Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics
{
	struct TriangleMathsHelper_eventTestGetTriangleVector_Parms
	{
		FTriangleMathsStruct In;
		FVector2D AB;
		FVector2D AC;
		FVector2D BC;
		FVector2D AangleBisectorVector;
		FVector2D BangleBisectorVector;
		FVector2D CangleBisectorVector;
		FVector2D AmedianVector;
		FVector2D BmedianVector;
		FVector2D CmedianVector;
		FVector2D AaltitudeVector;
		FVector2D BaltitudeVector;
		FVector2D CaltitudeVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TriangleMathsHelper|Geometry|Triangle" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AangleBisectorVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BangleBisectorVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CangleBisectorVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmedianVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BmedianVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CmedianVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AaltitudeVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaltitudeVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaltitudeVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, In), Z_Construct_UScriptStruct_FTriangleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 4124203920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AB = { "AB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, AB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AC = { "AC", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, AC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BC = { "BC", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, BC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AangleBisectorVector = { "AangleBisectorVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, AangleBisectorVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BangleBisectorVector = { "BangleBisectorVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, BangleBisectorVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CangleBisectorVector = { "CangleBisectorVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, CangleBisectorVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AmedianVector = { "AmedianVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, AmedianVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BmedianVector = { "BmedianVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, BmedianVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CmedianVector = { "CmedianVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, CmedianVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AaltitudeVector = { "AaltitudeVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, AaltitudeVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BaltitudeVector = { "BaltitudeVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, BaltitudeVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CaltitudeVector = { "CaltitudeVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriangleMathsHelper_eventTestGetTriangleVector_Parms, CaltitudeVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AangleBisectorVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BangleBisectorVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CangleBisectorVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AmedianVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BmedianVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CmedianVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_AaltitudeVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_BaltitudeVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::NewProp_CaltitudeVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangleMathsHelper, nullptr, "TestGetTriangleVector", nullptr, nullptr, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::TriangleMathsHelper_eventTestGetTriangleVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::TriangleMathsHelper_eventTestGetTriangleVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTriangleMathsHelper::execTestGetTriangleVector)
{
	P_GET_STRUCT_REF(FTriangleMathsStruct,Z_Param_Out_In);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AB);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AC);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_BC);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AangleBisectorVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_BangleBisectorVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CangleBisectorVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AmedianVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_BmedianVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CmedianVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AaltitudeVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_BaltitudeVector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CaltitudeVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTriangleMathsHelper::TestGetTriangleVector(Z_Param_Out_In,Z_Param_Out_AB,Z_Param_Out_AC,Z_Param_Out_BC,Z_Param_Out_AangleBisectorVector,Z_Param_Out_BangleBisectorVector,Z_Param_Out_CangleBisectorVector,Z_Param_Out_AmedianVector,Z_Param_Out_BmedianVector,Z_Param_Out_CmedianVector,Z_Param_Out_AaltitudeVector,Z_Param_Out_BaltitudeVector,Z_Param_Out_CaltitudeVector);
	P_NATIVE_END;
}
// End Class UTriangleMathsHelper Function TestGetTriangleVector

// Begin Class UTriangleMathsHelper
void UTriangleMathsHelper::StaticRegisterNativesUTriangleMathsHelper()
{
	UClass* Class = UTriangleMathsHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestGetTriangleAngle", &UTriangleMathsHelper::execTestGetTriangleAngle },
		{ "TestGetTriangleAreaByCrossVector", &UTriangleMathsHelper::execTestGetTriangleAreaByCrossVector },
		{ "TestGetTriangleAreaByHeronsFormula", &UTriangleMathsHelper::execTestGetTriangleAreaByHeronsFormula },
		{ "TestGetTriangleVector", &UTriangleMathsHelper::execTestGetTriangleVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangleMathsHelper);
UClass* Z_Construct_UClass_UTriangleMathsHelper_NoRegister()
{
	return UTriangleMathsHelper::StaticClass();
}
struct Z_Construct_UClass_UTriangleMathsHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TriangleMathsStruct.h" },
		{ "ModuleRelativePath", "Public/TriangleMathsStruct.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAngle, "TestGetTriangleAngle" }, // 1618806328
		{ &Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByCrossVector, "TestGetTriangleAreaByCrossVector" }, // 3658606262
		{ &Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleAreaByHeronsFormula, "TestGetTriangleAreaByHeronsFormula" }, // 4069923183
		{ &Z_Construct_UFunction_UTriangleMathsHelper_TestGetTriangleVector, "TestGetTriangleVector" }, // 3764681717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangleMathsHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTriangleMathsHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleMathsHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangleMathsHelper_Statics::ClassParams = {
	&UTriangleMathsHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleMathsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriangleMathsHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriangleMathsHelper()
{
	if (!Z_Registration_Info_UClass_UTriangleMathsHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangleMathsHelper.OuterSingleton, Z_Construct_UClass_UTriangleMathsHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriangleMathsHelper.OuterSingleton;
}
template<> MATHSISEVERTHING_API UClass* StaticClass<UTriangleMathsHelper>()
{
	return UTriangleMathsHelper::StaticClass();
}
UTriangleMathsHelper::UTriangleMathsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangleMathsHelper);
UTriangleMathsHelper::~UTriangleMathsHelper() {}
// End Class UTriangleMathsHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriangleMathsStruct::StaticStruct, Z_Construct_UScriptStruct_FTriangleMathsStruct_Statics::NewStructOps, TEXT("TriangleMathsStruct"), &Z_Registration_Info_UScriptStruct_TriangleMathsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangleMathsStruct), 4124203920U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriangleMathsHelper, UTriangleMathsHelper::StaticClass, TEXT("UTriangleMathsHelper"), &Z_Registration_Info_UClass_UTriangleMathsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangleMathsHelper), 3357126045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_1198112729(TEXT("/Script/MathsIsEverthing"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_TriangleMathsStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
