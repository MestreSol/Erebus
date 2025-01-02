// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerSaveData.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSave.generated.h"

/**
 * 
 */
UCLASS()
class EREBUS_API UPlayerSave : public USaveGame
{
	GENERATED_BODY()
public:
	FPlayerSaveData PlayerData;
};
