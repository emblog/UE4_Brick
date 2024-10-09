#include "InGameManager.h"

#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"

#include "Engine/Engine.h"
#include <Kismet/GameplayStatics.h>

#include "../../Global/MyGlobalUtil.h"
#include "Definitions/GameDefinitions.h"

AInGameManager::AInGameManager()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	SetRootComponent(RootScene);

	// properties
	this->PrimaryActorTick.bCanEverTick = true;
	this->bFindCameraComponentWhenViewTarget = true;	

	// Root scene component
	this->Scene = this->CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->SetRootComponent(Scene);

	// Border root component
	this->BorderRoot = this->CreateDefaultSubobject<USceneComponent>(TEXT("BorderRoot"));
	this->BorderRoot->SetupAttachment(this->RootComponent);

	// Camera
	this->Camera = this->CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->Camera->SetupAttachment(this->RootComponent);
	FVector CameraCenter = FVector(0, 0, 0);
	this->Camera->SetRelativeLocation(CameraCenter);
	this->Camera->SetConstraintAspectRatio(false);
	this->Camera->SetAutoActivate(true);
}

void AInGameManager::BeginPlay()
{
	Super::BeginPlay();

	CheckComponentsLive();;
}

void AInGameManager::CheckComponentsLive()
{
	// check( my moduels  != nullptr);
}

void AInGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInGameManager::MouseLButton()
{
	FGlobal::Log("Mouse LButton");
}

void AInGameManager::MouseRButton()
{
	FGlobal::Log("Mouse LButton");
}

