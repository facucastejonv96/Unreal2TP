// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL2TP_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AMyPlayerController();

		virtual void Tick(float DeltaSeconds) override;

		class AMyPlayerState* PS;

		class AUnreal2TPCharacter* MyCharacter;

		UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly)
		bool IsRespawning = false;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly)
			bool Lost = false;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly)
		float TimeToRespawn = 5;

		void RespawnCharacter();

		UPROPERTY(EditAnywhere, Category = "Character")
			TSubclassOf<class AUnreal2TPCharacter> CharacterClass;
};
