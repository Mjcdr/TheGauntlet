#include "TheGauntletCharacter.h"
#include "GameFramework/PlayerController.h"
#include "InteractableInterface.h"
#include "DrawDebugHelpers.h"

ATheGauntletCharacter::ATheGauntletCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    Health = 100.f;
    Keys = 0;
}

void ATheGauntletCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ATheGauntletCharacter::Interact()
{
    TraceForInteractable();
}

void ATheGauntletCharacter::TraceForInteractable()
{
    FVector Start;
    FRotator Rot;
    GetController()->GetPlayerViewPoint(Start, Rot);
    FVector End = Start + Rot.Vector() * 300.f;

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        if (Hit.GetActor() && Hit.GetActor()->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
        {
            IInteractableInterface::Execute_Interact(Hit.GetActor(), this);
        }
    }

    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 2.f);
}