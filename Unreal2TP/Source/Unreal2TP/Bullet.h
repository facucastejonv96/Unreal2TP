// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class UNREAL2TP_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

	UPROPERTY(EditAnywhere, Category = "Shooting")
	float damage;

	UFUNCTION(NetMulticast, Reliable)
		void NetMulticast_OnHit();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
		class AActor * MyOwner;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UProjectileMovementComponent* BulletMovement;

	UFUNCTION()
		void OnBulletHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	
		
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
