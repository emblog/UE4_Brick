#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InGameManager.generated.h"

UCLASS()
class MYEMPTYPROJECT_API AInGameManager : public AActor
{
	GENERATED_BODY()

public:

	AInGameManager();

	UPROPERTY(EditAnywhere)
	class USceneComponent* Scene = nullptr;     
	UPROPERTY(EditAnywhere)
	class USceneComponent* BorderRoot = nullptr;        
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* RootScene;

public: // interface
	void MouseLButton();
	void MouseRButton();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	void CheckComponentsLive();
};