// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
public class BufferingPotentialIsLimitless : ModuleRules
{
	public BufferingPotentialIsLimitless(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        OptimizeCode = CodeOptimization.Never;//关闭代码优化 开启调试
        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",

                "Projects",
                "RenderCore",
				"RHI",
                "CUDA"
				// ... add private dependencies that you statically link with here ...	
			}
			);

        AddEngineThirdPartyPrivateStaticDependencies(Target, "CUDA");

        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        if (Target.IsInPlatformGroup(UnrealPlatformGroup.Windows))
        {
            //PrivateDependencyModuleNames.Add("D3D11RHI");
            PrivateDependencyModuleNames.Add("D3D12RHI");

            AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
        }

        PrivateDependencyModuleNames.Add("VulkanRHI");
        PublicIncludePathModuleNames.Add("VulkanRHI");
        PrivateIncludePaths.Add(Path.Combine(EngineDirectory, "Source/Runtime/VulkanRHI/Private"));
        AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");

        if (Target.IsInPlatformGroup(UnrealPlatformGroup.Windows))
        {
            PrivateIncludePaths.Add(Path.Combine(EngineDirectory, "Source/Runtime/VulkanRHI/Private/Windows"));
        }
        else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Linux))
        {
            PrivateIncludePaths.Add(Path.Combine(EngineDirectory, "Source/Runtime/VulkanRHI/Private/Linux"));
        }
        else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Android))
        {
            PrivateIncludePaths.Add(Path.Combine(EngineDirectory, "Source/Runtime/VulkanRHI/Private/Android"));
        }
    }
}
