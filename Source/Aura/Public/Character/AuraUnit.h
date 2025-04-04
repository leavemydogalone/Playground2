// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AbilitySystem/Data/CharacterClassInfo.h"
#include "Interaction/CombatInterface.h"
#include "AuraUnit.generated.h"

class UBehaviorTree;
class AAuraAIController;

/**
 * 
 */
UCLASS()
class AURA_API AAuraUnit : public AAuraCharacterBase
{
	GENERATED_BODY()
	
public:

	AAuraUnit();

	virtual void PossessedBy(AController* NewController) override;

	//// Combat interface
	//virtual void HighlightActor() override;
	//virtual void UnHighlightActor() override;
	//// end Combat interface


protected:

	virtual void BeginPlay() override;

	virtual void InitAbilityActorInfo() override;

	virtual void InitializeDefaultAttributes() const override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	//ECharacterClass CharacterClass = ECharacterClass::Warrior;

	UPROPERTY(EditAnywhere, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY()
	TObjectPtr<AAuraAIController> AuraAIController;
};
