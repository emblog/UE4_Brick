#pragma once

#include "Modules/ModuleManager.h"

class MYEMPTYPLUGIN_API FMyEmptyPluginModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
