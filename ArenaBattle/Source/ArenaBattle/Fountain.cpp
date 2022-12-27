// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//StaticMesh'/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'

	// CreateComponents
	m_pBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	m_pWater = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	m_pLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	m_pSplash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));
	m_pMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT"));


	RootComponent = m_pBody;
	m_pWater->SetupAttachment(m_pBody);
	m_pLight->SetupAttachment(m_pBody);
	m_pSplash->SetupAttachment(m_pBody);


	m_pWater->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	m_pLight->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));
	m_pSplash->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));


	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SM_BODY(TEXT("/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SM_WATER(TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Meshes/Env/SM_Plains_Fountain_02.SM_Plains_Fountain_02"));


	if (SM_BODY.Succeeded())
		m_pBody->SetStaticMesh(SM_BODY.Object);
	if (SM_BODY.Succeeded())
		m_pWater->SetStaticMesh(SM_WATER.Object);

	static ConstructorHelpers::FObjectFinder<UParticleSystem>
		PS_SPLASH(TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_Base_01.P_Water_Fountain_Splash_Base_01"));
	if (PS_SPLASH.Succeeded())
		m_pSplash->SetTemplate(PS_SPLASH.Object);


	// RoatateSpeed Setting
	m_fRotateSpeed = 30.0f;
	m_pMovement->RotationRate = FRotator(0.0f, m_fRotateSpeed, 0.0f);


}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(ArenaBattle,Warning, TEXT("1Actor Name : %s , ID : %d , Location X : %3.f"), *GetName(), m_iID, GetActorLocation().X);
	ABLOG_S(Warning);
	ABLOG(Warning, TEXT("2Actor Name : %s , ID : %d , Location X : %3.f"), *GetName(), m_iID, GetActorLocation().X);
}

void AFountain::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	ABLOG_S(Warning);
}

void AFountain::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

