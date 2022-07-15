// Fill out your copyright notice in the Description page of Project Settings.


#include "NewBullet.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "HealthComponent.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "MyAIEnemyCharacter.h"

// Sets default values
ANewBullet::ANewBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

//	Laser = CreateDefaultSubobject< UParticleSystem>(TEXT("Laser"));

	Speed = 4000;
	MinDamage = 20;
	MaxDamage = 30;
	PlayerSide = false;
	MyOwner = nullptr;

	FBulletStruct bulstr = FBulletStruct();


	LastHitLocation = FVector::ZeroVector;
	DetectedActor = nullptr;

//	MyBulletStruct = &bulstr;

//	MyBulletStruct->LastHitLocation = FVector(0);
//	MyBulletStruct->MyDetectedActor = nullptr;
	//MyCombatSide = ECombatSide::ECS_Other;
}

// Called when the game starts or when spawned
void ANewBullet::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
		{
			DestoryOrDisable(false);
		}, 7, false);


//	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DestoryParticle, GetActorLocation(), FRotator::ZeroRotator, );
}

// Called every frame
void ANewBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	currentLocation += GetActorForwardVector() * DeltaTime * Speed;

	SetActorLocation(currentLocation);




	FCollisionQueryParams QueryParams;
	if(MyOwner != nullptr)
		QueryParams.AddIgnoredActor(MyOwner);
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnPhysicalMaterial = true;

	FHitResult Hit;

	FVector EndRay = currentLocation + GetActorForwardVector() * DeltaTime * Speed * 60;

	if (GetWorld()->LineTraceSingleByChannel(Hit, GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 500, ECollisionChannel::ECC_EngineTraceChannel2, QueryParams)) {
//		DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 500,
//			FColor::Green, false, -1, 0, 1);

		if (DetectedActor && DetectedActor != Hit.GetActor()) {
			TakeDamageToDetectedActor();
			LastHitLocation = Hit.ImpactPoint;
		}
		else
		{
			LastHitLocation = Hit.ImpactPoint;
			DetectedActor = Hit.GetActor();
		}
	}
	else
	{
//		DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 500,
//			FColor::Red, false, -1, 0, 10);
		if (DetectedActor) {
			TakeDamageToDetectedActor();
		}
	}
}
void ANewBullet::TakeDamageToDetectedActor() {

	if (DetectedActor != nullptr) {
		UHealthComponent* HealthComp = DetectedActor->FindComponentByClass<UHealthComponent>();// ->SubstractHealth(20);

		if (HealthComp) {
			UE_LOG(LogTemp, Warning, TEXT("HealthComp 1"));

			if (PlayerSide && HealthComp->MyCombatSide == ECombatSide::ECS_Player)
				goto End;
			if (!PlayerSide && HealthComp->MyCombatSide == ECombatSide::ECS_Enemy)
				goto End;

			UE_LOG(LogTemp, Warning, TEXT("HealthComp 2"));

			HealthComp->SubstractHealth(FMath::FRandRange(MinDamage, MaxDamage), MyOwner);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No HealthComp"));
		}
	}
End:
	DestoryOrDisable(true);
}
void ANewBullet::DestoryOrDisable(bool useParticles) {
	if(useParticles)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DestoryParticle, LastHitLocation, FRotator::ZeroRotator);
	Destroy();
}

