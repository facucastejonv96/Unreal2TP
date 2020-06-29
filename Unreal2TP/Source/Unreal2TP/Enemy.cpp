// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Bullet.h"
#include "CharacterAnimInstance.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values
AEnemy::AEnemy()
{

	FireSound = CreateDefaultSubobject<UAudioComponent>(TEXT("FireSound"));

	DamageSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Damage"));

	BulletSpawn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletSpawn"));
	BulletSpawn->SetupAttachment(Mesh);
	
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Dead = false;
	Life = 100;
	FiringTime = 2;
	FireRate = 0.25f;
	//GetCharacterMovement()->bOrientRotationToMovement = true;
	//GetCharacterMovement()->RotationRate = FRotator (0,0,0);
}
void AEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AEnemy, Life);
	DOREPLIFETIME(AEnemy, Shooting);
	DOREPLIFETIME(AEnemy, Aiming);
	DOREPLIFETIME(AEnemy, Triggering);
	DOREPLIFETIME(AEnemy, Hitting);
	DOREPLIFETIME(AEnemy, Ready);

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
	if (Life <= 0) {
		Dead = true;
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Dead = true;
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Shooting = false;
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Hit = false;
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Aiming = false;
	}
	if (!Dead) {
		if (Shooting) {
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Shooting = true;
		}
		else {
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Shooting = false;
		}
		if (GetMovementComponent()->Velocity == FVector(0, 0, 0)) {
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Moving = false;
		}
		else {
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Moving = true;
		}
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Aiming = Aiming;
		FiringTime += GetWorld()->GetDeltaSeconds();

		if (Triggering && Ready && !Hitting) {

			Shoot();
		}
		if (FiringTime > FireRate) {
			Ready = true;
		}

		if (Hitting)
		{
			HittingTime += GetWorld()->GetDeltaSeconds();
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Hit = true;
			if (HittingTime > 0.8f)
			{
				Hitting = false;
			}
		}
		else {
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Hit = false;
			HittingTime = 0;
		}
	}
}

void AEnemy::Shoot()
{
	FireSound->Stop();
		FireSound->Play();
	//Animator->Firing = true;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.bNoFail = true;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;

	FTransform BulletSpawnTransform;
	//BulletSpawnTransform.SetLocation(GetActorForwardVector() * 200.f + GetActorLocation());
	//BulletSpawnTransform.SetRotation(GetActorRotation().Quaternion());
	BulletSpawnTransform.SetLocation(BulletSpawn->GetComponentLocation());
	BulletSpawnTransform.SetRotation(BulletSpawn->GetComponentRotation().Quaternion());
	BulletSpawnTransform.SetScale3D(FVector(1.f));
	ABullet* b;
	b = GetWorld()->SpawnActor<ABullet>(BulletClass, BulletSpawnTransform, SpawnParams);
	b->MyOwner = this;

	FiringTime = 0;
	Ready = false;
}

void AEnemy::RecieveDamage(const float damage)
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer) {
		Life -= damage;
		if (Life > 0) {
			UE_LOG(LogTemp, Warning, TEXT("Hitea"));
			Hitting = false;
			DamageSound->Stop();
				DamageSound->Play();
			Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Hit = false;
			HittingTime = 0;
			Hitting = true;
		}
	}		
}

void AEnemy::Server_StartShooting_Implementation() {

	Triggering = true;
	Shooting = true;
}
void AEnemy::Server_StopShooting_Implementation() {

	Triggering = false;
	Shooting = false;
}

void AEnemy::StartShooting() {
	Server_StartShooting();
}
void AEnemy::StopShooting() {
	Server_StopShooting();
}

void AEnemy::Server_Aim_Implementation() {

	Aiming = true;
}

void AEnemy::Server_Unaim_Implementation() {

	Aiming = false;
}

void AEnemy::Aim()
{
	Server_Aim();
}
void AEnemy::Unaim() {
	Server_Unaim();
}

void AEnemy::AssingNewTarget()
{
	for (size_t i = 0; i < TargetList.Num(); i++)
	{
		if (!TargetList[i]->Dead)
			Target = TargetList[i];
	}
}
// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

