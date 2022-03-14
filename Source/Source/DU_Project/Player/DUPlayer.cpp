// Fill out your copyright notice in the Description page of Project Settings.


#include "DU_Project/Player//DUPlayer.h"

// Sets default values
ADUPlayer::ADUPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
 
}

// Called when the game starts or when spawned
void ADUPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADUPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADUPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

