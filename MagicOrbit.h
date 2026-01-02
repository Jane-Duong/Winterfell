// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagicOrbit.generated.h"

UCLASS()
class LABASSIGNMENT5_API AMagicOrbit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagicOrbit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// StaticMesh displays in Level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* OrbMesh; 

	// Movement Parameter 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta=(ClampMin="0.0", ClampMax="1000.0")) 
	float MoveSpeed; // how fast or slow does the orbit rotate

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta=(ClampMin="0.0", ClampMax="2000.0"))
	float Radius; // radius of a circle

	FVector OriginLocation; 

	float CurrentAngle; // checking angle for sin/cos movement

	bool bIsMasterOrbit; 

	UPROPERTY(EditAnywhere)
	float SpawnInterval; 

	UPROPERTY(EditAnywhere)
	float MinSpawnDistance; 

	UPROPERTY(EditAnywhere)
	float MaxSpawnDistance; 

	UPROPERTY(EditAnywhere)
	int32 MaxSpawnedOrbits; 

	TArray<AMagicOrbit*> SpawnedOrbits; //track little orbit

	FTimerHandle SpawnTimerHandle; //timer for spawn 

	void HandleSpawnTimer(); 
	void SpawnOrbit(); 
	void DestroyRamdomOrbit(); 
	void ShowDebugMessage(const FString& Message); 

	bool bSpawningPhase = true; 


	static AMagicOrbit* MasterOrbInstance;



};
