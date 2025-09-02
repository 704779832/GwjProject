// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathsIsEverthing/Public/PolygonMathsStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygonMathsStruct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UPolygonMathsHelper();
MATHSISEVERTHING_API UClass* Z_Construct_UClass_UPolygonMathsHelper_NoRegister();
MATHSISEVERTHING_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonMathsStruct();
MATHSISEVERTHING_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct();
MATHSISEVERTHING_API UScriptStruct* Z_Construct_UScriptStruct_FRegularPolygonMathsStruct();
UPackage* Z_Construct_UPackage__Script_MathsIsEverthing();
// End Cross Module References

// Begin ScriptStruct FPolygonMathsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonMathsStruct;
class UScriptStruct* FPolygonMathsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonMathsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonMathsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonMathsStruct, (UObject*)Z_Construct_UPackage__Script_MathsIsEverthing(), TEXT("PolygonMathsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonMathsStruct.OuterSingleton;
}
template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<FPolygonMathsStruct>()
{
	return FPolygonMathsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonMathsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPolygonMathsStruct, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
	nullptr,
	&NewStructOps,
	"PolygonMathsStruct",
	Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::PropPointers),
	sizeof(FPolygonMathsStruct),
	alignof(FPolygonMathsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPolygonMathsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonMathsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonMathsStruct.InnerSingleton, Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PolygonMathsStruct.InnerSingleton;
}
// End ScriptStruct FPolygonMathsStruct

// Begin ScriptStruct FPolygonWithHoleMathsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct;
class UScriptStruct* FPolygonWithHoleMathsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct, (UObject*)Z_Construct_UPackage__Script_MathsIsEverthing(), TEXT("PolygonWithHoleMathsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.OuterSingleton;
}
template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<FPolygonWithHoleMathsStruct>()
{
	return FPolygonWithHoleMathsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Holes_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Holes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Holes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonWithHoleMathsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPolygonWithHoleMathsStruct, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Holes_Inner = { "Holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonMathsStruct, METADATA_PARAMS(0, nullptr) }; // 2504036881
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Holes = { "Holes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPolygonWithHoleMathsStruct, Holes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Holes_MetaData), NewProp_Holes_MetaData) }; // 2504036881
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Holes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewProp_Holes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
	nullptr,
	&NewStructOps,
	"PolygonWithHoleMathsStruct",
	Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::PropPointers),
	sizeof(FPolygonWithHoleMathsStruct),
	alignof(FPolygonWithHoleMathsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.InnerSingleton, Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct.InnerSingleton;
}
// End ScriptStruct FPolygonWithHoleMathsStruct

// Begin ScriptStruct FRegularPolygonMathsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct;
class UScriptStruct* FRegularPolygonMathsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegularPolygonMathsStruct, (UObject*)Z_Construct_UPackage__Script_MathsIsEverthing(), TEXT("RegularPolygonMathsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.OuterSingleton;
}
template<> MATHSISEVERTHING_API UScriptStruct* StaticStruct<FRegularPolygonMathsStruct>()
{
	return FRegularPolygonMathsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_R;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegularPolygonMathsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegularPolygonMathsStruct, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegularPolygonMathsStruct, N), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N_MetaData), NewProp_N_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegularPolygonMathsStruct, R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewProp_R,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
	nullptr,
	&NewStructOps,
	"RegularPolygonMathsStruct",
	Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::PropPointers),
	sizeof(FRegularPolygonMathsStruct),
	alignof(FRegularPolygonMathsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegularPolygonMathsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.InnerSingleton, Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct.InnerSingleton;
}
// End ScriptStruct FRegularPolygonMathsStruct

// Begin Class UPolygonMathsHelper Function GetPolygonArea
struct Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics
{
	struct PolygonMathsHelper_eventGetPolygonArea_Parms
	{
		FPolygonMathsStruct In;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetPolygonArea_Parms, In), Z_Construct_UScriptStruct_FPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 2504036881
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetPolygonArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "GetPolygonArea", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PolygonMathsHelper_eventGetPolygonArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::PolygonMathsHelper_eventGetPolygonArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execGetPolygonArea)
{
	P_GET_STRUCT_REF(FPolygonMathsStruct,Z_Param_Out_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UPolygonMathsHelper::GetPolygonArea(Z_Param_Out_In);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function GetPolygonArea

// Begin Class UPolygonMathsHelper Function GetPolygonAreaWithHole
struct Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics
{
	struct PolygonMathsHelper_eventGetPolygonAreaWithHole_Parms
	{
		FPolygonWithHoleMathsStruct In;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetPolygonAreaWithHole_Parms, In), Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1397647061
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetPolygonAreaWithHole_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "GetPolygonAreaWithHole", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PolygonMathsHelper_eventGetPolygonAreaWithHole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::PolygonMathsHelper_eventGetPolygonAreaWithHole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execGetPolygonAreaWithHole)
{
	P_GET_STRUCT_REF(FPolygonWithHoleMathsStruct,Z_Param_Out_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UPolygonMathsHelper::GetPolygonAreaWithHole(Z_Param_Out_In);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function GetPolygonAreaWithHole

// Begin Class UPolygonMathsHelper Function GetRegularPolygonArea
struct Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics
{
	struct PolygonMathsHelper_eventGetRegularPolygonArea_Parms
	{
		FRegularPolygonMathsStruct In;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetRegularPolygonArea_Parms, In), Z_Construct_UScriptStruct_FRegularPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1954459382
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventGetRegularPolygonArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "GetRegularPolygonArea", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PolygonMathsHelper_eventGetRegularPolygonArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::PolygonMathsHelper_eventGetRegularPolygonArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execGetRegularPolygonArea)
{
	P_GET_STRUCT_REF(FRegularPolygonMathsStruct,Z_Param_Out_In);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UPolygonMathsHelper::GetRegularPolygonArea(Z_Param_Out_In);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function GetRegularPolygonArea

// Begin Class UPolygonMathsHelper Function IsPointOnPolygon
struct Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics
{
	struct PolygonMathsHelper_eventIsPointOnPolygon_Parms
	{
		FPolygonMathsStruct In;
		FVector2D P;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygon_Parms, In), Z_Construct_UScriptStruct_FPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 2504036881
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygon_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygon_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PolygonMathsHelper_eventIsPointOnPolygon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PolygonMathsHelper_eventIsPointOnPolygon_Parms), &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "IsPointOnPolygon", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PolygonMathsHelper_eventIsPointOnPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::PolygonMathsHelper_eventIsPointOnPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execIsPointOnPolygon)
{
	P_GET_STRUCT_REF(FPolygonMathsStruct,Z_Param_Out_In);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPolygonMathsHelper::IsPointOnPolygon(Z_Param_Out_In,Z_Param_Out_P,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function IsPointOnPolygon

// Begin Class UPolygonMathsHelper Function IsPointOnPolygonWithHole
struct Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics
{
	struct PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms
	{
		FPolygonWithHoleMathsStruct In;
		FVector2D P;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms, In), Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1397647061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms), &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "IsPointOnPolygonWithHole", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::PolygonMathsHelper_eventIsPointOnPolygonWithHole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execIsPointOnPolygonWithHole)
{
	P_GET_STRUCT_REF(FPolygonWithHoleMathsStruct,Z_Param_Out_In);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPolygonMathsHelper::IsPointOnPolygonWithHole(Z_Param_Out_In,Z_Param_Out_P,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function IsPointOnPolygonWithHole

// Begin Class UPolygonMathsHelper Function IsPointOnRegularPolygon
struct Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics
{
	struct PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms
	{
		FRegularPolygonMathsStruct In;
		FVector2D P;
		double Epsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "CPP_Default_Epsilon", "0.000010" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms, In), Z_Construct_UScriptStruct_FRegularPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1954459382
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms, Epsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms), &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_Epsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "IsPointOnRegularPolygon", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::PolygonMathsHelper_eventIsPointOnRegularPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execIsPointOnRegularPolygon)
{
	P_GET_STRUCT_REF(FRegularPolygonMathsStruct,Z_Param_Out_In);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPolygonMathsHelper::IsPointOnRegularPolygon(Z_Param_Out_In,Z_Param_Out_P,Z_Param_Epsilon);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function IsPointOnRegularPolygon

// Begin Class UPolygonMathsHelper Function PolygonTriangularization
struct Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics
{
	struct PolygonMathsHelper_eventPolygonTriangularization_Parms
	{
		FPolygonMathsStruct In;
		TArray<FVector2D> OutPosition;
		TArray<int32> OutIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonTriangularization_Parms, In), Z_Construct_UScriptStruct_FPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 2504036881
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutPosition_Inner = { "OutPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonTriangularization_Parms, OutPosition), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonTriangularization_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutPosition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::NewProp_OutIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "PolygonTriangularization", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PolygonMathsHelper_eventPolygonTriangularization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::PolygonMathsHelper_eventPolygonTriangularization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execPolygonTriangularization)
{
	P_GET_STRUCT_REF(FPolygonMathsStruct,Z_Param_Out_In);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPosition);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPolygonMathsHelper::PolygonTriangularization(Z_Param_Out_In,Z_Param_Out_OutPosition,Z_Param_Out_OutIndices);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function PolygonTriangularization

// Begin Class UPolygonMathsHelper Function PolygonWithHoleTriangularization
struct Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics
{
	struct PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms
	{
		FPolygonWithHoleMathsStruct In;
		TArray<FVector2D> OutPosition;
		TArray<int32> OutIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms, In), Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1397647061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutPosition_Inner = { "OutPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms, OutPosition), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutPosition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::NewProp_OutIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "PolygonWithHoleTriangularization", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::PolygonMathsHelper_eventPolygonWithHoleTriangularization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execPolygonWithHoleTriangularization)
{
	P_GET_STRUCT_REF(FPolygonWithHoleMathsStruct,Z_Param_Out_In);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPosition);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPolygonMathsHelper::PolygonWithHoleTriangularization(Z_Param_Out_In,Z_Param_Out_OutPosition,Z_Param_Out_OutIndices);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function PolygonWithHoleTriangularization

// Begin Class UPolygonMathsHelper Function RegularPolygonTriangularization
struct Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics
{
	struct PolygonMathsHelper_eventRegularPolygonTriangularization_Parms
	{
		FRegularPolygonMathsStruct In;
		TArray<FVector2D> OutPosition;
		TArray<int32> OutIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MathsHelper|Geometry|Polygon" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_In;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventRegularPolygonTriangularization_Parms, In), Z_Construct_UScriptStruct_FRegularPolygonMathsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_In_MetaData), NewProp_In_MetaData) }; // 1954459382
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutPosition_Inner = { "OutPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventRegularPolygonTriangularization_Parms, OutPosition), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutIndices_Inner = { "OutIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutIndices = { "OutIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygonMathsHelper_eventRegularPolygonTriangularization_Parms, OutIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_In,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutPosition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::NewProp_OutIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonMathsHelper, nullptr, "RegularPolygonTriangularization", nullptr, nullptr, Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PolygonMathsHelper_eventRegularPolygonTriangularization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::PolygonMathsHelper_eventRegularPolygonTriangularization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygonMathsHelper::execRegularPolygonTriangularization)
{
	P_GET_STRUCT_REF(FRegularPolygonMathsStruct,Z_Param_Out_In);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPosition);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPolygonMathsHelper::RegularPolygonTriangularization(Z_Param_Out_In,Z_Param_Out_OutPosition,Z_Param_Out_OutIndices);
	P_NATIVE_END;
}
// End Class UPolygonMathsHelper Function RegularPolygonTriangularization

// Begin Class UPolygonMathsHelper
void UPolygonMathsHelper::StaticRegisterNativesUPolygonMathsHelper()
{
	UClass* Class = UPolygonMathsHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPolygonArea", &UPolygonMathsHelper::execGetPolygonArea },
		{ "GetPolygonAreaWithHole", &UPolygonMathsHelper::execGetPolygonAreaWithHole },
		{ "GetRegularPolygonArea", &UPolygonMathsHelper::execGetRegularPolygonArea },
		{ "IsPointOnPolygon", &UPolygonMathsHelper::execIsPointOnPolygon },
		{ "IsPointOnPolygonWithHole", &UPolygonMathsHelper::execIsPointOnPolygonWithHole },
		{ "IsPointOnRegularPolygon", &UPolygonMathsHelper::execIsPointOnRegularPolygon },
		{ "PolygonTriangularization", &UPolygonMathsHelper::execPolygonTriangularization },
		{ "PolygonWithHoleTriangularization", &UPolygonMathsHelper::execPolygonWithHoleTriangularization },
		{ "RegularPolygonTriangularization", &UPolygonMathsHelper::execRegularPolygonTriangularization },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonMathsHelper);
UClass* Z_Construct_UClass_UPolygonMathsHelper_NoRegister()
{
	return UPolygonMathsHelper::StaticClass();
}
struct Z_Construct_UClass_UPolygonMathsHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PolygonMathsStruct.h" },
		{ "ModuleRelativePath", "Public/PolygonMathsStruct.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonArea, "GetPolygonArea" }, // 1244012685
		{ &Z_Construct_UFunction_UPolygonMathsHelper_GetPolygonAreaWithHole, "GetPolygonAreaWithHole" }, // 874124520
		{ &Z_Construct_UFunction_UPolygonMathsHelper_GetRegularPolygonArea, "GetRegularPolygonArea" }, // 3242700508
		{ &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygon, "IsPointOnPolygon" }, // 2205390851
		{ &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnPolygonWithHole, "IsPointOnPolygonWithHole" }, // 3421656026
		{ &Z_Construct_UFunction_UPolygonMathsHelper_IsPointOnRegularPolygon, "IsPointOnRegularPolygon" }, // 121690634
		{ &Z_Construct_UFunction_UPolygonMathsHelper_PolygonTriangularization, "PolygonTriangularization" }, // 1528841073
		{ &Z_Construct_UFunction_UPolygonMathsHelper_PolygonWithHoleTriangularization, "PolygonWithHoleTriangularization" }, // 3248430052
		{ &Z_Construct_UFunction_UPolygonMathsHelper_RegularPolygonTriangularization, "RegularPolygonTriangularization" }, // 1368923229
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonMathsHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPolygonMathsHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MathsIsEverthing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonMathsHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonMathsHelper_Statics::ClassParams = {
	&UPolygonMathsHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonMathsHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolygonMathsHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolygonMathsHelper()
{
	if (!Z_Registration_Info_UClass_UPolygonMathsHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonMathsHelper.OuterSingleton, Z_Construct_UClass_UPolygonMathsHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolygonMathsHelper.OuterSingleton;
}
template<> MATHSISEVERTHING_API UClass* StaticClass<UPolygonMathsHelper>()
{
	return UPolygonMathsHelper::StaticClass();
}
UPolygonMathsHelper::UPolygonMathsHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonMathsHelper);
UPolygonMathsHelper::~UPolygonMathsHelper() {}
// End Class UPolygonMathsHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPolygonMathsStruct::StaticStruct, Z_Construct_UScriptStruct_FPolygonMathsStruct_Statics::NewStructOps, TEXT("PolygonMathsStruct"), &Z_Registration_Info_UScriptStruct_PolygonMathsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonMathsStruct), 2504036881U) },
		{ FPolygonWithHoleMathsStruct::StaticStruct, Z_Construct_UScriptStruct_FPolygonWithHoleMathsStruct_Statics::NewStructOps, TEXT("PolygonWithHoleMathsStruct"), &Z_Registration_Info_UScriptStruct_PolygonWithHoleMathsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonWithHoleMathsStruct), 1397647061U) },
		{ FRegularPolygonMathsStruct::StaticStruct, Z_Construct_UScriptStruct_FRegularPolygonMathsStruct_Statics::NewStructOps, TEXT("RegularPolygonMathsStruct"), &Z_Registration_Info_UScriptStruct_RegularPolygonMathsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegularPolygonMathsStruct), 1954459382U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolygonMathsHelper, UPolygonMathsHelper::StaticClass, TEXT("UPolygonMathsHelper"), &Z_Registration_Info_UClass_UPolygonMathsHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonMathsHelper), 1431353221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_1681746855(TEXT("/Script/MathsIsEverthing"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_MathsIsEverthing_Source_MathsIsEverthing_Public_PolygonMathsStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
