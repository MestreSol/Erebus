#include "ACharacter.h"


// Sets default values
AACharacter::AACharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	Name = TEXT("Default Name");
	Level=1;
}

// Called when the game starts or when spawned
void AACharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AACharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

