#pragma once

#include "CoreMinimal.h"
#include "CharacterClass.generated.h"

USTRUCT(BlueprintType)
struct FCharacterClass
{

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ClassName;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Strength;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Dexterity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Intelligence;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Luck;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Health;

	FCharacterClass():
		ClassName("Default"),
		Strength(10),
		Dexterity(10),
		Intelligence(10),
		Luck(10),
		Health(100)
	{

	}
};