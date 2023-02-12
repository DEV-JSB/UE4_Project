// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnNextAttackCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UABAnimInstance();

public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void PlayAttackMontage();

	void JumpToAttackMontageSection(int32 _iNewSectionIndex);


public:
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	FOnAttackHitCheckDelegate OnAttackHitCheck;

	void SetDeadAnim() { m_bIsDead = true; }
private:
	UFUNCTION()
	void AnimNotify_AttackHitCheck();

	// -> �̰͵��־����� ����
	UFUNCTION()
	void AnimNotify_NextAttackCheck();

	FName GetAttackMontageSectionName(int32 _iSectionIdx);
private:
	// ��� ����Ʈ���� ������ �����ϰԲ� ����
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = Pawn,Meta = (AllowPrivateAccess = true))
	float m_fCurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool m_bIsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* m_pAttackMontange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool m_bIsDead;
};
