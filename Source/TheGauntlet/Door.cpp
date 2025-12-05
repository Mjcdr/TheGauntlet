#include "Door.h"
#include "TheGauntletCharacter.h"

ADoor::ADoor()
{
    bIsOpen = false;
    bRequiresKey = true;
}

void ADoor::Interact_Implementation(AActor* Caller)
{
    if (bIsOpen)
        return;

    if (bRequiresKey)
    {
        if (auto Player = Cast<ATheGauntletCharacter>(Caller))
        {
            if (Player->Keys > 0)
            {
                Player->Keys--;
                OpenDoor();
            }
        }
    }
    else
    {
        OpenDoor();
    }
}

void ADoor::OpenDoor()
{
    bIsOpen = true;
    // Add animation or door opening logic here, e.g. rotate mesh
}