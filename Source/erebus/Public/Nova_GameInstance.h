// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Nova_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class EREBUS_API UNova_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UNova_GameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init() override;

	UFUNCTION(BlueprintCallable, Category="GameInstance")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category="GameInstance")
	void LoadGame();
};
