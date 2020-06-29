// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL2TP_API AEnemyController : public AAIController
{
	GENERATED_BODY()

public:

		AEnemyController();

		virtual void BeginPlay() override;

		virtual void Tick(float DeltaSeconds) override;

		virtual void OnPossess(APawn * InPawn) override;

		virtual FRotator GetControlRotation() const override;

		UFUNCTION()
			void OnPawnDetected(const TArray<AActor*> &DetectedPawns);

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			float AISightRadius = 2500;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			float AISightAge = 5;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			float AILoseSightRadius = AISightRadius + 5;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			float AISightAngle = 90;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			class UAISenseConfig_Sight * SightConfig;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
			bool bIsPlayerDetected = false;



};
