// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWeapon.h"
#include "Components/StaticMeshComponent.h"
#include "NewBullet.h"

// Sets default values
APlayerWeapon::APlayerWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	MyStaticMesh->SetupAttachment(GetRootComponent());

	dispersion = 0;
}

// Called when the game starts or when spawned
void APlayerWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FTransform APlayerWeapon::RightHandTransform() {
	return MyStaticMesh->GetSocketTransform("RightHandIK");
}

FTransform APlayerWeapon::LeftHandTransform() {
	return MyStaticMesh->GetSocketTransform("LeftHandIK");
}

void APlayerWeapon::Fire(FVector target) {
	FVector SpawnPos = MyStaticMesh->GetSocketLocation("Fire");
	FVector Direction = target - SpawnPos;


	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	auto newLaser = GetWorld()->SpawnActor<ANewBullet>(Laser, SpawnPos, Direction.Rotation() + FRotator(FMath::RandRange(-dispersion, dispersion), FMath::RandRange(-dispersion, dispersion), FMath::RandRange(-dispersion, dispersion)), SpawnParams);
	newLaser->MyOwner = Cast<APawn>(GetOwner());



	UE_LOG(LogTemp, Warning, TEXT("Fire"));
}
