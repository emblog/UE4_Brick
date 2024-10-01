#include "INISetter.h"

#include "CoreMinimal.h"
#include "ISettingsModule.h"
#include "MyEmptyPluginSettings.h"

#if WITH_EDITOR

void FINISetter::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{ 
		SettingsModule->RegisterSettings("Project", "Plugins", "MyEmptyPlugin",
			FText::FromString("MyEmptyPlugin Settings"),
			FText::FromString("Configuration settings for MyEmptyPlugin."),
			GetMutableDefault<UMyEmptyPluginSettings>()
		);
	}
}

void FINISetter::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "MyEmptyPlugin");
	}
}

#endif

void FINISetter::SaveINISettings()
{
	UMyEmptyPluginSettings* Settings = GetMutableDefault<UMyEmptyPluginSettings>();
	if (Settings)
	{
		Settings->SaveConfig();
		UE_LOG(LogTemp, Log, TEXT("MyEmptyPlugin: Settings saved to INI."));
	}
}

void FINISetter::LoadINISettings()
{
	UMyEmptyPluginSettings* Settings = GetMutableDefault<UMyEmptyPluginSettings>();
	if (Settings)
	{
		Settings->ReloadConfig();
		UE_LOG(LogTemp, Log, TEXT("MyEmptyPlugin: Settings reloaded from INI."));
	}
}

void FINISetter::PrintCurrentSettings_ForDebugging()
{
	UMyEmptyPluginSettings* Settings = GetMutableDefault<UMyEmptyPluginSettings>();
	if (Settings)
	{
		UE_LOG(LogTemp, Log, TEXT("MyEmptyPlugin: ExampleSetting = %d"), Settings->ExampleSetting);
		UE_LOG(LogTemp, Log, TEXT("MyEmptyPlugin: bEnableFeature = %s"), Settings->bEnableFeature ? TEXT("True") : TEXT("False"));
	}
}