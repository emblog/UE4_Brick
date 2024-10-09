#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InGamePawn.generated.h"

UCLASS()
class MYEMPTYPROJECT_API AInGamePawn : public APawn
{
    GENERATED_BODY()

public:
    AInGamePawn();

protected:
    virtual void BeginPlay() override;

    // �Է� ó���� ���� �Լ���
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

    void OnMouseLClick();
    void OnMouseRClick();

    // Ű����� ť�� �̵� ó��
    void MoveLeft();
    void MoveRight();
    void MoveUp();
    void MoveDown();

    void KeyDown1();
    void KeyDown2();
    void KeyDown3();
    void KeyDown4();
    void KeyDown5();

    void KeyDown(int32 key);

private:
    // ���� �Ŵ����� ��ȣ�ۿ� (TWeakObjectPtr�� ����Ͽ� �����ϰ� ����)
    TWeakObjectPtr<class AInGameManager> GameManager;

public:
    UPROPERTY(EditAnywhere)
    class UCameraComponent* Camera = nullptr;
};
