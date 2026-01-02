#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "CastlePlayerCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class LABASSIGNMENT5_API ACastlePlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACastlePlayerCharacter();

protected:
	virtual void BeginPlay() override;

	// Input bindings
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void JumpOrStopJumping(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere)
	UInputMappingContext* GameplayIMC;

	UPROPERTY(EditAnywhere)
	UInputAction* MoveIA;

	UPROPERTY(EditAnywhere)
	UInputAction* LookIA;

	UPROPERTY(EditAnywhere)
	UInputAction* JumpIA;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraSpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Collision handle
	UFUNCTION()
	void OnPlayerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
};
