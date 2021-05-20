// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONDEMO_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define FIRSTPERSONDEMO_WeaponComponent_generated_h

#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_SPARSE_DATA
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_RPC_WRAPPERS
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public:


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(UWeaponComponent, WeaponMesh); }


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_12_PROLOG
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_RPC_WRAPPERS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_INCLASS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONDEMO_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstpersonDemo_Source_FirstpersonDemo_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
