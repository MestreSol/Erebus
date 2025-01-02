#pragma once

#include "CoreMinimal.h"
#include "ShipData.generated.h"

USTRUCT(BlueprintType)
struct FShipData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Ship")
	FString ShipName;

};
