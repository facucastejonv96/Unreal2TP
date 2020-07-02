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

		void RespawnCharacter();

		UPROPERTY(EditAnywhere, Category = "Shooting")
			TSubclassOf<class AUnreal2TPCharacter> CharacterClass;
};
