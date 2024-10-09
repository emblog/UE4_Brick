#include "InGamePawn.h"
#include "Game/InGameManager.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

#include "Runtime/Engine/Classes/Camera/CameraComponent.h"

#include "Game/Definitions/GameDefinitions.h"

AInGamePawn::AInGamePawn()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AInGamePawn::BeginPlay()
{
    Super::BeginPlay();

    // GameManager 참조 가져오기
    GameManager = Cast<AInGameManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AInGameManager::StaticClass()));
}

void AInGamePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // 마우스 클릭 처리
    PlayerInputComponent->BindAction("MouseLClick", IE_Pressed, this, &AInGamePawn::OnMouseLClick);
    PlayerInputComponent->BindAction("MouseRClick", IE_Pressed, this, &AInGamePawn::OnMouseRClick);

    // 키보드 입력으로 큐브 이동 처리
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AInGamePawn::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AInGamePawn::MoveRight);
    PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &AInGamePawn::MoveUp);
    PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &AInGamePawn::MoveDown);

    PlayerInputComponent->BindAction("Key01", IE_Pressed, this, &AInGamePawn::KeyDown1);
    PlayerInputComponent->BindAction("Key02", IE_Pressed, this, &AInGamePawn::KeyDown2);
    PlayerInputComponent->BindAction("Key03", IE_Pressed, this, &AInGamePawn::KeyDown3);
    PlayerInputComponent->BindAction("Key04", IE_Pressed, this, &AInGamePawn::KeyDown4);
    PlayerInputComponent->BindAction("Key05", IE_Pressed, this, &AInGamePawn::KeyDown5);
}

void AInGamePawn::OnMouseLClick()
{
    if (GameManager.IsValid())
    {
		GameManager->MouseLButton();
    }
}

void AInGamePawn::OnMouseRClick()
{
    if (GameManager.IsValid())
    {
		GameManager->MouseRButton();
    }
}

void AInGamePawn::MoveLeft()
{
    if (GameManager.IsValid())
    {
        // GameManager->MoveCube(FVector2D(-1, 0)); // 왼쪽으로 이동
    }
}

void AInGamePawn::MoveRight()
{
    if (GameManager.IsValid())
    {
        // GameManager->MoveCube(FVector2D(1, 0)); // 오른쪽으로 이동
    }
}

void AInGamePawn::MoveUp()
{
    if (GameManager.IsValid())
    {
        // GameManager->MoveCube(FVector2D(0, 1)); // 위로 이동
    }
}

void AInGamePawn::MoveDown()
{
    if (GameManager.IsValid())
    {
        // GameManager->MoveCube(FVector2D(0, -1)); // 아래로 이동
    }
}

void AInGamePawn::KeyDown1()
{
    KeyDown(0);
}

void AInGamePawn::KeyDown2()
{
    KeyDown(1);
}

void AInGamePawn::KeyDown3()
{
    KeyDown(2);
}

void AInGamePawn::KeyDown4()
{
    KeyDown(3);
}

void AInGamePawn::KeyDown5()
{
    KeyDown(4);
}

void AInGamePawn::KeyDown(int32 key)
{
    if (GameManager.IsValid())
    {
        
    }
}
