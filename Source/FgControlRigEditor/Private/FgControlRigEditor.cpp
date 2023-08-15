// Copyright Epic Games, Inc. All Rights Reserved.

#include "FgControlRigEditor.h"
#include "Engine.h"
#include "Misc/EngineVersion.h"
#include "Engine/Blueprint.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "LevelEditorMenuContext.h"
#include "DesktopPlatform/Public/IDesktopPlatform.h"
#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Kismet2/BlueprintEditorUtils.h"

#include "UObject/SoftObjectPtr.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Factories/BlueprintFactory.h"
#include "AssetToolsModule.h"
#include "Engine/World.h"
#include "Factories/WorldFactory.h"
#include "Components/SkeletalMeshComponent.h"
#include "BlueprintEditorModule.h"
#include "EdGraphSchema_K2_Actions.h"
#include "FgControlRigTypes.h"

#define LOCTEXT_NAMESPACE "FFgControlRigEditorModule"

void FFgControlRigEditorModule::StartupModule()
{
	//	 This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
	MenuExtender->AddMenuExtension("LevelEditor", EExtensionHook::After, nullptr, FMenuExtensionDelegate::CreateRaw(this, &FFgControlRigEditorModule::AddMenuExtension));
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
}


void FFgControlRigEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

}

void FFgControlRigEditorModule::AddMenuExtension(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.BeginSection("FACEGOOD", LOCTEXT("FACEGOOD Section", "FACEGOOD"));
	{
		MenuBuilder.AddSubMenu(FText::FromString("TemplateBlueprint"),
			FText::FromString("Import blueprint for metahuman version 1.0"),
			FNewMenuDelegate::CreateRaw(this, &FFgControlRigEditorModule::OnMenuEntryClicked));
	}
	MenuBuilder.EndSection();
}

void FFgControlRigEditorModule::OnMenuEntryClicked(FMenuBuilder& MenuBuilder)
{
	// Implement your menu entry functionality here
	UE_LOG(LogTemp, Warning, TEXT("My Menu Entry Clicked!"));

	FString PluginBaseDir = FPaths::ProjectPluginsDir();
	FString PluginResourceDir = FPaths::Combine(*PluginBaseDir, TEXT("FgControlRig/Resources"));
#if UE5_2
	FString ResourceFileV1 = FPaths::Combine(*PluginResourceDir, TEXT("520"));
#elif UE5_1
	FString ResourceFileV1 = FPaths::Combine(*PluginResourceDir, TEXT("51"));
#endif
	// Create the Submenu Entries
	MenuBuilder.AddMenuEntry(
		FText::FromString("MetaHuman"),
		FText::FromString("Import blueprint for metahuman version 1.0"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FFgControlRigEditorModule::OnImportTemplateClicked, ResourceFileV1))
	);

	//MenuBuilder.AddMenuEntry(
	//	FText::FromString("test 2.0"),
	//	FText::FromString("Import blueprint for metahuman version 2.0"),
	//	FSlateIcon(),
	//	FUIAction(FExecuteAction::CreateRaw(this, &FFgControlRigEditorModule::onFunctionTest))
	//);
}

void FFgControlRigEditorModule::OnMenuEntryClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("My Menu Entry Clicked!"));
	FEngineVersion EngineVersion = FEngineVersion::Current();

	// Print the engine version information
	UE_LOG(LogTemp, Warning, TEXT("Unreal Engine Version: %s,%s"), *EngineVersion.ToString(), *EngineVersion.GetBranch());


	FString PluginBaseDir = FPaths::ProjectPluginsDir();
	FString PluginResourceDir = FPaths::Combine(*PluginBaseDir, TEXT("FgControlRig/Resources"));

	// Now, you can use PluginResourceDir to access your resource file.
	FString ResourceFile = FPaths::Combine(*PluginResourceDir, TEXT("MyResourceFile.txt"));

	// ... Do whatever you need with the resource file path
	UE_LOG(LogTemp, Warning, TEXT("Resource File Path: %s"), *ResourceFile);

}

void FFgControlRigEditorModule::OnImportTemplateClicked(FString path)
{

	UE_LOG(LogTemp, Warning, TEXT("My Menu Entry Clicked! %s"), *path);

	FString animBPPath = FPaths::Combine(*path, TEXT("FaceGoodAnimTemp.uasset"));
	FString actorBPPath = FPaths::Combine(*path, TEXT("FaceGoodActorTemp.uasset"));

	FString DefaultPath = FPaths::ProjectContentDir();
	FString SelectedDirectoryPath;

	// Get the desktop platform module
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();


	auto copyFileFunc = [](FString& from, FString& to)
	{
		const TCHAR* a = *from;
		const TCHAR* b = *to;
		// Copy the file to the content directory
		IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
		bool bCopySuccess = FileManager.CopyFile(b, a);

		if (bCopySuccess)
		{
			UE_LOG(LogTemp, Warning, TEXT("File copied successfully to: %s"), b);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to copy the file."));
		}
	};


	auto compilerBlueprint = [](FString path)
	{
		UBlueprint* LoadedBlueprint = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *path));

		if (LoadedBlueprint)
		{
			// Successfully loaded the Blueprint asset
			// Now you can use the LoadedBlueprint for further processing
			FCompilerResultsLog Result;
			FKismetEditorUtilities::CompileBlueprint(LoadedBlueprint, EBlueprintCompileOptions::SkipSave, &Result);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to load Blueprint asset."));
		}
	};


	if (DesktopPlatform)
	{
		// Show the open directory dialog
		bool bResult = DesktopPlatform->OpenDirectoryDialog(nullptr, TEXT("Choose a directory"), DefaultPath, SelectedDirectoryPath);

		if (bResult)
		{
			// The user selected a directory
			UE_LOG(LogTemp, Warning, TEXT("Selected Directory: %s"), *SelectedDirectoryPath);

			// Combine the content directory path with the destination file name
			FString animBPPath_Dest = FPaths::Combine(*SelectedDirectoryPath, TEXT("FaceGoodAnimTemp.uasset"));
			FString ProjectDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());

			copyFileFunc(animBPPath, animBPPath_Dest);
			animBPPath_Dest = FPaths::Combine(*SelectedDirectoryPath, TEXT("FaceGoodAnimTemp.FaceGoodAnimTemp"));
			animBPPath_Dest = animBPPath_Dest.Replace(*(FPaths::Combine(ProjectDir, TEXT("Content"))), *FString("/Game"));
			compilerBlueprint(animBPPath_Dest);

			FString gamePath = SelectedDirectoryPath.Replace(*(FPaths::Combine(ProjectDir, TEXT("Content"))), *FString("/Game"));
			//FString actorBPPath_Dest = FPaths::Combine(*SelectedDirectoryPath, TEXT("FaceGoodActorTemp.uasset"));
			//copyFileFunc(actorBPPath, actorBPPath_Dest);
			//actorBPPath_Dest = FPaths::Combine(*SelectedDirectoryPath, TEXT("FaceGoodActorTemp.FaceGoodActorTemp"));
			//actorBPPath_Dest = actorBPPath_Dest.Replace(*(FPaths::Combine(ProjectDir, TEXT("Content"))), *FString("/Game"));

			//
			//compilerBlueprint(actorBPPath_Dest);

			createActorBlueprint(gamePath);
		}
		else
		{
			// The user canceled the directory dialog
			UE_LOG(LogTemp, Warning, TEXT("Directory dialog canceled."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get the desktop platform module."));
	}

}



void FFgControlRigEditorModule::onFunctionTest()
{


}

void FFgControlRigEditorModule::createActorBlueprint(FString path)
{

	UBlueprintFactory* Factory = NewObject<UBlueprintFactory>();
	Factory->BlueprintType = EBlueprintType::BPTYPE_Normal;
	Factory->bEditAfterNew = true;

	FString BlueprintName("FaceGoodActorTemp");
	FString PackagePath = FPaths::Combine(path, BlueprintName);
	bool bOutSuccess;
	FString OutInfoMessage;
	UObject* Asset = createAsset(PackagePath, UBlueprint::StaticClass(), Factory, bOutSuccess, OutInfoMessage);

	UBlueprint* bp = Cast<UBlueprint>(Asset);
	if (bp)
	{
		TArray<UActorComponent*> NewComponents;
		USkeletalMeshComponent* SkeletalMeshComponent = NewObject<USkeletalMeshComponent >(bp);

		//static ConstructorHelpers::FClassFinder<UAnimBlueprint> AnimationBlueprintClassFinder(TEXT("AnimBlueprint'/Game/MetaHumans/t2/FaceGoodAnimTemp.FaceGoodAnimTemp_C'"));
		//static ConstructorHelpers::FObjectFinder<UClass> AnimationBlueprintClassFinder(TEXT("AnimInstance'/Game/MetaHumans/t2/FaceGoodAnimTemp.FaceGoodAnimTemp_C'"));

		FString txtStr = "AnimBlueprint '" + path + "/FaceGoodAnimTemp.FaceGoodAnimTemp_C'";

		UClass* Anim = LoadClass<UAnimInstance>(NULL, *txtStr);
		//static ConstructorHelpers::FClassFinder<UAnimInstance> AnimationBlueprintClassFinder(TEXT("AnimBlueprint'/Game/MetaHumans/t2/FaceGoodAnimTemp.FaceGoodAnimTemp_C'"));

		if (Anim)
		{
			// Get the generated class of the animation blueprint
			SkeletalMeshComponent->SetAnimInstanceClass(Anim);
		}
		NewComponents.Add(SkeletalMeshComponent);
		FKismetEditorUtilities::AddComponentsToBlueprint(bp, NewComponents);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Failed to add component to  Blueprint asset."));
	}
}

UObject* FFgControlRigEditorModule::createAsset(FString AssetPath, UClass* AssetClass, UFactory* AssetFactory, bool& bOutSuccess, FString& OutInfoMessage)
{
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();

	UFactory* Factory = AssetFactory;
	if (Factory == nullptr)
	{
		for (UFactory* Fac : AssetTools.GetNewAssetFactories())
		{
			if (Fac->SupportedClass == AssetClass)
			{
				Factory = Fac;
				break;
			}
		}

		if (Factory == nullptr)
		{
			bOutSuccess = false;
			OutInfoMessage = FString::Printf(TEXT("Create Asset Failed - Was not able to find factory for asset class.'%s'"), *AssetPath);
			return nullptr;
		}
	}

	if (Factory->SupportedClass != AssetClass)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Asset Failed - Factory cannot create desired asset class.'%s'"), *AssetPath);
		return nullptr;
	}

	UObject* Asset = AssetTools.CreateAsset(FPaths::GetBaseFilename(AssetPath), FPaths::GetPath(AssetPath), AssetClass, Factory);
	if (Asset == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Create Asset Failed - Either the path is  invalid or the aset already exists.'%s'"), *AssetPath);
		return nullptr;
	}

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Create Asset Succeeded - '%s'"), *AssetPath);
	return Asset;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFgControlRigEditorModule, FgControlRigEditor)