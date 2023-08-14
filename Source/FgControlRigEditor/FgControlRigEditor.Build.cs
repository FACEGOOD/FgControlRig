// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FgControlRigEditor : ModuleRules
{
	public FgControlRigEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				"FgControlRig/Public",
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				"FgControlRig/Public",

            }
            );
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
					"FgControlRig",
			
				// ... add other public dependencies that you statically link with here ...
			}
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "CoreUObject",
                "Engine",
				"Slate",
				"SlateCore",
                "InputCore",

				//runtime
                "ControlRig",
                "RigVM",
                "AnimGraphRuntime",
                "ApplicationCore",
                "AnimationCore",
                "MovieScene",
                "MovieSceneTracks",
				//Editor
                "EditorFramework",
                "EditorWidgets",
                "UnrealEd",
                "Kismet",
                "AnimGraph",
                "BlueprintGraph",
                "PropertyEditor",
                "RigVMDeveloper",
                "GraphEditor",
                "KismetCompiler",
                 //plugin
                "ControlRigDeveloper",
					//"FgControlRig",

				                    //developer
                "ToolWidgets",
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
