// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJEKTUNREAL_PawnBase_generated_h
#error "PawnBase.generated.h already included, missing '#pragma once' in PawnBase.h"
#endif
#define PROJEKTUNREAL_PawnBase_generated_h

#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_SPARSE_DATA
#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_RPC_WRAPPERS
#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektUnreal"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektUnreal"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public:


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnBase)


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(APawnBase, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(APawnBase, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(APawnBase, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(APawnBase, ProjectileSpawnPoint); }


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_11_PROLOG
#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_SPARSE_DATA \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_RPC_WRAPPERS \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_INCLASS \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_SPARSE_DATA \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_INCLASS_NO_PURE_DECLS \
	ProjektUnreal_Source_ProjektUnreal_PawnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJEKTUNREAL_API UClass* StaticClass<class APawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjektUnreal_Source_ProjektUnreal_PawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
