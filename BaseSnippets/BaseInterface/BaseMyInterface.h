#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BaseMyInterface.generated.h"

UINTERFACE(MinimalAPI)
class UBaseMyInterface : public UInterface
{
    GENERATED_BODY()
};

class MYPJOJECT_API IBaseMyInterface
{
    GENERATED_BODY()

public:
    virtual void DoSomething() = 0;
};
