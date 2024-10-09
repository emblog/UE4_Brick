#include "MyGlobalUtil.h"

void FGlobal::Log(FString LogString, ELog UtilLogType/* = ELog::Warning*/)
{
    switch (UtilLogType)
    {
    case ELog::Warning:
        UE_LOG(LogTemp, Warning, TEXT("MyEmptyProject Warning Log : %s"), *LogString);
        break;
    case ELog::Error:
        UE_LOG(LogTemp, Error, TEXT("MyEmptyProject Error Log : %s"), *LogString);
        break;
    default:
        break;
    }

    GEngine->AddOnScreenDebugMessage(11, 3, FColor::Green, LogString);
}