// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONDEMO_FirearmBase_generated_h
#error "FirearmBase.generated.h already included, missing '#pragma once' in FirearmBase.h"
#endif
#define FIRSTPERSONDEMO_FirearmBase_generated_h

#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirearmVars_Statics; \
	FIRSTPERSONDEMO_API static class UScriptStruct* StaticStruct();


template<> FIRSTPERSONDEMO_API UScriptStruct* StaticStruct<struct FFirearmVars>();

#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_SPARSE_DATA
#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_RPC_WRAPPERS
#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirearmBase(); \
	friend struct Z_Construct_UClass_AFirearmBase_Statics; \
public: \
	DECLARE_CLASS(AFirearmBase, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirearmBase)


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_INCLASS \
private: \
	static void StaticRegisterNativesAFirearmBase(); \
	friend struct Z_Construct_UClass_AFirearmBase_Statics; \
public: \
	DECLARE_CLASS(AFirearmBase, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirearmBase)


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirearmBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirearmBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirearmBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirearmBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirearmBase(AFirearmBase&&); \
	NO_API AFirearmBase(const AFirearmBase&); \
public:


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirearmBase(AFirearmBase&&); \
	NO_API AFirearmBase(const AFirearmBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirearmBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirearmBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirearmBase)


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MuzzleLoc() { return STRUCT_OFFSET(AFirearmBase, MuzzleLoc); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AFirearmBase, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__FirearmVariables() { return STRUCT_OFFSET(AFirearmBase, FirearmVariables); }


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_49_PROLOG
#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_RPC_WRAPPERS \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_INCLASS \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_INCLASS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONDEMO_API UClass* StaticClass<class AFirearmBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstpersonDemo_Source_FirstpersonDemo_FirearmBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
