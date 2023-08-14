// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FFgControlRigEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void AddMenuExtension(FMenuBuilder& MenuBuilder);
	void OnMenuEntryClicked(FMenuBuilder& MenuBuilder);
	void OnMenuEntryClicked();

	void OnImportTemplateClicked(FString path);
	void createActorBlueprint(FString path);
	UObject* createAsset(FString AssetPath, UClass* AssetClass, UFactory* AssetFactory, bool& bOutSuccess, FString& OutInfoMessage);

	void onFunctionTest();

private:
	FString lastFilePath;
};
