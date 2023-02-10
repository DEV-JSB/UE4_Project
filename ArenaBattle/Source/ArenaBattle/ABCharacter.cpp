// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"
#include "ABWeapon.h"
#include "ABCharacterStatComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "ABAnimInstance.h"
#include "DrawDebugHelpers.h"

#include"ABAIController.h"

#include "Components/WidgetComponent.h"

#include "ABCharacterWidget.h"


// Sets default values
AABCharacter::AABCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	CharacterStat = CreateDefaultSubobject<UABCharacterStatComponent>(TEXT("CHARACTERSTAT"));
	
	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));


	m_pSpringArm->SetupAttachment(GetCapsuleComponent());
	m_pCamera->SetupAttachment(m_pSpringArm);
	HPBarWidget->SetupAttachment(GetMesh());


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
	SetControlMode(EControlMode::GTA);
	
	m_fArmLengthSpeed = 3.0f;
	m_fArmRotationSpeed = 10.0f;


	GetCharacterMovement()->JumpZVelocity = 800.0f;

	m_bIsAttacking = false;


	m_iMaxCombo = 4;
	AttackEndComboState();


	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ABCharacter"));

	m_fAttackRange = 200.0f;
	m_fAttackRadius = 50.0f;

	/*FName WeaponSocket(TEXT("hand_rSocket"));
	if (GetMesh()->DoesSocketExist(WeaponSocket))
	{
		m_pWeapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
		static ConstructorHelpers::FObjectFinder<USkeletalMesh>
			SK_WEAPON(TEXT("/Game/InfinityBladeWeapons/Weapons/Blade/Swords/Blade_BlackKnight/SK_Blade_BlackKnight.SK_Blade_BlackKnight"));
		if (SK_WEAPON.Succeeded())
		{
			m_pWeapon->SetSkeletalMesh(SK_WEAPON.Object);

		}
		m_pWeapon->SetupAttachment(GetMesh(), WeaponSocket);
	}*/


	HPBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	HPBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget>UI_HUD(TEXT("/Game/Book/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HUD.Succeeded())
	{
		HPBarWidget->SetWidgetClass(UI_HUD.Class);
		HPBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}


	AIControllerClass = AABAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	/*FName WeaponSocket(TEXT("hand_rSocket"));
	auto CurWeapon = GetWorld()->SpawnActor<AABWeapon>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (nullptr != CurWeapon)
	{
		CurWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
	}*/


	// 4.21 버전부터 PostInitializeComponents 말고 BeginPlay 로 위젯 초기화 시점을 해야한다.
	CharacterStat->OnHPIsZero.AddLambda([this]()->void {
		ABLOG(Warning, TEXT("OnHPIsZero"));
		m_pABAnim->SetDeadAnim();
		SetActorEnableCollision(false);
		});


	auto CharacterWidget = Cast<UABCharacterWidget>(HPBarWidget->GetUserWidgetObject());
	if (nullptr != CharacterWidget)
	{
		CharacterWidget->BindCharacterStat(CharacterStat);
	}

}

void AABCharacter::SetControlMode(EControlMode _eControlMode)
{
	m_eCurrentControlMode = _eControlMode;
	switch (m_eCurrentControlMode)
	{
	case EControlMode::GTA:
		//m_pSpringArm->TargetArmLength = 450.0f;
		//m_pSpringArm->SetRelativeRotation(FRotator::ZeroRotator);
		m_fArmLengthTo = 450.0f;
		
		
		m_pSpringArm->bUsePawnControlRotation = true;
		m_pSpringArm->bInheritPitch = true;
		m_pSpringArm->bInheritRoll = true;
		m_pSpringArm->bInheritYaw = true;

		m_pSpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;

		// Character Rotation To Camera Foward
		GetCharacterMovement()->bOrientRotationToMovement = true;

		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::DIABLO:
		//m_pSpringArm->TargetArmLength = 800.0f;
		//m_pSpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
		m_fArmLengthTo = 800.0f;		

		m_pSpringArm->bUsePawnControlRotation = false;
		m_pSpringArm->bInheritPitch = false;
		m_pSpringArm->bInheritYaw = false;
		m_pSpringArm->bInheritRoll = false;
		m_pSpringArm->bDoCollisionTest = false;


		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::NPC:
		/*bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);*/
		break;
	}
}

// Called every frame
void AABCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ChangeView Interp Distance
	m_pSpringArm->TargetArmLength = FMath::FInterpTo(m_pSpringArm->TargetArmLength, m_fArmLengthTo, DeltaTime, m_fArmLengthSpeed);
	


	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::DIABLO:
		m_pSpringArm->SetRelativeRotation(FMath::RInterpTo(m_pSpringArm->GetRelativeRotation(), FRotator(-45.0f, 0.0f, 0.0f), DeltaTime, m_fArmRotationSpeed));
		break;
	default:
		break;
	}


	// Rotation 
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

void AABCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	m_pABAnim = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());
	ABCHECK(m_pABAnim);

	m_pABAnim->OnMontageEnded.AddDynamic(this, &AABCharacter::OnAttackMontageEnded);

	m_pABAnim->OnNextAttackCheck.AddLambda([this]() -> void {
		ABLOG(Warning, TEXT("OnNextAttackCheck"));
		m_bCanNextCombo = false;
		if (m_bIsComboInputOn)
		{
			AttackStartComboState();
			m_pABAnim->JumpToAttackMontageSection(m_iCurrentCombo);
		}
		});

	m_pABAnim->OnAttackHitCheck.AddUObject(this, &AABCharacter::AttackCheck);


	

}

float AABCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	ABLOG(Warning, TEXT("Actor : %s took Damage : %f"), *GetName(), FinalDamage);

	CharacterStat->SetDamage(FinalDamage);
	return FinalDamage;
}

void AABCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (IsPlayerControlled())
	{
		SetControlMode(EControlMode::DIABLO);
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
	else
	{
		SetControlMode(EControlMode::NPC);
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
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

	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed,this, &AABCharacter::ViewChange);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AABCharacter::Attack);

	PlayerInputComponent->BindAction(TEXT("JUMP"), EInputEvent::IE_Pressed, this, &AABCharacter::Jump);
}

bool AABCharacter::CanSetWeapon()
{
	return (nullptr == CurrentWeapon);
}

void AABCharacter::SetWeapon(AABWeapon* NewWeapon)
{
	ABCHECK(nullptr != NewWeapon && nullptr == CurrentWeapon);
	FName WeaponSocket(TEXT("hand_rSocket"));
	if (nullptr != NewWeapon)
	{
		NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		NewWeapon->SetOwner(this);
		CurrentWeapon = NewWeapon;
	}
}

void AABCharacter::UpDown(float _fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), _fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		DirectionToMove.X = _fNewAxisValue;
		break;
	default:
		break;
	}
}

void AABCharacter::LeftRight(float _fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), _fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		DirectionToMove.Y = _fNewAxisValue;
		break;
	default:
		break;
	}
}

void AABCharacter::LookUp(float _fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddControllerPitchInput(_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		break;
	default:
		break;
	}
}

void AABCharacter::Turn(float _fNewAxisValue)
{
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		AddControllerYawInput(_fNewAxisValue);
		break;
	case AABCharacter::EControlMode::DIABLO:
		break;
	default:
		break;
	}
}

void AABCharacter::ViewChange()
{
	
	switch (m_eCurrentControlMode)
	{
	case AABCharacter::EControlMode::GTA:
		m_pSpringArm->SetRelativeRotation(GetController()->GetControlRotation());
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::DIABLO);
		break;
	case AABCharacter::EControlMode::DIABLO:
		GetController()->SetControlRotation(m_pSpringArm->GetRelativeRotation());
		SetControlMode(EControlMode::GTA);
		break;
	default:
		break;
	}

}

void AABCharacter::Attack()
{
	if (m_bIsAttacking)
	{
		ABCHECK(FMath::IsWithinInclusive<int32>(m_iCurrentCombo, 1, m_iMaxCombo));
		if (m_bCanNextCombo)
		{
			m_bIsComboInputOn = true;
		}
	}
	else
	{
		ABCHECK(m_iCurrentCombo == 0);
		AttackStartComboState();
		m_pABAnim->PlayAttackMontage();
		m_pABAnim->JumpToAttackMontageSection(m_iCurrentCombo);
		m_bIsAttacking = true;
	}
}

void AABCharacter::OnAttackMontageEnded(UAnimMontage* _pMontage, bool _bInterrupted)
{
	ABCHECK(m_bIsAttacking);
	ABCHECK(m_iCurrentCombo > 0);
	m_bIsAttacking = false;
	AttackEndComboState();


	OnAttackEnd.Broadcast();

}

void AABCharacter::AttackStartComboState()
{
	m_bCanNextCombo = true;
	m_bIsComboInputOn = false;
	ABCHECK(FMath::IsWithinInclusive<int32>(m_iCurrentCombo, 0, m_iMaxCombo - 1));
	m_iCurrentCombo = FMath::Clamp<int32>(m_iCurrentCombo + 1 , 1 , m_iMaxCombo);
}

void AABCharacter::AttackEndComboState()
{
	m_bIsComboInputOn = false;
	m_bCanNextCombo = false;
	m_iCurrentCombo = 0;

}

void AABCharacter::AttackCheck()
{
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(HitResult
													, GetActorLocation()
													, GetActorLocation() + GetActorForwardVector() * m_fAttackRange
													, FQuat::Identity
													, ECollisionChannel::ECC_GameTraceChannel2
													, FCollisionShape::MakeSphere(m_fAttackRadius)
													, Params);

#if ENABLE_DRAW_DEBUG
	FVector TraceVec = GetActorForwardVector() * m_fAttackRange;
	FVector Center = GetActorLocation() + TraceVec * 0.5f;
	float HalfHeight = m_fAttackRange * 0.5f + m_fAttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;

	DrawDebugCapsule(GetWorld()
								, Center
								, HalfHeight
								, m_fAttackRadius
								, CapsuleRot
								, DrawColor
								, false
								, DebugLifeTime);



#endif

	if (bResult)
	{
		if (HitResult.Actor.IsValid())
		{
			ABLOG(Warning, TEXT("Hit Actor Name : %s"), *HitResult.Actor->GetName());

			FDamageEvent DamageEvent;
			HitResult.Actor->TakeDamage(CharacterStat->GetAttack(), DamageEvent, GetController(), this);
		}
	}
}

