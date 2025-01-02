#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSaveData.generated.h"

USTRUCT(BlueprintType)
struct EREBUS_API FPlayerSaveData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 PlayerXP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 HealthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Inteligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Strenght;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Dexterity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Luck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Player Atribut")
	int32 Sanity;

	FPlayerSaveData()
	{
		PlayerName = "Player";
		PlayerLevel = 1;
		PlayerXP = 0;
		Health = 100;
		HealthMax = 100;
		Inteligence = 10;
		Strenght = 10;
		Dexterity = 10;
		Luck = 10;
		Sanity = 100;
	}
};
