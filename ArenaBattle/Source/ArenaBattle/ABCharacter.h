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

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* m_pSpringArm;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* m_pCamera;

private:
	void UpDown(float m_fNewAxisValue);
	void LeftRight(float m_fNewAxisValue);

	void LookUp(float m_fNewAxisValue);
	void Turn(float m_fNewAxisValue);

	void ViewChange();
	void Attack();
};
