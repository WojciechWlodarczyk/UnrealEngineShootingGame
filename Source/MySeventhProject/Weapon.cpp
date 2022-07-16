#include "Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "LaserProjectile.h"


AWeapon::AWeapon()
{
	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	MyStaticMesh->SetupAttachment(GetRootComponent());

	Dispersion = 0;
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

FTransform AWeapon::RightHandTransform() {
	return MyStaticMesh->GetSocketTransform("RightHandIK");
}

FTransform AWeapon::LeftHandTransform() {
	return MyStaticMesh->GetSocketTransform("LeftHandIK");
}

void AWeapon::Fire(FVector target) {
	FVector SpawnPos = MyStaticMesh->GetSocketLocation("Fire");
	FVector Direction = target - SpawnPos;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	auto newLaser = GetWorld()->SpawnActor<ALaserProjectile>(Laser, SpawnPos, Direction.Rotation() +
		FRotator(FMath::RandRange(-Dispersion, Dispersion), FMath::RandRange(-Dispersion, Dispersion), FMath::RandRange(-Dispersion, Dispersion))
		, SpawnParams);
	newLaser->MyOwner = Cast<APawn>(GetOwner());
}
