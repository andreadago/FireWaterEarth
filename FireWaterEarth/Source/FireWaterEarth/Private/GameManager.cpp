// Fill out your copyright notice in the Description page of Project Settings.

#include "FireWaterEarth.h"
#include "Element.h"
#include "GameManager.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}


// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	
}


void AGameManager::WhoWins(AElement* PlayerElement, AElement* AIElement)
{

}


//Generate a random number [0,2]
int32 AGameManager::GenerateElementIndex()
{
	return FMath::Rand() % 3;
}