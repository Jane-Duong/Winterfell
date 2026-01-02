// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CastleAnimInstance.generated.h"

class ACastlePlayerCharacter; 
class UCharacterMovementComponent; 
/**
 * 
 */
UCLASS()
class LABASSIGNMENT5_API UCastleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public: 
	virtual void NativeInitializeAnimation() override; 
	virtual void NativeUpdateAnimation(float DeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly) 
	ACastlePlayerCharacter* OwningCharacter;

	UPROPERTY(BlueprintReadOnly) 
	UCharacterMovementComponent* CharacterMovementComp;

	UPROPERTY(BlueprintReadOnly) 
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly) 
	float CharacterDirection;

	UPROPERTY(BlueprintReadOnly) 
	bool bIsFalling;

	UPROPERTY(BlueprintReadOnly) 
	bool bJustLanded;
};
