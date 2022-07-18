
#include "AIAnimationManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapon.h"
#include "AISoldier.h"

UAIAnimationManagerComponent::UAIAnimationManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	bDead = false;
}

void UAIAnimationManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	MyMainManager = GetOwner<AAISoldier>();
	MySkeletalMesh = MyMainManager->GetMesh();

	SpawnWeapon();

}

void UAIAnimationManagerComponent::SpawnWeapon() {
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(myWeaponPrefab, MySkeletalMesh->GetSocketLocation("Spine1Socket"), MyMainManager->GetActorRightVector().Rotation(), SpawnParams);

	CurrentWeapon->SetActorRelativeScale3D(FVector(0.07f));
	CurrentWeapon->SetOwner(MyMainManager);
	CurrentWeapon->AttachToComponent(MySkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "Spine1Socket");
	CurrentWeapon->SetActorRelativeLocation(FVector(0));

		//		GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShooting, this, &AMyAIEnemyCharacter::Shoot, 1.4f, true, FMath::FRandRange(0.5f, 2.00f));
}

FTransform UAIAnimationManagerComponent::GetRightHandIKTransform() {

	FRotator NewRotator = FRotator(0);
	FVector NewVector = FVector(0, 60, 0);
	if (CurrentWeapon) {
		FVector RighHandWeaponPlacement = CurrentWeapon->RightHandTransform().GetLocation();
		FVector CurrentHandRotation = MySkeletalMesh->GetSocketLocation("RightHandSocket");

		NewRotator = CurrentWeapon->RightHandTransform().GetRotation().Rotator();
		NewVector = RighHandWeaponPlacement;
	}
	return FTransform(NewRotator, NewVector);
}

FTransform UAIAnimationManagerComponent::GetLeftHandIKTransform() {
	FRotator NewRotator = FRotator(0);
	FVector NewVector = FVector(0, 60, 0);

	if (CurrentWeapon) {
		FVector LeftHandWeaponPlacement = CurrentWeapon->LeftHandTransform().GetLocation();
		FVector CurrentHandRotation = MySkeletalMesh->GetSocketLocation("LeftHandSocket");

		NewRotator = CurrentWeapon->LeftHandTransform().GetRotation().Rotator();
		NewVector = LeftHandWeaponPlacement;
	}
	return FTransform(NewRotator, NewVector);
}

void UAIAnimationManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

