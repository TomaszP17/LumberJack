// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjektUnreal/ProjektUnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjektUnrealGameMode() {}
// Cross Module References
	PROJEKTUNREAL_API UClass* Z_Construct_UClass_AProjektUnrealGameMode_NoRegister();
	PROJEKTUNREAL_API UClass* Z_Construct_UClass_AProjektUnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjektUnreal();
// End Cross Module References
	void AProjektUnrealGameMode::StaticRegisterNativesAProjektUnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjektUnrealGameMode_NoRegister()
	{
		return AProjektUnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjektUnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjektUnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjektUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjektUnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjektUnrealGameMode.h" },
		{ "ModuleRelativePath", "ProjektUnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjektUnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjektUnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjektUnrealGameMode_Statics::ClassParams = {
		&AProjektUnrealGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjektUnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjektUnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjektUnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjektUnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjektUnrealGameMode, 1802229385);
	template<> PROJEKTUNREAL_API UClass* StaticClass<AProjektUnrealGameMode>()
	{
		return AProjektUnrealGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjektUnrealGameMode(Z_Construct_UClass_AProjektUnrealGameMode, &AProjektUnrealGameMode::StaticClass, TEXT("/Script/ProjektUnreal"), TEXT("AProjektUnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjektUnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
