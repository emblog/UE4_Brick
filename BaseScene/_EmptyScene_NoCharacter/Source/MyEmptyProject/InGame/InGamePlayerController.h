#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InGamePlayerController.generated.h"


// 현재는 더미. 구현이 없음. 기존 컨트롤러를 대체하기 위함
UCLASS()
class MYEMPTYPROJECT_API AInGamePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AInGamePlayerController();
};
