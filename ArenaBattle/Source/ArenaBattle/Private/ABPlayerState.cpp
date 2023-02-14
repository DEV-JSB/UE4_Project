// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerState.h"

AABPlayerState::AABPlayerState()
{
	CharacterLevel = 1;
	GameScore = 0;
}
int32 AABPlayerState::GetCharacterLevel() const
{

	return CharacterLevel;
}

int32 AABPlayerState::GetGameScore() const
{
	return GameScore;
}

void AABPlayerState::InitPlayerData()
{
	SetPlayerName(TEXT("Destiny"));
	CharacterLevel = 5;
	GameScore = 0;
}
