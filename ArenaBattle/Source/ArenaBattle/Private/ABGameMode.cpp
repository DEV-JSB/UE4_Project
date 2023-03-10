// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerState.h"
#include "ABPlayerController.h"
#include "ABGameState.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
	PlayerStateClass = AABPlayerState::StaticClass();
	GameStateClass = AABGameState::StaticClass();

	ScoreToClear = 2;
}

int32 AABGameMode::GetScore() const
{
	return ABGameState->GetTotalGameScore();
}

void AABGameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABGameState = Cast<AABGameState>(GameState);
}

void AABGameMode::PostLogin(APlayerController* _pNewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(_pNewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));


	auto ABPlayerState = Cast<AABPlayerState>(_pNewPlayer->PlayerState);
	ABCHECK(nullptr != ABPlayerState);
	ABPlayerState->InitPlayerData();

}

void AABGameMode::AddScore(AABPlayerController* ScoredPlayer)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		const auto PlayeController = Cast<AABPlayerController>(It->Get());
		if ((nullptr != PlayeController) && (ScoredPlayer == PlayeController))
		{
			PlayeController->AddGameScore();
			break;
		}
	}
	ABGameState->AddGameScore();

	if (GetScore() >= ScoreToClear)
	{
		ABGameState->SetGameCleared();

		for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
		{
			(*It)->TurnOff();
		}
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			const auto PlayerController = Cast<AABPlayerController>(It->Get());
			if (nullptr != PlayerController)
			{
				PlayerController->ShowResultUI();
			}
		}
	}
}