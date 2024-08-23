// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_zero : ModuleRules
{
	public Project_zero(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
