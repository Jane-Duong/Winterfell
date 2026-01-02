// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlyingTrap.generated.h"

UCLASS(Blueprintable)
class LABASSIGNMENT5_API AFlyingTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlyingTrap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TrapMesh; 

	FVector StartLocation; 

	float TimeCounter; 

	UPROPERTY(EditAnywhere)
	float MoveSpeed; 

	UPROPERTY(EditAnywhere) 
	float AmplitudeZ; 

	UPROPERTY(EditAnywhere)
	float AmplitudeY; 

	UPROPERTY(EditAnywhere)
	float Frequency; 


};
