using UnrealBuildTool;

public class MyEmptyPlugin : ModuleRules
{
	public MyEmptyPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[]
		{ 
			"Core", 
			"CoreUObject",
			"Engine", 
		});

		// PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}