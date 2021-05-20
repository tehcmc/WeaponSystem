// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstpersonDemo/FirstpersonDemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstpersonDemoGameMode() {}
// Cross Module References
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AFirstpersonDemoGameMode_NoRegister();
	FIRSTPERSONDEMO_API UClass* Z_Construct_UClass_AFirstpersonDemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstpersonDemo();
// End Cross Module References
	void AFirstpersonDemoGameMode::StaticRegisterNativesAFirstpersonDemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstpersonDemoGameMode_NoRegister()
	{
		return AFirstpersonDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstpersonDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstpersonDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstpersonDemoGameMode.h" },
		{ "ModuleRelativePath", "FirstpersonDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstpersonDemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::ClassParams = {
		&AFirstpersonDemoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstpersonDemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstpersonDemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstpersonDemoGameMode, 351428801);
	template<> FIRSTPERSONDEMO_API UClass* StaticClass<AFirstpersonDemoGameMode>()
	{
		return AFirstpersonDemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstpersonDemoGameMode(Z_Construct_UClass_AFirstpersonDemoGameMode, &AFirstpersonDemoGameMode::StaticClass, TEXT("/Script/FirstpersonDemo"), TEXT("AFirstpersonDemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstpersonDemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
