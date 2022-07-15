// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGrenade.h"
#include "Engine/StaticMesh.h"

// Sets default values
AMyGrenade::AMyGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	MyStaticMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AMyGrenade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

