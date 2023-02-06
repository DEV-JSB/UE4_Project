// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class ARENABATTLE_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	void SetControlMode(int32 _iControlMode);


protected:
	enum class EControlMode
	{
		GTA,
		DIABLO
	};

	void SetControlMode(EControlMode _eControlMode);
	EControlMode m_eCurrentControlMode = EControlMode::GTA;
	FVector DirectionToMove = FVector::ZeroVector;


	float m_fArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float m_fArmLengthSpeed = 0.0f;
	float m_fArmRotationSpeed = 0.0f;


	FRotator CorrectionTest = FRotator::ZeroRotator;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void PostInitializeComponents() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent
		, class AController* EventInstigator, AActor* DamageCauser) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool CanSetWeapon();
	void SetWeapon(class AABWeapon* NewWeapon);

	UPROPERTY(VisibleAnywhere, Category = Weapon)
		class AABWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UABCharacterStatComponent* CharacterStat;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* m_pSpringArm;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* m_pCamera;

	UPROPERTY(VisibleAnywhere, Category = UI)
		class UWidgetComponent* HPBarWidget;
		

	UPROPERTY(VisibleAnywhere, Category = Weapon)
		USkeletalMeshComponent* m_pWeapon;

private:
	void UpDown(float _fNewAxisValue);
	void LeftRight(float _fNewAxisValue);

	void LookUp(float _fNewAxisValue);
	void Turn(float _fNewAxisValue);

	void ViewChange();
	void Attack();

	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* _pMontage, bool _bInterrupted);


	void AttackStartComboState();
	void AttackEndComboState();
	void AttackCheck();

private:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool m_bIsAttacking;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool m_bCanNextCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool m_bIsComboInputOn;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 m_iCurrentCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 m_iMaxCombo;

	UPROPERTY()
	class UABAnimInstance* m_pABAnim;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadOnly,Category = Attack , Meta = (AllowPrivateAccess = true))
	float m_fAttackRange;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float m_fAttackRadius;




};
