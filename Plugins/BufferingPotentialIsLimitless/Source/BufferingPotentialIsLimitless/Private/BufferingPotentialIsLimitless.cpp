// Copyright Epic Games, Inc. All Rights Reserved.

#include "BufferingPotentialIsLimitless.h"
#include "Interfaces/IPluginManager.h"
#include "IVulkanDynamicRHI.h"
#include "ShaderCore.h"
#define LOCTEXT_NAMESPACE "FBufferingPotentialIsLimitlessModule"

void FBufferingPotentialIsLimitlessModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	//添加插件内的Shader文件目录
	{

		TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("BufferingPotentialIsLimitless"));
		if (!Plugin.IsValid())return;
		FString PluginBasePath = Plugin->GetBaseDir();
		FString ShaderDirectory = FPaths::Combine(PluginBasePath, TEXT("Shaders"));
		AddShaderSourceDirectoryMapping(TEXT("/Plugin/BufferingPotentialIsLimitless"), ShaderDirectory);
	}

	if (FApp::CanEverRender())
	{
#if PLATFORM_WINDOWS
		const TCHAR* DynamicRHIModuleName = GetSelectedDynamicRHIModuleName(false);
#elif PLATFORM_LINUX
		const TCHAR* DynamicRHIModuleName = TEXT("VulkanRHI");
#endif

		if (FString("VulkanRHI") == FString(DynamicRHIModuleName))
		{
#if PLATFORM_WINDOWS
			const TArray<const ANSICHAR*> ExtentionsToAdd{ VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME, VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME, VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME, VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_WIN32_SURFACE_EXTENSION_NAME };
#elif PLATFORM_LINUX
			const TArray<const ANSICHAR*> ExtentionsToAdd{ VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME, VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME, VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME, VK_KHR_SURFACE_EXTENSION_NAME };
#endif
			IVulkanDynamicRHI::AddEnabledDeviceExtensionsAndLayers(ExtentionsToAdd, TArray<const ANSICHAR*>());
		}
	}

	if (!FModuleManager::Get().IsModuleLoaded(TEXT("CUDA")))
	{
		FModuleManager::Get().LoadModule(TEXT("CUDA"));
	}
}

void FBufferingPotentialIsLimitlessModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBufferingPotentialIsLimitlessModule, BufferingPotentialIsLimitless)