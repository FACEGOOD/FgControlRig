// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FgControlRig : ModuleRules
{
	public FgControlRig(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
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
                "LiveLink",
                "LiveLinkInterface",
                "AnimationCore",
                //"VisualGraphUtils",
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
                "AnimGraphRuntime",
                "ApplicationCore",
                "ControlRig",
                "Core",
                "CoreUObject",
                "Engine",
                "MovieScene",
                "MovieSceneTracks",
                "PropertyPath",
                "Slate",
                "SlateCore",
                "InputCore",
                "TimeManagement",
                "MessageLog",
                "RigVM",
                "Sockets",
                "AssetRegistry",
                //developer
                "ToolWidgets",
                "DesktopPlatform",

				// ... add private dependencies that you statically link with here ...	
			}
            );
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
