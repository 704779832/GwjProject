// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestHook.h"
#include "Misc/MessageDialog.h"

#include "MessageDialogHook.h"


#define LOCTEXT_NAMESPACE "FTestHookModule"

void FTestHookModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
		// 安装消息对话框钩子
	FMessageDialogHook::InstallHook();
}

void FTestHookModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestHookModule, TestHook)