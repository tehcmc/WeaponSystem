// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "FirearmBase.generated.h"

/**
 * 
 */


USTRUCT()
struct FFirearmVars
{
	GENERATED_BODY()


		
	UPROPERTY(EditAnywhere, Category = "Ammo")
		int32 MaxAmmo;

	UPROPERTY(EditAnywhere, Category = "Ammo")
		int32 BulletCost;

	UPROPERTY(EditAnywhere, Category = "Config")
		float WeaponRange;

	UPROPERTY(EditAnywhere, Category = "Config")
		float WeaponSpread;
	UPROPERTY(EditAnywhere, Category = "Config")
		float FireRate;


	FFirearmVars()
	{
		MaxAmmo = 30;
		BulletCost = 1;
		WeaponRange = 30;
		WeaponSpread = 30;
		FireRate = .1f;
	}

};

class USoundBase;

UCLASS()
class FIRSTPERSONDEMO_API AFirearmBase : public AWeaponBase
{
	GENERATED_BODY()

		AFirearmBase();
		UPROPERTY(EditAnywhere, Category = Mesh)
		USphereComponent* MuzzleLoc;

		UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AFirstpersonDemoProjectile> ProjectileClass;
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FRotator GunRot;
		/** Gun muzzle's offset from the characters location */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

		void SwitchFireMode();

protected:
		virtual void PrimaryFirePressed() override;
		virtual void PrimaryFireReleased() override;

		virtual void SecondaryFirePressed() override;
		void FireBullet();
		
		FTimerHandle FireRateHandle;

		UPROPERTY(EditAnywhere, Category = "AWeapon Config")
		FFirearmVars FirearmVariables;



};

