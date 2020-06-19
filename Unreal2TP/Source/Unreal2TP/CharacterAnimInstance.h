// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL2TP_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
		bool Moving;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
		bool Aiming;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
		bool Shooting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
		bool Dead;
	
};
