// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Element.generated.h"

/*
	Class from which Water, Fire and Earth inherit
*/

UCLASS()
class FIREWATEREARTH_API AElement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElement();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Animation")
	// Virtual function which animate a win if IsWin, otherwise a loss
	virtual void Animate(bool IsWin);
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	// Particle system component of the element
	UParticleSystemComponent* ElementParticle = nullptr;

};
