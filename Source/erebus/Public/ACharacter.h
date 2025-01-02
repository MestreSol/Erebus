// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterClass.h"
#include "GameFramework/Actor.h"
#include "ACharacter.generated.h"

UCLASS()
class EREBUS_API AACharacter : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AACharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	int32 Level;

	FCharacterClass CharacterClass;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
