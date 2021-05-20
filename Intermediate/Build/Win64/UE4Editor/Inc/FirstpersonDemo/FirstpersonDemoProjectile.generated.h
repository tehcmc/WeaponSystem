// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTPERSONDEMO_FirstpersonDemoProjectile_generated_h
#error "FirstpersonDemoProjectile.generated.h already included, missing '#pragma once' in FirstpersonDemoProjectile.h"
#endif
#define FIRSTPERSONDEMO_FirstpersonDemoProjectile_generated_h

#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_SPARSE_DATA
#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstpersonDemoProjectile(); \
	friend struct Z_Construct_UClass_AFirstpersonDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstpersonDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirstpersonDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFirstpersonDemoProjectile(); \
	friend struct Z_Construct_UClass_AFirstpersonDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstpersonDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirstpersonDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstpersonDemoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstpersonDemoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstpersonDemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstpersonDemoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstpersonDemoProjectile(AFirstpersonDemoProjectile&&); \
	NO_API AFirstpersonDemoProjectile(const AFirstpersonDemoProjectile&); \
public:


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstpersonDemoProjectile(AFirstpersonDemoProjectile&&); \
	NO_API AFirstpersonDemoProjectile(const AFirstpersonDemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstpersonDemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstpersonDemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstpersonDemoProjectile)


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstpersonDemoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__StoppingPower() { return STRUCT_OFFSET(AFirstpersonDemoProjectile, StoppingPower); } \
	FORCEINLINE static uint32 __PPO__ImpactDecal() { return STRUCT_OFFSET(AFirstpersonDemoProjectile, ImpactDecal); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstpersonDemoProjectile, ProjectileMovement); }


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_13_PROLOG
#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_RPC_WRAPPERS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_INCLASS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONDEMO_API UClass* StaticClass<class AFirstpersonDemoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
