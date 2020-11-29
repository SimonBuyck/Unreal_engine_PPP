// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "TheTravelersJourney.h"

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();
    SetInputMode(FInputModeGameAndUI());
}
