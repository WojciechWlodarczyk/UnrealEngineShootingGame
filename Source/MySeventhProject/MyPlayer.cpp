
#include "MyPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Weapon.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "HealthComponent.h"
#include "MyGrenade.h"
#include "BeingDetectableComponent.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SetupAttachment(RootComponent);
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArm);
	CameraComp->bUsePawnControlRotation = true;
	CameraComp->SetUseFieldOfViewForLOD(false);
	GetCharacterMovement()->AirControl = 0.75f;
	MySkeletalMesh = GetMesh();
	MyHealthComponent = CreateDefaultSubobject < UHealthComponent>(TEXT("HealthComp"));
	MyHealthComponent->Death.AddDynamic(this, &AMyPlayer::MyDeath);
	MyHealthComponent->HitEvent.AddDynamic(this, &AMyPlayer::OnHit);
	MyHealthComponent->MyCombatSide = ECombatSide::ECS_PlayerSide;
	MyDetectableComponent = CreateDefaultSubobject<UBeingDetectableComponent>(TEXT("DetactableComp"));
	PlayerPositions.Init(FVector(0), 0);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	forward = 0;
	right = 0;
	IsJumping = false;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(myWeaponPrefab, MySkeletalMesh->GetSocketLocation("spine_01Socket"), GetActorRightVector().Rotation(), SpawnParams);
	SocketStartPos = GetTransform().InverseTransformPosition(MySkeletalMesh->GetSocketLocation("UpperArm_RSocket"));

	CurrentWeapon->SetActorRelativeScale3D(FVector(0.07f));
	if (CurrentWeapon) {
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(MySkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "spine_01Socket");
		CurrentWeapon->SetActorRelativeLocation(FVector(0));
		CurrentWeapon->SetActorRotation(GetActorRightVector().Rotation());
	}
	run = false;
	CameraYTarget = 25;

	IsDead = false;

	GetWorldTimerManager().SetTimer(SavingPositionTimer, this, &AMyPlayer::SavePosition, 2.f, true, 0.f);

	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	PlayerController->PlayerCameraManager->ViewPitchMin = -52.0;
	PlayerController->PlayerCameraManager->ViewPitchMax = 45;
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsDead)
		return;
	else {

	}

	float FinalPitch = 0;
	float ControlerPitch = GetController()->GetControlRotation().Pitch;
	if (ControlerPitch < 180) {
		FinalPitch = ControlerPitch;
 }
	else {
		FinalPitch = -(360 - ControlerPitch);
	}
	

	IsJumping = false;


	CurrentWeapon->SetActorRotation(GetActorRightVector().Rotation() + FRotator(0, 0, FinalPitch));

	FVector addVector = FVector(0, 0, 0);


	float TargetFOV = IsZooming ? 50 : 90;
	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, 12);
	CameraComp->SetFieldOfView(NewFOV);


	float CurrentYRelCam = CameraComp->GetRelativeLocation().Y;
	CurrentYRelCam = FMath::Lerp(CurrentYRelCam, CameraYTarget, DeltaTime * 6);

	CameraComp->SetRelativeLocation(FVector(12.397949f, CurrentYRelCam, 8));
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &AMyPlayer::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AMyPlayer::MoveVertical);

	PlayerInputComponent->BindAxis("MouseY", this, &AMyPlayer::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("MouseX", this, &AMyPlayer::AddControllerYawInput);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AMyPlayer::StartRun);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AMyPlayer::StopRun);

	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &AMyPlayer::StartZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &AMyPlayer::StopZoom);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyPlayer::Fire);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayer::StartJumping);

	PlayerInputComponent->BindAction("Q", IE_Pressed, this, &AMyPlayer::ThrowGrenade);

	PlayerInputComponent->BindAction("CameraSwitch", IE_Pressed, this, &AMyPlayer::CameraSwitch);//CameraSwitch
}
void AMyPlayer::MoveHorizontal(float Value)
{
	if (IsDead)
		return;

	float TagerSpped = run ? 100 : 50;

	if (right < Value * TagerSpped) {
		right += UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * TagerSpped * 2;
		if (right > Value * TagerSpped)
			right = Value * TagerSpped;
	}
	else if (right > Value * TagerSpped) {
		right -= UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * TagerSpped * 2;
		if (right < Value * TagerSpped)
			right = Value * TagerSpped;
	}

	AddMovementInput(GetActorRightVector() * right / 200);

}
void AMyPlayer::MoveVertical(float Value)
{
	if (IsDead)
		return;

	float TagerSpped = run ? 100 : 50;

	if (forward < Value * TagerSpped) {
		forward += UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * TagerSpped * 2;
		if (forward > Value * TagerSpped)
			forward = Value * TagerSpped;
	}
	else if (forward > Value * TagerSpped) {
		forward -= UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * TagerSpped * 2;
		if (forward < Value * TagerSpped)
			forward = Value * TagerSpped;
	}

	AddMovementInput(GetActorForwardVector() * forward / 200);
}

FVector AMyPlayer::GetLeftHandLoactionFromMesh()
{
	return MySkeletalMesh->GetSocketLocation("hand_rSocket");
}

FTransform AMyPlayer::GetRightHandIKTransform() {

	FRotator NewRotator = FRotator(0);
	FVector NewVector = FVector(0, 60, 0);

	FVector RighHandWeaponPlacement = CurrentWeapon->RightHandTransform().GetLocation();
	FVector CurrentHandRotation = MySkeletalMesh->GetSocketLocation("hand_rSocket");

	NewRotator = CurrentWeapon->RightHandTransform().GetRotation().Rotator();
	NewVector = RighHandWeaponPlacement;

	return FTransform(NewRotator, NewVector);
}

FTransform AMyPlayer::GetLeftHandIKTransform() {

	FRotator NewRotator = FRotator(0);
	FVector NewVector = FVector(0, 60, 0);

	FVector LeftHandWeaponPlacement = CurrentWeapon->LeftHandTransform().GetLocation();
	FVector CurrentHandRotation = MySkeletalMesh->GetSocketLocation("hand_lSocket");

	NewRotator = CurrentWeapon->LeftHandTransform().GetRotation().Rotator();
	NewVector = LeftHandWeaponPlacement;

	return FTransform(NewRotator, NewVector);
}

void AMyPlayer::StartRun() {
	run = true;
}

void AMyPlayer::StopRun() {
	run = false;
}

void AMyPlayer::StartZoom() {
	IsZooming = true;
}

void AMyPlayer::StopZoom() {
	IsZooming = false;
}

void AMyPlayer::Fire() {
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;

	FHitResult Hit;
	FVector StartVector = CameraComp->GetComponentLocation();
	FVector EndVector = StartVector + CameraComp->GetForwardVector() * 10000;

	if (GetWorld()->LineTraceSingleByChannel(Hit, StartVector, EndVector, ECollisionChannel::ECC_EngineTraceChannel1, QueryParams)) {
		CurrentWeapon->Fire(Hit.Location);
	}
	else {
		CurrentWeapon->Fire(EndVector);
	}
}
void AMyPlayer::StartJumping() {
	IsJumping = true;
	Jump();
}
void AMyPlayer::MyDeath() {
	IsDead = true;
	GetController()->StopMovement();
	GetController()->SetIgnoreLookInput(true);
	UE_LOG(LogTemp, Warning, TEXT("Player is dead!"));

	FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([&]
		{
			Respawn();
		});

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 5, false);
}

void AMyPlayer::OnHit(int CurrentHealth, APawn* FromPawn) {
	UE_LOG(LogTemp, Warning, TEXT("Player currentHealth: %d"), CurrentHealth);
}

float AMyPlayer::CurrentHealth() {
	if (MyHealthComponent) {
		return MyHealthComponent->CurrentHealthPercent();
	}
	else
		return 1;
}

void AMyPlayer::CameraSwitch() {
	if (CameraYTarget > 0) {
		CameraYTarget = -25;
	}else{
		CameraYTarget = 25;
	}
}

void AMyPlayer::ThrowGrenade() {
	FVector SpawnPos = MySkeletalMesh->GetSocketLocation("spine_03Socket");
	FActorSpawnParameters Params = FActorSpawnParameters();
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AMyGrenade* NewGrenade = GetWorld()->SpawnActor<AMyGrenade>(MyGrenade, SpawnPos, FRotator(0), Params);
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	FHitResult Hit;
	FVector StartVector = CameraComp->GetComponentLocation();
	FVector EndVector = StartVector + CameraComp->GetForwardVector() * 1000;
	if (GetWorld()->LineTraceSingleByChannel(Hit, StartVector, EndVector, ECollisionChannel::ECC_EngineTraceChannel1, QueryParams)) {
		EndVector = Hit.Location;
	}
	NewGrenade->MyStaticMesh->AddForce(CameraComp->GetForwardVector() * 200000 + CameraComp->GetUpVector() * 50000);
}

void AMyPlayer::AddHealth(int amount) {
	MyHealthComponent->AddHealth(amount);
}

void AMyPlayer::Respawn() {
	IsDead = false;
	GetController()->SetIgnoreLookInput(false);
	MyHealthComponent->Respawn();

	SetActorLocation(FindLastPosition(3000));
}

void AMyPlayer::SavePosition() {
	FVector currentLocation = GetActorLocation();
	if (PlayerPositions.Num() == 0) {
		PlayerPositions.Add(currentLocation);
		return;
	}

	if (FVector::Distance(currentLocation, PlayerPositions.Last()) > 200) {
		PlayerPositions.Add(currentLocation);
		
		while (PlayerPositions.Num() > 100)
			PlayerPositions.RemoveAt(0);
	}
}

FVector AMyPlayer::FindLastPosition(float Dystance) {
	FVector currentLocation = GetActorLocation();
	for (int i = PlayerPositions.Num() - 1; i >= 0; i--)
	{
		if (FVector::Distance(currentLocation, PlayerPositions[i]) > Dystance) {
			return PlayerPositions[i];
		}
	}
	return PlayerPositions[0];
}