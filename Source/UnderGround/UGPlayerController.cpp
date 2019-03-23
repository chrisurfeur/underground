// Fill out your copyright notice in the Description page of Project Settings.

#include "UGPlayerController.h"

void AUGPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputMode(FInputModeGameAndUI());
}


