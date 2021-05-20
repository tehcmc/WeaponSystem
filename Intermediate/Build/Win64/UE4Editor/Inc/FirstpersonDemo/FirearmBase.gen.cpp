// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstpersonDemo/FirearmBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearmBase() {}
// Cross Module References
	FIRSTPERSONDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmVars();
	UPackage* Z_Construct_UPackage__Script_FirstpersonDemo();
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AFirearmBase_NoRegister();
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AFirearmBase();
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AFirstpersonDemoProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FFirearmVars::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIRSTPERSONDEMO_API uint32 Get_Z_Construct_UScriptStruct_FFirearmVars_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirearmVars, Z_Construct_UPackage__Script_FirstpersonDemo(), TEXT("FirearmVars"), sizeof(FFirearmVars), Get_Z_Construct_UScriptStruct_FFirearmVars_Hash());
	}
	return Singleton;
}
template<> FIRSTPERSONDEMO_API UScriptStruct* StaticStruct<FFirearmVars>()
{
	return FFirearmVars::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirearmVars(FFirearmVars::StaticStruct, TEXT("/Script/FirstpersonDemo"), TEXT("FirearmVars"), false, nullptr, nullptr);
static struct FScriptStruct_FirstpersonDemo_StaticRegisterNativesFFirearmVars
{
	FScriptStruct_FirstpersonDemo_StaticRegisterNativesFFirearmVars()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirearmVars")),new UScriptStruct::TCppStructOps<FFirearmVars>);
	}
} ScriptStruct_FirstpersonDemo_StaticRegisterNativesFFirearmVars;
	struct Z_Construct_UScriptStruct_FFirearmVars_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulletCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirearmVars_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirearmVars>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmVars, MaxAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_BulletCost_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_BulletCost = { "BulletCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmVars, BulletCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_BulletCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_BulletCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmVars, WeaponRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponSpread_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponSpread = { "WeaponSpread", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmVars, WeaponSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirearmVars, FireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirearmVars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_BulletCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_WeaponSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmVars_Statics::NewProp_FireRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirearmVars_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirstpersonDemo,
		nullptr,
		&NewStructOps,
		"FirearmVars",
		sizeof(FFirearmVars),
		alignof(FFirearmVars),
		Z_Construct_UScriptStruct_FFirearmVars_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmVars_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmVars_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirearmVars()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirearmVars_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirstpersonDemo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirearmVars"), sizeof(FFirearmVars), Get_Z_Construct_UScriptStruct_FFirearmVars_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirearmVars_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirearmVars_Hash() { return 2651811852U; }
	void AFirearmBase::StaticRegisterNativesAFirearmBase()
	{
	}
	UClass* Z_Construct_UClass_AFirearmBase_NoRegister()
	{
		return AFirearmBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirearmBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirearmVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirearmVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirearmBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstpersonDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirearmBase.h" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_MuzzleLoc_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_MuzzleLoc = { "MuzzleLoc", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, MuzzleLoc), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_MuzzleLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_MuzzleLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, ProjectileClass), Z_Construct_UClass_AFirstpersonDemoProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunRot_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunRot = { "GunRot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, GunRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "FirearmBase.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirearmBase_Statics::NewProp_FirearmVariables_MetaData[] = {
		{ "Category", "AWeapon Config" },
		{ "ModuleRelativePath", "FirearmBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirearmBase_Statics::NewProp_FirearmVariables = { "FirearmVariables", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirearmBase, FirearmVariables), Z_Construct_UScriptStruct_FFirearmVars, METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::NewProp_FirearmVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::NewProp_FirearmVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirearmBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_MuzzleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmBase_Statics::NewProp_FirearmVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirearmBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirearmBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirearmBase_Statics::ClassParams = {
		&AFirearmBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirearmBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirearmBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirearmBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirearmBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirearmBase, 2461003233);
	template<> FIRSTPERSONDEMO_API UClass* StaticClass<AFirearmBase>()
	{
		return AFirearmBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirearmBase(Z_Construct_UClass_AFirearmBase, &AFirearmBase::StaticClass, TEXT("/Script/FirstpersonDemo"), TEXT("AFirearmBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirearmBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
