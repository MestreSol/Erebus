#pragma once

#include "CoreMinimal.h"
#include "FLobbyData.generated.h"

USTRUCT()
struct FLobbyData
{
	GENERATED_BODY()

	UPROPERTY()
	FString LobbyName;

	UPROPERTY()
	int32 MaxPlayers;

	UPROPERTY()
	bool bIsPublic;

	UPROPERTY()
	TArray<FString> Players;

	FLobbyData()
	{
		LobbyName = "Lobby";
		MaxPlayers = 6;
		bIsPublic = true;
	}	
};
