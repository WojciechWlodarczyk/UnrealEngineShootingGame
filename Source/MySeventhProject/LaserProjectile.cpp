
#include "LaserProjectile.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "HealthComponent.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "MyAIEnemyCharacter.h"

ALaserProjectile::ALaserProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	Speed = 4000;
	MinDamage = 20;
	MaxDamage = 30;
	PlayerSide = false;
	MyOwner = nullptr;

	FBulletStruct bulstr = FBulletStruct();

	LastHitLocation = FVector::ZeroVector;
	DetectedActor = nullptr;
}

void ALaserProjectile::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
		{
			DestoryOrDisable(false);
		}, 7, false);
}

void ALaserProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	currentLocation += GetActorForwardVector() * DeltaTime * Speed;
	SetActorLocation(currentLocation);
	FCollisionQueryParams QueryParams;

	if (MyOwner != nullptr)
		QueryParams.AddIgnoredActor(MyOwner);

	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnPhysicalMaterial = true;

	FHitResult Hit;
	FVector EndRay = currentLocation + GetActorForwardVector() * DeltaTime * Speed * 60;

	if (GetWorld()->LineTraceSingleByChannel(Hit, GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 500, ECollisionChannel::ECC_EngineTraceChannel2, QueryParams)) {

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
		if (DetectedActor) {
			TakeDamageToDetectedActor();
		}
	}
}

void ALaserProjectile::TakeDamageToDetectedActor() {

	if (DetectedActor != nullptr) {
		UHealthComponent* HealthComp = DetectedActor->FindComponentByClass<UHealthComponent>();

		if (HealthComp) {
			UE_LOG(LogTemp, Warning, TEXT("HealthComp 1"));

			if (PlayerSide && HealthComp->MyCombatSide == ECombatSide::ECS_PlayerSide)
				goto End;
			if (!PlayerSide && HealthComp->MyCombatSide == ECombatSide::ECS_EnemySide)
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

void ALaserProjectile::DestoryOrDisable(bool useParticles) {
	if (useParticles)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DestoryParticle, LastHitLocation, FRotator::ZeroRotator);
	Destroy();
}

