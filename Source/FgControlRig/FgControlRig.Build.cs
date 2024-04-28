// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
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
                "RigVM",
                "Sockets",
                "AssetRegistry",
                //developer

				// ... add private dependencies that you statically link with here ...	
			}
            );
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
        if (Target.Type == TargetType.Editor)
        {
            // TODO: This is required for the capture data to create a UFootageComponent
            // ideally the UFootageComponent would be able to be created in a runtime environment
            // but it currently depends on editor only functions from CustomMaterialUtils
            PrivateDependencyModuleNames.Add("ToolWidgets");
            PrivateDependencyModuleNames.Add("DesktopPlatform");

            //PrivateDependencyModuleNames.Add("DirectoryWatcher");
        }
    }
}
