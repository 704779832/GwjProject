// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureShare/TextureBufferShareObjectDX12.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureBufferShareObjectDX12() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObject();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObjectDX12();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObjectDX12_NoRegister();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UTextureBufferShareObjectDX12
void UTextureBufferShareObjectDX12::StaticRegisterNativesUTextureBufferShareObjectDX12()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureBufferShareObjectDX12);
UClass* Z_Construct_UClass_UTextureBufferShareObjectDX12_NoRegister()
{
	return UTextureBufferShareObjectDX12::StaticClass();
}
struct Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TextureShare/TextureBufferShareObjectDX12.h" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureBufferShareObjectDX12.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureBufferShareObjectDX12>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureBufferShareObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::ClassParams = {
	&UTextureBufferShareObjectDX12::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureBufferShareObjectDX12()
{
	if (!Z_Registration_Info_UClass_UTextureBufferShareObjectDX12.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureBufferShareObjectDX12.OuterSingleton, Z_Construct_UClass_UTextureBufferShareObjectDX12_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureBufferShareObjectDX12.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UTextureBufferShareObjectDX12>()
{
	return UTextureBufferShareObjectDX12::StaticClass();
}
UTextureBufferShareObjectDX12::UTextureBufferShareObjectDX12(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureBufferShareObjectDX12);
// End Class UTextureBufferShareObjectDX12

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectDX12_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureBufferShareObjectDX12, UTextureBufferShareObjectDX12::StaticClass, TEXT("UTextureBufferShareObjectDX12"), &Z_Registration_Info_UClass_UTextureBufferShareObjectDX12, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureBufferShareObjectDX12), 3893055291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectDX12_h_2312926507(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectDX12_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObjectDX12_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
