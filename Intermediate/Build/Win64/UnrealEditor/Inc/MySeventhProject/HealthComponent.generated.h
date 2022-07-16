// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYSEVENTHPROJECT_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define MYSEVENTHPROJECT_HealthComponent_generated_h

#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_8_DELEGATE \
static inline void FDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeathDelegate) \
{ \
	DeathDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_10_DELEGATE \
struct _Script_MySeventhProject_eventHitDelegate_Parms \
{ \
	int32 CurrentHealth; \
	APawn* FromPawn; \
}; \
static inline void FHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& HitDelegate, int32 CurrentHealth, APawn* FromPawn) \
{ \
	_Script_MySeventhProject_eventHitDelegate_Parms Parms; \
	Parms.CurrentHealth=CurrentHealth; \
	Parms.FromPawn=FromPawn; \
	HitDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_SPARSE_DATA
#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_RPC_WRAPPERS
#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_19_PROLOG
#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_RPC_WRAPPERS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_INCLASS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSEVENTHPROJECT_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MySeventhProject_5_0_Source_MySeventhProject_HealthComponent_h


#define FOREACH_ENUM_ECOMBATSIDE(op) \
	op(ECombatSide::ECS_Player) \
	op(ECombatSide::ECS_Enemy) \
	op(ECombatSide::ECS_Other) 

enum class ECombatSide : uint8;
template<> MYSEVENTHPROJECT_API UEnum* StaticEnum<ECombatSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
