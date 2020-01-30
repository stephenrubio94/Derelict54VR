// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacterBase.h"

// Sets default values
AFPCharacterBase::AFPCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

