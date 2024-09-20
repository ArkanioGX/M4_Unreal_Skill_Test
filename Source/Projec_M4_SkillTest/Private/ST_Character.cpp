// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_Character.h"

// Sets default values
AST_Character::AST_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AST_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AST_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AST_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

