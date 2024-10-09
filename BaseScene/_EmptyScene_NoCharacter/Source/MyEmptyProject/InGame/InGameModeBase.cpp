// Fill out your copyright notice in the Description page of Project Settings.

#include "InGameModeBase.h"

#include "InGamePawn.h"
#include "InGamePlayerController.h"

AInGameModeBase::AInGameModeBase()
{
	this->DefaultPawnClass = AInGamePawn::StaticClass();
	this->PlayerControllerClass = AInGamePlayerController::StaticClass();
}
