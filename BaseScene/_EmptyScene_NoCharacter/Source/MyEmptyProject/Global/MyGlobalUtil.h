#pragma once

#include "CoreMinimal.h"

enum class ELog : uint8
{
	Info,
	Warning,
	Error
};

class FGlobal
{
public:
    static void Log(FString LogString, ELog UtilLogType = ELog::Warning);
};