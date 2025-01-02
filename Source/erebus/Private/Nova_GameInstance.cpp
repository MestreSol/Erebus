// Fill out your copyright notice in the Description page of Project Settings.


#include "Nova_GameInstance.h"

UNova_GameInstance::UNova_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
		
}
void UNova_GameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Warning, TEXT("NOVA: GameInstance Init"));
}
void UNova_GameInstance::StartGame()
{
	UE_LOG(LogTemp, Warning, TEXT("NOVA: Start Game"));
}

void UNova_GameInstance::LoadGame()
{
	UE_LOG(LogTemp, Warning, TEXT("NOVA: Load Game"));
}

