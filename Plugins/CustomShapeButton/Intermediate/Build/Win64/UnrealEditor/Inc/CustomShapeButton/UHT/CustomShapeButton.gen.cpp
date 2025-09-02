// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomShapeButton/Public/CustomShapeButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomShapeButton() {}

// Begin Cross Module References
CUSTOMSHAPEBUTTON_API UClass* Z_Construct_UClass_UCustomShapeButton();
CUSTOMSHAPEBUTTON_API UClass* Z_Construct_UClass_UCustomShapeButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_CustomShapeButton();
// End Cross Module References

// Begin Class UCustomShapeButton Function ForceUpdateImage
struct Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom Shape Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forces to update the Raw Colors (pixels data) about current image.\n\x09 * @warning Is not recommended to use at all since often updates are expensive.\n\x09 * However, can be useful if button changes in runtime (new texture set or material is changing dynamically).\n\x09 * By default, image is cached only once at the beginning. */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces to update the Raw Colors (pixels data) about current image.\n@warning Is not recommended to use at all since often updates are expensive.\nHowever, can be useful if button changes in runtime (new texture set or material is changing dynamically).\nBy default, image is cached only once at the beginning." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomShapeButton, nullptr, "ForceUpdateImage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomShapeButton::execForceUpdateImage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdateImage();
	P_NATIVE_END;
}
// End Class UCustomShapeButton Function ForceUpdateImage

// Begin Class UCustomShapeButton
void UCustomShapeButton::StaticRegisterNativesUCustomShapeButton()
{
	UClass* Class = UCustomShapeButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceUpdateImage", &UCustomShapeButton::execForceUpdateImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomShapeButton);
UClass* Z_Construct_UClass_UCustomShapeButton_NoRegister()
{
	return UCustomShapeButton::StaticClass();
}
struct Z_Construct_UClass_UCustomShapeButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom shape button.\n * To make it work:\n * - ave an image with alpha pixels\n * - set an image as for regular button under the 'Appearance' -> 'Style' category\n * Is wrapper around the SCustomShapeButton widget.\n * @see SCustomShapeButton\n */" },
#endif
		{ "IncludePath", "CustomShapeButton.h" },
		{ "ModuleRelativePath", "Public/CustomShapeButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom shape button.\nTo make it work:\n- ave an image with alpha pixels\n- set an image as for regular button under the 'Appearance' -> 'Style' category\nIs wrapper around the SCustomShapeButton widget.\n@see SCustomShapeButton" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapOrder_MetaData[] = {
		{ "Category", "CustomShape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the button's Z-order priority for event handling.\n\x09 * Higher values mean the button is visually and interactively above others.\n\x09 * Used during registration to ensure correct overlap behavior. */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the button's Z-order priority for event handling.\nHigher values mean the button is visually and interactively above others.\nUsed during registration to ensure correct overlap behavior." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverlapOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomShapeButton_ForceUpdateImage, "ForceUpdateImage" }, // 840951697
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomShapeButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomShapeButton_Statics::NewProp_OverlapOrder = { "OverlapOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomShapeButton, OverlapOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapOrder_MetaData), NewProp_OverlapOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomShapeButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomShapeButton_Statics::NewProp_OverlapOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomShapeButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomShapeButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomShapeButton_Statics::ClassParams = {
	&UCustomShapeButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomShapeButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomShapeButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomShapeButton()
{
	if (!Z_Registration_Info_UClass_UCustomShapeButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomShapeButton.OuterSingleton, Z_Construct_UClass_UCustomShapeButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomShapeButton.OuterSingleton;
}
template<> CUSTOMSHAPEBUTTON_API UClass* StaticClass<UCustomShapeButton>()
{
	return UCustomShapeButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomShapeButton);
UCustomShapeButton::~UCustomShapeButton() {}
// End Class UCustomShapeButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomShapeButton, UCustomShapeButton::StaticClass, TEXT("UCustomShapeButton"), &Z_Registration_Info_UClass_UCustomShapeButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomShapeButton), 1835982939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButton_h_2411983401(TEXT("/Script/CustomShapeButton"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
