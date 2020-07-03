// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SpawnPoint.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL2TP_API AMyGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AMyGameState();

	class AUnreal2TPGameMode* GameMode;

	UPROPERTY(Replicated, BlueprintReadWrite)
		int EnemiesLeft = 6;

	UPROPERTY(BlueprintReadWrite)
		float Time = 0;

	virtual void Tick(float DeltaTime) override;

	void OnEnemyDead(bool CanRespawn);
	void SpawnEnemy();

	UPROPERTY(EditAnywhere, Category = "Enemy")
		TSubclassOf<class AEnemy> Enemy;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	TArray<ASpawnPoint*> SpawnPointList;
};
