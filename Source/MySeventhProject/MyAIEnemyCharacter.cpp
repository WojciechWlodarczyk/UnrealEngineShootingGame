// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIEnemyCharacter.h"
#include "Perception/PawnSensingComponent.h"
#include "NavigationData.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerWeapon.h"
#include "TimerManager.h"
#include "HealthComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"
#include "Components/CapsuleComponent.h"
#include "MyPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "MySeventhProject.h"
#include "AIBehaviour.h"
#include "IdleBehaviour.h"
#include "EnemyManager.h"
#include "FightBehaviour.h"
#include <typeinfo>
#include "MainGameInstance.h"
#include "GoToCommandStationBehaviour.h"
#include <memory>

AMyAIEnemyCharacter::AMyAIEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AMyAIEnemyCharacter::OnPawnSeen);

	MySkeletalMesh = GetMesh();
	MyHealthComponent = CreateDefaultSubobject < UHealthComponent>(TEXT("HealthComp"));
	MyHealthComponent->Death.AddDynamic(this, &AMyAIEnemyCharacter::MyDeath);
	MyHealthComponent->HitEvent.AddDynamic(this, &AMyAIEnemyCharacter::OnHit);
	MyHealthComponent->MyCombatSide = ECombatSide::ECS_Enemy;

	isDead = false;

}

void AMyAIEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	Forward = 0;
	SpawnDefaultController();
	AIController = Cast<AAIController>(GetController());

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<APlayerWeapon>(myWeaponPrefab, MySkeletalMesh->GetSocketLocation("Spine1Socket"), GetActorRightVector().Rotation(), SpawnParams);

	CurrentWeapon->SetActorRelativeScale3D(FVector(0.07f));
	if (CurrentWeapon) {
		CurrentWeapon->SetOwner(this);

		CurrentWeapon->AttachToComponent(MySkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "Spine1Socket");

		CurrentWeapon->SetActorRelativeLocation(FVector(0));

		GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenShooting, this, &AMyAIEnemyCharacter::Shoot, 1.4f, true, FMath::FRandRange(0.5f, 2.00f));
	}
	UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE 1 BeginPlay"));
	/*MyCurrentBehaviour = std::make_shared<GoToCommandStationBehaviour>(GoToCommandStationBehaviour(Cast<AAIController>(GetController()),
	Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->MainEnemyManager->GetCommandPost()
		));*/

	std::unique_ptr<GoToCommandStationBehaviour> MyCurrentBehaviour_2(new GoToCommandStationBehaviour(Cast<AAIController>(GetController()),
		Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->MainEnemyManager->GetCommandPost()
	));

	MyCurrentBehaviour = std::move(MyCurrentBehaviour_2);


	UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE 2 BeginPlay"));

	MyCurrentBehaviour.reset();
	std::unique_ptr<IdleBehaviour> MyCurrentBehaviour_3(new IdleBehaviour(Cast<AAIController>(GetController())));

	MyCurrentBehaviour = std::move(MyCurrentBehaviour_3);




//	IdleBehaviour* currentBehPtr = new IdleBehaviour(Cast<AAIController>(GetController()));
//	MyCurrentBehaviour = std::move(currentBehPtr);



//	MyCurrentBehaviour = std::make_unique<IdleBehaviour>(IdleBehaviour(Cast<AAIController>(GetController())));

//	MyCurrentBehaviour(new IdleBehaviour(Cast<AAIController>(GetController())));

//	int adress = MyCurrentBehaviour.;
	UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE 3 BeginPlay"));
	MyCurrentBehaviour;





}

void AMyAIEnemyCharacter::Tick(float DeltaTime)
{
	if (MyCurrentBehaviour == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE Tick - null"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE Tick - jest"));
	}
	Super::Tick(DeltaTime);

	if (isDead)
		return;

	float FinalPitch = 0;
	float ControlerPitch = GetController()->GetControlRotation().Pitch;
	if (ControlerPitch < 180) {
		FinalPitch = ControlerPitch;//0.6666f;
	}
	else {
		FinalPitch = -(360 - ControlerPitch);//0.6666f;
	}

	CurrentWeapon->SetActorRotation(GetActorRightVector().Rotation() + FRotator(0, 0, FinalPitch));

	if (PawnEnemy == nullptr) {
		if (MyCurrentBehaviour->GetCurrentBehaviourType() != AIBehaviourType::GoToAblicStation && MyCurrentBehaviour->GetCurrentBehaviourType() != AIBehaviourType::Idle) {
			//MyCurrentBehaviour = std::make_unique<IdleBehaviour>(IdleBehaviour(Cast<AAIController>(GetController())));




			std::unique_ptr<IdleBehaviour> MyCurrentBehaviour_2(new IdleBehaviour(Cast<AAIController>(GetController())));

			MyCurrentBehaviour = std::move(MyCurrentBehaviour_2);



		}
	}

	MyCurrentBehaviour->Control(Forward, PawnEnemy);
}

void AMyAIEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyAIEnemyCharacter::OnPawnSeen(APawn* SeenPawn) {
	if (SeenPawn == nullptr)
		return;
	if (SeenPawn->FindComponentByClass<UHealthComponent>()->IsDead) {
		return;
	}

	PawnEnemy = SeenPawn;
	UE_LOG(LogTemp, Warning, TEXT("OnPawnSeen"));
	if (MyCurrentBehaviour->GetCurrentBehaviourType() != AIBehaviourType::Fight) {
	//	MyCurrentBehaviour = std::make_unique<FightBehaviour>(FightBehaviour(SeenPawn, Cast<AAIController>(GetController())));




		std::unique_ptr<FightBehaviour> MyCurrentBehaviour_2(new FightBehaviour(SeenPawn, Cast<AAIController>(GetController())));

		MyCurrentBehaviour = std::move(MyCurrentBehaviour_2);



	}
}

FTransform AMyAIEnemyCharacter::GetRightHandIKTransform() {

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

FTransform AMyAIEnemyCharacter::GetLeftHandIKTransform() {
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
void AMyAIEnemyCharacter::Shoot() {
	if (PawnEnemy == nullptr || isDead)
		return;

	FVector DirectionTowardsEnemy = PawnEnemy->GetActorLocation() - GetActorLocation();
	float com = UKismetMathLibrary::Vector_CosineAngle2D(DirectionTowardsEnemy, GetActorForwardVector());
	FString sss = "Angle ";
	MyPrintTEXTParam("Shoot() angle: %f", com);
	if (UKismetMathLibrary::Vector_CosineAngle2D(DirectionTowardsEnemy, GetActorForwardVector()) > 0.7f) {
		CurrentWeapon->Fire(PawnEnemy->GetActorLocation() + FVector::UpVector * 50);
	}
	else {
		CurrentWeapon->Fire(CurrentWeapon->GetActorLocation() - CurrentWeapon->GetActorRightVector() * 10000);
	}

}
void AMyAIEnemyCharacter::MyDeath() {
	isDead = true;
	AIController->StopMovement();
	UCapsuleComponent* CapComp = GetCapsuleComponent();
	CapComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetWorldTimerManager().PauseTimer(TimerHandle_TimeBetweenShooting);
	CurrentWeapon->Destroy();
	DeathEvent();
}
float AMyAIEnemyCharacter::CurrentHealth() {
	if (MyHealthComponent) {
		return MyHealthComponent->CurrentHealthPercent();
	}
	else
		return 1;
}
void AMyAIEnemyCharacter::DestoryOrDisable() {
	Destroy();
}
void AMyAIEnemyCharacter::OnHit(int CurrentHealth, APawn* FromPawn) {
	if (PawnEnemy == nullptr) {
		if (FromPawn && Cast<AMyPlayer>(FromPawn))
		{
			PawnEnemy = FromPawn;

			if (MyCurrentBehaviour->GetCurrentBehaviourType() != AIBehaviourType::Fight)
			{
				MyPrint("WWWWW OnHit()");
			//	MyCurrentBehaviour = std::make_unique<FightBehaviour>(FightBehaviour(FromPawn, Cast<AAIController>(GetController())));



				std::unique_ptr<FightBehaviour> MyCurrentBehaviour_2(new FightBehaviour(FromPawn, Cast<AAIController>(GetController())));

				MyCurrentBehaviour = std::move(MyCurrentBehaviour_2);
			}
		}
	}
}