// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJEKTUNREAL_PawnTurret_generated_h
#error "PawnTurret.generated.h already included, missing '#pragma once' in PawnTurret.h"
#endif
#define PROJEKTUNREAL_PawnTurret_generated_h

#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_SPARSE_DATA
#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_RPC_WRAPPERS
#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnTurret(); \
	friend struct Z_Construct_UClass_APawnTurret_Statics; \
public: \
	DECLARE_CLASS(APawnTurret, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektUnreal"), NO_API) \
	DECLARE_SERIALIZER(APawnTurret)


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPawnTurret(); \
	friend struct Z_Construct_UClass_APawnTurret_Statics; \
public: \
	DECLARE_CLASS(APawnTurret, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektUnreal"), NO_API) \
	DECLARE_SERIALIZER(APawnTurret)


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnTurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurret(APawnTurret&&); \
	NO_API APawnTurret(const APawnTurret&); \
public:


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurret() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurret(APawnTurret&&); \
	NO_API APawnTurret(const APawnTurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnTurret)


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(APawnTurret, FireRate); } \
	FORCEINLINE static uint32 __PPO__FireRange() { return STRUCT_OFFSET(APawnTurret, FireRange); }


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_9_PROLOG
#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_SPARSE_DATA \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_RPC_WRAPPERS \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_INCLASS \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_SPARSE_DATA \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_INCLASS_NO_PURE_DECLS \
	ProjektUnreal_Source_ProjektUnreal_PawnTurret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJEKTUNREAL_API UClass* StaticClass<class APawnTurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjektUnreal_Source_ProjektUnreal_PawnTurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
