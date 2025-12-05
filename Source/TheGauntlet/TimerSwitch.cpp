#include "TimerSwitch.h"
#include "TimerManager.h"
#include "Engine/World.h"

ATimerSwitch::ATimerSwitch()
{
    OpenDuration = 5.f;
}

void ATimerSwitch::Interact_Implementation(AActor* Caller)
{
    OpenPassage();
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATimerSwitch::ClosePassage, OpenDuration, false);
}

void ATimerSwitch::OpenPassage()
{
    // Add logic to open passage/door
}

void ATimerSwitch::ClosePassage()
{
    // Add logic to close passage/door
}