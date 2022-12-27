// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

void AABPlayerController::OnPossess(APawn* _pAPawn)
{
	ABLOG_S(Warning);
	Super::OnPossess(_pAPawn);
}

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}
