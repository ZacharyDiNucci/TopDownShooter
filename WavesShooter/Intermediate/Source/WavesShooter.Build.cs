using UnrealBuildTool;

public class WavesShooter : ModuleRules
{
	public WavesShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.Add("Core");
		PrivateDependencyModuleNames.Add("Core");
	}
}
