#pragma once

#include "CoreMinimal.h"
#include "MyStructExample.generated.h"

USTRUCT(BlueprintType)
struct FBaseMyStruct
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyStruct")
    int32 Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyStruct")
    float Speed;

    FMyBaseStruct()
        : Health(100), Speed(600.0f)
    {
    }

    FMyBaseStruct(int32 InHealth, float InSpeed)
        : Health(InHealth), Speed(InSpeed)
    {
    }
};
