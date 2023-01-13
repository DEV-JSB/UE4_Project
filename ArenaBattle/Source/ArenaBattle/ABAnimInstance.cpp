// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"

UABAnimInstance::UABAnimInstance()
{
	m_fCurrentPawnSpeed = 0.0f;
	m_bIsInAir = false;
	static ConstructorHelpers::FObjectFinder<UAnimMontage>
		ATTACK_MONTAGE(TEXT("/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
		m_pAttackMontange = ATTACK_MONTAGE.Object;
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		m_fCurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			m_bIsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}

void UABAnimInstance::PlayAttackMontage()
{
		Montage_Play(m_pAttackMontange, 1.0f);
}

void UABAnimInstance::JumpToAttackMontageSection(int32 _iNewSectionIndex)
{
	ABCHECK(Montage_IsPlaying(m_pAttackMontange));
	Montage_JumpToSection(GetAttackMontageSectionName(_iNewSectionIndex),m_pAttackMontange);
}

void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	OnAttackHitCheck.Broadcast();
}

void UABAnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}

FName UABAnimInstance::GetAttackMontageSectionName(int32 _iSectionIdx)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(_iSectionIdx, 1, 4), NAME_None);
	FString test = FString::Printf(TEXT("Attack%d"), _iSectionIdx);
	return FName(*FString::Printf(TEXT("Attack%d"),_iSectionIdx));
}
