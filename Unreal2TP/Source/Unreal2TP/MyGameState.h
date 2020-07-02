// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
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
		int EnemiesLeft = 1;

	UPROPERTY(BlueprintReadWrite)
		float Time = 0;

	virtual void Tick(float DeltaTime) override;

	void OnEnemyDead();
	void SpawnEnemy();

	UPROPERTY(EditAnywhere, Category = "Enemy")
		TSubclassOf<class AEnemy> Enemy;
};
