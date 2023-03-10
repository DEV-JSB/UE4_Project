// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	AABPlayerController();


	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* _pAPawn);
	class UABHUDWidget* GetHUDWidget() const;

	void NPCKill(class AABCharacter* KilledNPC) const;
	void AddGameScore() const;

	void ChangeInputMode(bool bGameMode = true);

	void ShowResultUI();
protected:
	virtual void SetupInputComponent() override;
protected:
	UPROPERTY(EditDefaultsOnly , BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayWidget> MenuWidgetClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayResultWidget> ResultWidgetClass;

private:
	void OnGamePause();

	UPROPERTY()
		class UABGameplayWidget* MenuWidget;
	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;


	UPROPERTY()
		class UABHUDWidget* HUDWidget;
	UPROPERTY()
		class AABPlayerState* ABPlayerState;
	UPROPERTY()
		class UABGameplayResultWidget* ResultWidget;
};
