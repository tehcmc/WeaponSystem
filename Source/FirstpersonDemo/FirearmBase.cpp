// Fill out your copyright notice in the Description page of Project Settings.


#include "FirearmBase.h"
#include "Components/SphereComponent.h"
#include "FirstpersonDemoProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"



AFirearmBase::AFirearmBase()
{
	MuzzleLoc = CreateDefaultSubobject<USphereComponent>(TEXT("Muzzle Location"));
	MuzzleLoc->SetSphereRadius(1.f);
	MuzzleLoc->SetupAttachment(RootComponent);
	GunOffset = FVector(100.0f, 0.0f, -10.0f);

}

void AFirearmBase::PrimaryFirePressed()
{
	
	FireBullet();

	GetWorld()->GetTimerManager().SetTimer(FireRateHandle,this,&AFirearmBase::FireBullet,FirearmVariables.FireRate,true);
}

void AFirearmBase::PrimaryFireReleased()
{
	GetWorld()->GetTimerManager().ClearTimer(FireRateHandle);
}

void AFirearmBase::SecondaryFirePressed()
{
	UE_LOG(LogTemp, Warning, TEXT("SECONDARY FIRE"));
}

void AFirearmBase::FireBullet()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
				FRotator ownerRot;
				ACharacter* tempchar;

				//ownerRot.Pitch = GetWeaponMesh()->GetComponentRotation().Pitch;
				if (GetOwner())//validity check for owner.
				{
					tempchar = Cast<ACharacter>(GetOwner());
					if (tempchar)
					{
						ownerRot = tempchar->GetControlRotation();
					}

				}
			
				const FRotator SpawnRotation = ownerRot;
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((MuzzleLoc != nullptr) ? MuzzleLoc->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				GunRot = ownerRot;
				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AFirstpersonDemoProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			
		}

		// try and play the sound if specified
		if (FireSound != nullptr)
		{
			float pitch = FMath::RandRange(1.55f, 1.85f);//randomize pitch
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation(), 1, pitch);
		}

	}



}

void AFirearmBase::SwitchFireMode()
{
	UE_LOG(LogTemp, Warning, TEXT("SWITCH FIRE MODE"));
}

