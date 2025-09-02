// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomShapeButton/Public/CustomShapeButtonManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomShapeButtonManager() {}

// Begin Cross Module References
CUSTOMSHAPEBUTTON_API UClass* Z_Construct_UClass_UCustomShapeButton_NoRegister();
CUSTOMSHAPEBUTTON_API UClass* Z_Construct_UClass_UCustomShapeButtonManager();
CUSTOMSHAPEBUTTON_API UClass* Z_Construct_UClass_UCustomShapeButtonManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_CustomShapeButton();
// End Cross Module References

// Begin Class UCustomShapeButtonManager Function CanRegisterButton
struct Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics
{
	struct CustomShapeButtonManager_eventCanRegisterButton_Parms
	{
		const UCustomShapeButton* Button;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true is button is initialized and ready to handle events. */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true is button is initialized and ready to handle events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomShapeButtonManager_eventCanRegisterButton_Parms, Button), Z_Construct_UClass_UCustomShapeButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
void Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomShapeButtonManager_eventCanRegisterButton_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomShapeButtonManager_eventCanRegisterButton_Parms), &Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomShapeButtonManager, nullptr, "CanRegisterButton", nullptr, nullptr, Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::CustomShapeButtonManager_eventCanRegisterButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::CustomShapeButtonManager_eventCanRegisterButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomShapeButtonManager::execCanRegisterButton)
{
	P_GET_OBJECT(UCustomShapeButton,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCustomShapeButtonManager::CanRegisterButton(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UCustomShapeButtonManager Function CanRegisterButton

// Begin Class UCustomShapeButtonManager Function GetCustomShapeButtonManager
struct Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics
{
	struct CustomShapeButtonManager_eventGetCustomShapeButtonManager_Parms
	{
		UCustomShapeButtonManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the manager instance, or nullptr if can't be obtained. */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the manager instance, or nullptr if can't be obtained." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomShapeButtonManager_eventGetCustomShapeButtonManager_Parms, ReturnValue), Z_Construct_UClass_UCustomShapeButtonManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomShapeButtonManager, nullptr, "GetCustomShapeButtonManager", nullptr, nullptr, Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::CustomShapeButtonManager_eventGetCustomShapeButtonManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::CustomShapeButtonManager_eventGetCustomShapeButtonManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomShapeButtonManager::execGetCustomShapeButtonManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomShapeButtonManager**)Z_Param__Result=UCustomShapeButtonManager::GetCustomShapeButtonManager();
	P_NATIVE_END;
}
// End Class UCustomShapeButtonManager Function GetCustomShapeButtonManager

// Begin Class UCustomShapeButtonManager Function RegisterButton
struct Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics
{
	struct CustomShapeButtonManager_eventRegisterButton_Parms
	{
		UCustomShapeButton* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Registers a button for event redirection */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers a button for event redirection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomShapeButtonManager_eventRegisterButton_Parms, Button), Z_Construct_UClass_UCustomShapeButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomShapeButtonManager, nullptr, "RegisterButton", nullptr, nullptr, Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::CustomShapeButtonManager_eventRegisterButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::CustomShapeButtonManager_eventRegisterButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomShapeButtonManager::execRegisterButton)
{
	P_GET_OBJECT(UCustomShapeButton,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterButton(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UCustomShapeButtonManager Function RegisterButton

// Begin Class UCustomShapeButtonManager Function UnregisterButton
struct Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics
{
	struct CustomShapeButtonManager_eventUnregisterButton_Parms
	{
		UCustomShapeButton* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unregisters a button when it is destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregisters a button when it is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomShapeButtonManager_eventUnregisterButton_Parms, Button), Z_Construct_UClass_UCustomShapeButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomShapeButtonManager, nullptr, "UnregisterButton", nullptr, nullptr, Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::CustomShapeButtonManager_eventUnregisterButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::CustomShapeButtonManager_eventUnregisterButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomShapeButtonManager::execUnregisterButton)
{
	P_GET_OBJECT(UCustomShapeButton,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterButton(Z_Param_Button);
	P_NATIVE_END;
}
// End Class UCustomShapeButtonManager Function UnregisterButton

// Begin Class UCustomShapeButtonManager
void UCustomShapeButtonManager::StaticRegisterNativesUCustomShapeButtonManager()
{
	UClass* Class = UCustomShapeButtonManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanRegisterButton", &UCustomShapeButtonManager::execCanRegisterButton },
		{ "GetCustomShapeButtonManager", &UCustomShapeButtonManager::execGetCustomShapeButtonManager },
		{ "RegisterButton", &UCustomShapeButtonManager::execRegisterButton },
		{ "UnregisterButton", &UCustomShapeButtonManager::execUnregisterButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomShapeButtonManager);
UClass* Z_Construct_UClass_UCustomShapeButtonManager_NoRegister()
{
	return UCustomShapeButtonManager::StaticClass();
}
struct Z_Construct_UClass_UCustomShapeButtonManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages all Custom Shape Buttons during the game.\n * Each button automatically registers itself in the manager when created and unregisters when destroyed.\n * One of the main purposes of this manager is to handle overlap events and redirect them to underlying buttons.\n */" },
#endif
		{ "IncludePath", "CustomShapeButtonManager.h" },
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages all Custom Shape Buttons during the game.\nEach button automatically registers itself in the manager when created and unregisters when destroyed.\nOne of the main purposes of this manager is to handle overlap events and redirect them to underlying buttons." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredButtons_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "CustomShapeButtonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stores all active buttons.\n\x09 * Is Soft to allow garbage collection. */" },
#endif
		{ "DisplayName", "All Hidden Widgets" },
		{ "ModuleRelativePath", "Public/CustomShapeButtonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores all active buttons.\nIs Soft to allow garbage collection." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RegisteredButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredButtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomShapeButtonManager_CanRegisterButton, "CanRegisterButton" }, // 3503227560
		{ &Z_Construct_UFunction_UCustomShapeButtonManager_GetCustomShapeButtonManager, "GetCustomShapeButtonManager" }, // 905882464
		{ &Z_Construct_UFunction_UCustomShapeButtonManager_RegisterButton, "RegisterButton" }, // 518328801
		{ &Z_Construct_UFunction_UCustomShapeButtonManager_UnregisterButton, "UnregisterButton" }, // 2368965572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomShapeButtonManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomShapeButtonManager_Statics::NewProp_RegisteredButtons_Inner = { "RegisteredButtons", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomShapeButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomShapeButtonManager_Statics::NewProp_RegisteredButtons = { "RegisteredButtons", nullptr, (EPropertyFlags)0x00240c800002280d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomShapeButtonManager, RegisteredButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredButtons_MetaData), NewProp_RegisteredButtons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomShapeButtonManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomShapeButtonManager_Statics::NewProp_RegisteredButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomShapeButtonManager_Statics::NewProp_RegisteredButtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButtonManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomShapeButtonManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomShapeButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButtonManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomShapeButtonManager_Statics::ClassParams = {
	&UCustomShapeButtonManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomShapeButtonManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButtonManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomShapeButtonManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomShapeButtonManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomShapeButtonManager()
{
	if (!Z_Registration_Info_UClass_UCustomShapeButtonManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomShapeButtonManager.OuterSingleton, Z_Construct_UClass_UCustomShapeButtonManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomShapeButtonManager.OuterSingleton;
}
template<> CUSTOMSHAPEBUTTON_API UClass* StaticClass<UCustomShapeButtonManager>()
{
	return UCustomShapeButtonManager::StaticClass();
}
UCustomShapeButtonManager::UCustomShapeButtonManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomShapeButtonManager);
UCustomShapeButtonManager::~UCustomShapeButtonManager() {}
// End Class UCustomShapeButtonManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomShapeButtonManager, UCustomShapeButtonManager::StaticClass, TEXT("UCustomShapeButtonManager"), &Z_Registration_Info_UClass_UCustomShapeButtonManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomShapeButtonManager), 4276932101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_689227201(TEXT("/Script/CustomShapeButton"),
	Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_File_GwjProject_Plugins_CustomShapeButton_Source_CustomShapeButton_Public_CustomShapeButtonManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
