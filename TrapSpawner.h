// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrapSpawner.generated.h"


class AFlyingTrap; 

UCLASS(Blueprintable)
class LABASSIGNMENT5_API ATrapSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrapSpawner();

	UPROPERTY() 
	TArray<AFlyingTrap*> SpawnedTraps; // save all traps spawned 

	UFUNCTION(BlueprintCallable, Category="TrapSpawner")
	bool SpawnFlyingTrapAtLocation(FVector Location); 

	UFUNCTION(BlueprintCallable, Category="TrapSpawner")
	bool DestroyTrapByName(const FString& TrapName); 


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
