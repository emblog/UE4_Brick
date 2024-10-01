#pragma once


class FINISetter
{
public:

#if WITH_EDITOR
	
	static void RegisterSettings();
	static void UnregisterSettings();

#endif

	static void SaveINISettings();
	static void LoadINISettings();
	static void PrintCurrentSettings_ForDebugging();
};
