// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjektUnreal/MainMenuGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}
// Cross Module References
	PROJEKTUNREAL_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
	PROJEKTUNREAL_API UClass* Z_Construct_UClass_AMainMenuGameMode();
	PROJEKTUNREAL_API UClass* Z_Construct_UClass_AProjektUnrealGameMode();
	UPackage* Z_Construct_UPackage__Script_ProjektUnreal();
// End Cross Module References
	void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
	{
		return AMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjektUnrealGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjektUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuGameMode.h" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
		&AMainMenuGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuGameMode, 2108087653);
	template<> PROJEKTUNREAL_API UClass* StaticClass<AMainMenuGameMode>()
	{
		return AMainMenuGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuGameMode(Z_Construct_UClass_AMainMenuGameMode, &AMainMenuGameMode::StaticClass, TEXT("/Script/ProjektUnreal"), TEXT("AMainMenuGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
