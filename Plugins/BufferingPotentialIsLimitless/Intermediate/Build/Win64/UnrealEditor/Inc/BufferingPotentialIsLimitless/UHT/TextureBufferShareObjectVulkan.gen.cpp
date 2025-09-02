// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureShare/TextureBufferShareObjectVulkan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureBufferShareObjectVulkan() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObject();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObjectVulkan();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObjectVulkan_NoRegister();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UTextureBufferShareObjectVulkan
void UTextureBufferShareObjectVulkan::StaticRegisterNativesUTextureBufferShareObjectVulkan()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureBufferShareObjectVulkan);
UClass* Z_Construct_UClass_UTextureBufferShareObjectVulkan_NoRegister()
{
	return UTextureBufferShareObjectVulkan::StaticClass();
}
struct Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureShare/TextureBufferShareObjectVulkan.h" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureBufferShareObjectVulkan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureBufferShareObjectVulkan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureBufferShareObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::ClassParams = {
	&UTextureBufferShareObjectVulkan::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureBufferShareObjectVulkan()
{
	if (!Z_Registration_Info_UClass_UTextureBufferShareObjectVulkan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureBufferShareObjectVulkan.OuterSingleton, Z_Construct_UClass_UTextureBufferShareObjectVulkan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureBufferShareObjectVulkan.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UTextureBufferShareObjectVulkan>()
{
	return UTextureBufferShareObjectVulkan::StaticClass();
}
UTextureBufferShareObjectVulkan::UTextureBufferShareObjectVulkan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureBufferShareObjectVulkan);
// End Class UTextureBufferShareObjectVulkan

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectVulkan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureBufferShareObjectVulkan, UTextureBufferShareObjectVulkan::StaticClass, TEXT("UTextureBufferShareObjectVulkan"), &Z_Registration_Info_UClass_UTextureBufferShareObjectVulkan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureBufferShareObjectVulkan), 2848873252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectVulkan_h_3468605765(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectVulkan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectVulkan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
