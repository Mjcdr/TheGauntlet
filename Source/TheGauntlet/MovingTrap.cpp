#include "MovingTrap.h"
#include "Math/UnrealMathUtility.h"

AMovingTrap::AMovingTrap()
{
    PrimaryActorTick.bCanEverTick = true;
    Amplitude = 100.f;
    Frequency = 1.f;
}

void AMovingTrap::BeginPlay()
{
    Super::BeginPlay();
    StartLocation = GetActorLocation();
}

void AMovingTrap::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    float DeltaHeight = Amplitude * FMath::Sin(GetWorld()->TimeSeconds * Frequency);
    FVector NewLocation = StartLocation;
    NewLocation.Z += DeltaHeight;
    SetActorLocation(NewLocation);
}