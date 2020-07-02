// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Unreal2TPCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"


UCLASS()
class UNREAL2TP_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* BulletSpawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class AUnreal2TPCharacter* Target;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UAudioComponent* FireSound;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UAudioComponent* DamageSound;

	UPROPERTY(EditAnywhere, Category = "Shooting")
		TSubclassOf<class ABullet> BulletClass;

	UPROPERTY(Replicated, VisibleAnywhere)
	float Life;

	int SpawnsLeft;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Hitting;

	UFUNCTION(Server, Reliable)
		void Server_StartShooting();

	UFUNCTION(Server, Reliable)
		void Server_StopShooting();

	UFUNCTION(Server, Reliable)
		void Server_Aim();

	UFUNCTION(Server, Reliable)
		void Server_Unaim();

	void StartShooting();
	void StopShooting();
	void Aim();
	void Unaim();
	void Shoot();
	
	float fireRate;
	float HittingTime;
	bool Dead;
	void RecieveDamage(const float damage);

	float FiringTime;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Triggering;

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool Ready;


	TArray<AUnreal2TPCharacter*> TargetList;

	void AssingNewTarget();

	UPROPERTY(EditAnywhere, Category = "Firing")
		float FireRate;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Aiming;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Shooting;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
