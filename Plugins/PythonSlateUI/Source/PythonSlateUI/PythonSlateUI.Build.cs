using UnrealBuildTool;

public class PythonSlateUI : ModuleRules
{
	public PythonSlateUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"UMG",
			"Slate",
			"SlateCore",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"InputCore",
			"EditorFramework",
			"UnrealEd",
			"LevelEditor",
			"WorkspaceMenuStructure",
		});
	}
}
