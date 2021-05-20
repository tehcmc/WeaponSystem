// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONDEMO_FirstpersonDemoCharacter_generated_h
#error "FirstpersonDemoCharacter.generated.h already included, missing '#pragma once' in FirstpersonDemoCharacter.h"
#endif
#define FIRSTPERSONDEMO_FirstpersonDemoCharacter_generated_h

#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_SPARSE_DATA
#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEquipWeapon);


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEquipWeapon);


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstpersonDemoCharacter(); \
	friend struct Z_Construct_UClass_AFirstpersonDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstpersonDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirstpersonDemoCharacter)


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFirstpersonDemoCharacter(); \
	friend struct Z_Construct_UClass_AFirstpersonDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstpersonDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstpersonDemo"), NO_API) \
	DECLARE_SERIALIZER(AFirstpersonDemoCharacter)


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstpersonDemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstpersonDemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstpersonDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstpersonDemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstpersonDemoCharacter(AFirstpersonDemoCharacter&&); \
	NO_API AFirstpersonDemoCharacter(const AFirstpersonDemoCharacter&); \
public:


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstpersonDemoCharacter(AFirstpersonDemoCharacter&&); \
	NO_API AFirstpersonDemoCharacter(const AFirstpersonDemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstpersonDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstpersonDemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstpersonDemoCharacter)


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstpersonDemoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstpersonDemoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstpersonDemoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstpersonDemoCharacter, FirstPersonCameraComponent); }


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_21_PROLOG
#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_RPC_WRAPPERS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_INCLASS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_SPARSE_DATA \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONDEMO_API UClass* StaticClass<class AFirstpersonDemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstpersonDemo_Source_FirstpersonDemo_FirstpersonDemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
