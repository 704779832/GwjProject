// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureShare/CudaHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCudaHelper() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UCudaHelper();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UCudaHelper_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UCudaHelper
void UCudaHelper::StaticRegisterNativesUCudaHelper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCudaHelper);
UClass* Z_Construct_UClass_UCudaHelper_NoRegister()
{
	return UCudaHelper::StaticClass();
}
struct Z_Construct_UClass_UCudaHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureShare/CudaHelper.h" },
		{ "ModuleRelativePath", "Public/TextureShare/CudaHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCudaHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCudaHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCudaHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCudaHelper_Statics::ClassParams = {
	&UCudaHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCudaHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UCudaHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCudaHelper()
{
	if (!Z_Registration_Info_UClass_UCudaHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCudaHelper.OuterSingleton, Z_Construct_UClass_UCudaHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCudaHelper.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UCudaHelper>()
{
	return UCudaHelper::StaticClass();
}
UCudaHelper::UCudaHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCudaHelper);
UCudaHelper::~UCudaHelper() {}
// End Class UCudaHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_CudaHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCudaHelper, UCudaHelper::StaticClass, TEXT("UCudaHelper"), &Z_Registration_Info_UClass_UCudaHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCudaHelper), 2555564637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_CudaHelper_h_3436221078(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_CudaHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_CudaHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
