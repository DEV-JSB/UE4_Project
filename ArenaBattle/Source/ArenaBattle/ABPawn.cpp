// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	m_pCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	m_pMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	m_pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));


	RootComponent = m_pCapsule;
	m_pMesh->SetupAttachment(m_pCapsule);
	m_pSpringArm->SetupAttachment(m_pCapsule);
	m_pCamera->SetupAttachment(m_pSpringArm);

	// Capsule Setting
	m_pCapsule->SetCapsuleHalfHeight(88.0f);
	m_pCapsule->SetCapsuleRadius(34.0f);

	//Mesh Setting Translate UE Coordinator
	m_pMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	// SpringArm CameraSetting
	m_pSpringArm->TargetArmLength = 400.0f;
	m_pSpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// SkeletalMesh Setting
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>
		SK_CARDBOARD(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (SK_CARDBOARD.Succeeded())
	{
		m_pMesh->SetSkeletalMesh(SK_CARDBOARD.Object);
	}



	m_pMesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance>
		WARRIOR_ANIM(TEXT("/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		m_pMesh->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}

}

// Called when the game starts or when spawned
void AABPawn::BeginPlay()
{
	Super::BeginPlay();
	
	/*m_pMesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	UAnimationAsset* pAnimAsset = LoadObject<UAnimationAsset>(nullptr, TEXT("/Game/Book/Animations/WarriorRun.WarriorRun"));
	if (nullptr != pAnimAsset)
		m_pMesh->PlayAnimation(pAnimAsset, true);*/
}

// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);
}

void AABPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPawn::PossessedBy(AController* _pNewController)
{
	Super::PossessedBy(_pNewController);
	ABLOG_S(Warning);
}

void AABPawn::UpDown(float _fNewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), _fNewAxisValue);
}

void AABPawn::LeftRight(float _fNewAxisValue)
{
	AddMovementInput(GetActorRightVector(), _fNewAxisValue);
}

