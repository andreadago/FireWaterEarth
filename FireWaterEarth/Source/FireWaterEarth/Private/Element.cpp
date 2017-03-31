// Fill out your copyright notice in the Description page of Project Settings.

#include "FireWaterEarth.h"
#include "Element.h"


// Sets default values
AElement::AElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create Mesh Component and set it as root 
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	SetRootComponent(MeshComponent);

	//Create Particle System component and attach it to root component
	ElementParticle = CreateDefaultSubobject<UParticleSystemComponent>(FName("Element Particle"));
	ElementParticle->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AElement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElement::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AElement::Animate(bool IsWin)
{
	// To be overridden by inherited classes
}