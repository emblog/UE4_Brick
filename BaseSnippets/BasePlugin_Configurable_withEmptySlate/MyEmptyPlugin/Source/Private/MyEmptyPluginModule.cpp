#include "MyEmptyPluginModule.h"
#include "MyEmptyPluginSettings.h"
#include "INISetter.h"

void FMyEmptyPluginModule::StartupModule()
{
#if WITH_EDITOR
	FINISetter::RegisterSettings();
#endif

	FINISetter::LoadINISettings();

	FINISetter::PrintCurrentSettings_ForDebugging();
}

void FMyEmptyPluginModule::ShutdownModule()
{
#if WITH_EDITOR
	FINISetter::UnregisterSettings();
#endif
	FINISetter::SaveINISettings();
}

IMPLEMENT_MODULE(FMyEmptyPluginModule, MyEmptyPlugin)
