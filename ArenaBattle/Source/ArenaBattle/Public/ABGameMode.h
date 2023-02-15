// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AABGameMode();
	int32 GetScore() const;
	virtual void PostInitializeComponents() override;
	virtual void PostLogin(APlayerController* _pNewPlayer) override;
	void AddScore(class AABPlayerController* ScoredPlayer);

private:
	UPROPERTY()
		class AABGameState* ABGameState;
	UPROPERTY()
		int32 ScoreToClear;
};
