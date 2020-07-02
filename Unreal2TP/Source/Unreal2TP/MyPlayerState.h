// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL2TP_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AMyPlayerState();
	int SpawnsLeft = 3;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Points = 0;

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool Dead = false;


	virtual void Tick(float DeltaSeconds) override;
};
