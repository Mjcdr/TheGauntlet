#include "DestructibleObject.h"

ADestructibleObject::ADestructibleObject()
{
    Health = 100.f;
}

void ADestructibleObject::Interact_Implementation(AActor* Caller)
{
    TakeDamage(25.f);
}

void ADestructibleObject::TakeDamage(float DamageAmount)
{
    Health -= DamageAmount;
    if (Health <= 0.f)
    {
        Destroy();
    }
}