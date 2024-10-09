#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InGameMessageDispatcher.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MYEMPTYPROJECT_API UInGameMessageDispatcher : public UActorComponent
{
	GENERATED_BODY()

public:
	UInGameMessageDispatcher();

public:

};
