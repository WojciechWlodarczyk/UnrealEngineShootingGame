// Fill out your copyright notice in the Description page of Project Settings.


#include "MedicalKit.h"		
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "MySeventhProject.h"
#include "MyPlayer.h"

// Sets default values
AMedicalKit::AMedicalKit()
{
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	MyMesh->SetupAttachment(GetRootComponent());

	MySphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger sphere"));
	MySphereTrigger->InitSphereRadius(260.0f);;
	MySphereTrigger->SetCollisionProfileName(TEXT("Trigger"));
	MySphereTrigger->SetupAttachment(GetRootComponent());
	MySphereTrigger->SetRelativeLocation(FVector(0, 0, 0));

	MySphereTrigger->OnComponentBeginOverlap.AddDynamic(this, &AMedicalKit::OnOverlapBegin);

	Healing = 40;
}

// Called when the game starts or when spawned
void AMedicalKit::BeginPlay()
{
	MySphereTrigger->SetRelativeLocation(FVector(0, 0, 0));
	Super::BeginPlay();
	
}

// Called every frame
void AMedicalKit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMedicalKit::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor)
		return;
	AMyPlayer* Player = Cast<AMyPlayer>(OtherActor);
	if (!Player)
		return;

	Player->AddHealth(Healing);

	Destroy();
}
