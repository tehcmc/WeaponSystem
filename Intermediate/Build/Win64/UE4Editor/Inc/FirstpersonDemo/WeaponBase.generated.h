// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONDEMO_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FIRSTPERSONDEMO_WeaponBase_generated_h

#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponVars_Statics; \
	FIRSTPERSONDEMO_API static class UScriptStruct* StaticStruct();


template<> FIRSTPERSONDEMO_API UScriptStruct* StaticStruct<struct FWeaponVars>();

#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_SPARSE_DATA
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSecondaryFireReleased); \
	DECLARE_FUNCTION(execSecondaryFirePressed); \
	DECLARE_FUNCTION(execPrimaryFireReleased); \
	DECLARE_FUNCTION(execPrimaryFirePressed);


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSecondaryFireReleased); \
	DECLARE_FUNCTION(execSecondaryFirePressed); \
	DECLARE_FUNCTION(execPrimaryFireReleased); \
	DECLARE_FUNCTION(execPrimaryFirePressed);


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttachPoint() { return STRUCT_OFFSET(AWeaponBase, AttachPoint); } \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponVariables() { return STRUCT_OFFSET(AWeaponBase, WeaponVariables); }


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_35_PROLOG
#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_RPC_WRAPPERS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_INCLASS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_INCLASS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONDEMO_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstpersonDemo_Source_FirstpersonDemo_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
