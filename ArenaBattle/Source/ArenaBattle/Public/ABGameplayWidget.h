// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Blueprint/UserWidget.h"
#include "ABGameplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABGameplayWidget : public UUserWidget
{
	GENERATED_BODY()
	

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnResumClicked();

	UFUNCTION()
		void OnReturnToTitleClicked();

	UFUNCTION()
		void OnRetryGameClicked();
protected:
	UPROPERTY()
		class UButton* ResumeButton;
	UPROPERTY()
		class UButton* ReturnToTittleButton;
	UPROPERTY()
		class UButton* RetryGameButton;
};
