// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

class AElement;

UCLASS()
class FIREWATEREARTH_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//UFUNCTION(BlueprintCallable, Category = "Custom")
	//void SpawnElement(FVector Location, FRotator Rotation = FRotator(0, 0, 0));

	UFUNCTION(BlueprintCallable, Category = "Custom")
	int32 GenerateElementIndex();

	UFUNCTION(BlueprintCallable, Category = "Custom")
	void WhoWins(AElement* PlayerElement, AElement* AIElement);

private:
	TSubclassOf<class AElement> ElementBlueprint;

	TArray<AElement*> ElementsInArena[2];
	
	int RandomNumber;

	
};
