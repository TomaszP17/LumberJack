// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjektUnreal : ModuleRules
{
	public ProjektUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTasks", "UMG" });
	}
}
