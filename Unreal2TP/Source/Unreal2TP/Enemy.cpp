// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "CharacterAnimInstance.h"
#include "Net/UnrealNetwork.h"
// Sets default values
AEnemy::AEnemy()
{
	
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	dead = false;
	life = 100;
}
void AEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AEnemy, life);

}
// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(life <= 0)
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Dead = true;
}

void AEnemy::RecieveDamage(const float damage)
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer) {
		life -= damage;
		UE_LOG(LogTemp, Warning, TEXT("%f") , life);
	}
		
}
// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

