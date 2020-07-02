// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Unreal2TPGameMode.generated.h"

UCLASS(minimalapi)
class AUnreal2TPGameMode : public AGameModeBase
{
	
	GENERATED_BODY()

public:
	AUnreal2TPGameMode();


	UPROPERTY(EditAnywhere, Category = "Classes")
		TSubclassOf<class AEnemy> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		int EnemyAmount;

	void SpawnEnemy();
	void RespawnPlayer();
	
};



