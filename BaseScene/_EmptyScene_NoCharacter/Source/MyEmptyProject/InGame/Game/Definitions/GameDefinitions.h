#pragma once

#include "CoreMinimal.h"
#include <array>
#include "Math/IntPoint.h"

#include "GameDefinitions.generated.h"

UENUM(BlueprintType)
enum class EInGamePhase : uint8
{
	Ready,

	Upkeep,
	TurnEnd,
	Cleanup,
};

UENUM(BlueprintType)
enum class ERotation : uint8
{
    R0   UMETA(DisplayName = "0 Degrees"),   // 0도
    R90  UMETA(DisplayName = "90 Degrees"),  // 90도
    R180 UMETA(DisplayName = "180 Degrees"), // 180도
    R270 UMETA(DisplayName = "270 Degrees")  // 270도
};

class FInGameUtil
{
public:
	static void UtilFunction();
};

