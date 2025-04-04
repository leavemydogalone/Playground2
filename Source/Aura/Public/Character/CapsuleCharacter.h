// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "CapsuleCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

/**
 * 
 */
UCLASS()
class AURA_API ACapsuleCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	ACapsuleCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> TopDownCameraComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	virtual void InitAbilityActorInfo() override;
};
