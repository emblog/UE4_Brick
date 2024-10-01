#pragma once

#include "MyEmptyPluginSettings.generated.h"

UCLASS(config = Game, defaultconfig)
class MYEMPTYPLUGIN_API UMyEmptyPluginSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(config, EditAnywhere, Category = "General Settings")
	int32 ExampleSetting;
	UPROPERTY(config, EditAnywhere, Category = "General Settings")
	bool bEnableFeature;

	UFUNCTION(BlueprintCallable, Category = "MyPlugin Settings")
	int32 GetExampleSetting() const
	{
		return ExampleSetting;
	}
	UFUNCTION(BlueprintCallable, Category = "MyPlugin Settings")
	bool IsFeatureEnabled() const
	{
		return bEnableFeature;
	}
};
