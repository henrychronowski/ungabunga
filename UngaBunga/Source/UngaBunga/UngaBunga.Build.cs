// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UngaBunga : ModuleRules
{
	public UngaBunga(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
