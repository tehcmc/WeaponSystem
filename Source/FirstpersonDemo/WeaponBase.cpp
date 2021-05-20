// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/SphereComponent.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttachPoint = CreateDefaultSubobject<USphereComponent>(TEXT("Attachment point"));
	AttachPoint->SetSphereRadius(5.f);
	RootComponent = AttachPoint;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->SetupAttachment(RootComponent);
	WeaponMesh->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::PrimaryFirePressed()
{

}

void AWeaponBase::PrimaryFireReleased()
{

}

void AWeaponBase::SecondaryFirePressed()
{

}

void AWeaponBase::SecondaryFireReleased()
{

}
