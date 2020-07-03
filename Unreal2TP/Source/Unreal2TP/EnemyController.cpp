// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "Unreal2TPCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Enemy.h"

AEnemyController::AEnemyController() {

	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AISightAngle;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemyController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	AEnemy * Myself = Cast<AEnemy>(GetPawn());
	if(Target != nullptr)
	{
		if (!Myself->Dead) {
			MoveToActor(Target, 500.0f);
			Myself->StartShooting();
			if (Target->Dead) {
				Myself->StopShooting();
				Target = nullptr;
			}
		}
	}
	else
	{
		AssingNewTarget();
	}


	int x = TargetList.Num();
	UE_LOG(LogTemp, Warning, TEXT("%d"), x);
}

void AEnemyController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
}

FRotator AEnemyController::GetControlRotation() const
{
	if (GetPawn() == nullptr) {

		return FRotator(0.0f, 0.0f, 0.0f);
	}
	else {
		return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
	}
	return FRotator();
}

void AEnemyController::AssingNewTarget()
{
	for (size_t i = 0; i < TargetList.Num(); i++)
	{
		if (!TargetList[i]->Dead)
			Target = TargetList[i];
	}
}

void AEnemyController::OnPawnDetected(const TArray<AActor*> &DetectedPawns)
{
	if (DetectedPawns.Num() > 0)
	{
		for (size_t i = 0; i < DetectedPawns.Num(); i++)
		{
			AUnreal2TPCharacter * MyCharacter = Cast<AUnreal2TPCharacter>(DetectedPawns[i]);
			if (MyCharacter != nullptr) 
			{
				if (!MyCharacter->Dead) 
				{
					TargetList.AddUnique(Cast<AUnreal2TPCharacter>(DetectedPawns[i]));
				}				
			}
		}
	}
}

