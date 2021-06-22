using UnrealBuildTool;

public class WavesShooterTarget : TargetRules
{
	public WavesShooterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("WavesShooter");
	}
}
