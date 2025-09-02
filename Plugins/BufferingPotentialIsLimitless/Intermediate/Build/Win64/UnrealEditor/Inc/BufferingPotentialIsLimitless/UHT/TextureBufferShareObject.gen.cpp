// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BufferingPotentialIsLimitless/Public/TextureShare/TextureBufferShareObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureBufferShareObject() {}

// Begin Cross Module References
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObject();
BUFFERINGPOTENTIALISLIMITLESS_API UClass* Z_Construct_UClass_UTextureBufferShareObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BufferingPotentialIsLimitless();
// End Cross Module References

// Begin Class UTextureBufferShareObject
void UTextureBufferShareObject::StaticRegisterNativesUTextureBufferShareObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureBufferShareObject);
UClass* Z_Construct_UClass_UTextureBufferShareObject_NoRegister()
{
	return UTextureBufferShareObject::StaticClass();
}
struct Z_Construct_UClass_UTextureBufferShareObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TextureShare/TextureBufferShareObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TextureShare/TextureBufferShareObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureBufferShareObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureBufferShareObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BufferingPotentialIsLimitless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureBufferShareObject_Statics::ClassParams = {
	&UTextureBufferShareObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureBufferShareObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureBufferShareObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureBufferShareObject()
{
	if (!Z_Registration_Info_UClass_UTextureBufferShareObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureBufferShareObject.OuterSingleton, Z_Construct_UClass_UTextureBufferShareObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureBufferShareObject.OuterSingleton;
}
template<> BUFFERINGPOTENTIALISLIMITLESS_API UClass* StaticClass<UTextureBufferShareObject>()
{
	return UTextureBufferShareObject::StaticClass();
}
UTextureBufferShareObject::UTextureBufferShareObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureBufferShareObject);
UTextureBufferShareObject::~UTextureBufferShareObject() {}
// End Class UTextureBufferShareObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureBufferShareObject, UTextureBufferShareObject::StaticClass, TEXT("UTextureBufferShareObject"), &Z_Registration_Info_UClass_UTextureBufferShareObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureBufferShareObject), 991451835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObject_h_286287939(TEXT("/Script/BufferingPotentialIsLimitless"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_BufferingPotentialIsLimitless_Source_BufferingPotentialIsLimitless_Public_TextureShare_TextureBufferShareObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
