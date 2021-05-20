// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"
class USphereComponent;


USTRUCT()
struct FWeaponVars
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, Category = "Config")
	FName WeaponName;

	

	UPROPERTY(EditAnywhere, Category = "Config")
	float AttackRate;


	FWeaponVars()
	{
		WeaponName = "WEAPON BASE";
		AttackRate = .1f;
	}

};


UCLASS()
class FIRSTPERSONDEMO_API AWeaponBase : public AActor
{
	GENERATED_BODY()



	UPROPERTY(EditAnywhere, Category = Mesh)
	USphereComponent* AttachPoint;
	UPROPERTY(EditAnywhere, Category = Mesh)
	USkeletalMeshComponent* WeaponMesh;

	

	UPROPERTY(EditAnywhere, Category = "AWeapon Config")
	FWeaponVars WeaponVariables;

public:	
	// Sets default values for this actor's properties
	AWeaponBase();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION()
	virtual	void PrimaryFirePressed();
	UFUNCTION()
	virtual	void PrimaryFireReleased();

	UFUNCTION()
	virtual	void SecondaryFirePressed();
	UFUNCTION()
	virtual	void SecondaryFireReleased();

public:
	USkeletalMeshComponent* GetWeaponMesh() const { return WeaponMesh; }
	void SetWeaponMesh(USkeletalMeshComponent* val) { WeaponMesh = val; }
};
