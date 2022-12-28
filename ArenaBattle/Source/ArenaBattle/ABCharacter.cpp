// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"

// Sets default values
AABCharacter::AABCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	m_pSpringArm->SetupAttachment(GetCapsuleComponent());
	m_pCamera->SetupAttachment(m_pSpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	m_pSpringArm->TargetArmLength = 400.0f;
	m_pSpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>
		SK_CARDBOARD(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));

	if (SK_CARDBOARD.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_CARDBOARD.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance>
		WORRIOR_ANIM(TEXT("/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (WORRIOR_ANIM.Succeeded())
		GetMesh()->SetAnimInstanceClass(WORRIOR_ANIM.Class);

	//SetControlMode(0);
	SetControlMode(EControlMode::DIABLO);

}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AABCharacter::SetControlMode(EControlMode _eControlMode)
{
	m_eCurrentControlMode = _eControlMode;
	switch (m_eCurrentControlMode)
	{
	case EControlMode::GTA:
		m_pSpringArm->TargetArmLength = 450.0f;
		m_pSpringArm->SetRelativeRotation(FRotator::ZeroRotator);
		m_pSpringArm->bUsePawnControlRotation = true;
		m_pSpringArm->bInheritPitch = true;
		m_pSpringArm->bInheritRoll = true;
		m_pSpringArm->bInheritYaw = true;

		m_pSpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;

		// Character Rotation To Camera Foward
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::DIABLO:
		m_pSpringArm->TargetArmLength = 800.0f;
		m_pSpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
		m_pSpringArm->bUsePawnControlRotation = false;
		m_pSpringArm->bInheritPitch = false;
		m_pSpringArm->bInheritYaw = false;
		m_pSpringArm->bInheritRoll = false;
		m_pSpringArm->bDoCollisionTest = false;
		bUseControllerRotationYaw = true;
		break;
	}
}

// Called every frame
void AABCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (m_eCurrentControlMode)
	{
	case EControlMode::DIABLO:
		if (0.0f < DirectionToMove.SizeSquared())
		{
			GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
			AddMovementInput(DirectionToMove);
		}
		break;
	}
}

// Called to bind functionality to input
void AABCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABCharacter::LeftRight);

	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AABCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AABCharacter::LookUp);

}

void AABCharacter::UpDown(float m_fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), m_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		DirectionToMove.X = m_fNewAxisValue;
		break;
	default:
		break;
	}
}

void AABCharacter::LeftRight(float m_fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), m_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		DirectionToMove.Y = m_fNewAxisValue;
		break;
	default:
		break;
	}
}

void AABCharacter::LookUp(float m_fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddControllerPitchInput(m_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		break;
	default:
		break;
	}
}

void AABCharacter::Turn(float m_fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddControllerYawInput(m_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		break;
	default:
		break;
	}
}

