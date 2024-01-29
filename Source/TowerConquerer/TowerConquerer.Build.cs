// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TowerConquerer : ModuleRules
{
	public TowerConquerer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
