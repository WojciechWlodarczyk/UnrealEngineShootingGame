// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSEVENTHPROJECT_PlayerWeapon_generated_h
#error "PlayerWeapon.generated.h already included, missing '#pragma once' in PlayerWeapon.h"
#endif
#define MYSEVENTHPROJECT_PlayerWeapon_generated_h

#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_SPARSE_DATA
#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeftHandTransform); \
	DECLARE_FUNCTION(execRightHandTransform);


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeftHandTransform); \
	DECLARE_FUNCTION(execRightHandTransform);


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerWeapon(); \
	friend struct Z_Construct_UClass_APlayerWeapon_Statics; \
public: \
	DECLARE_CLASS(APlayerWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerWeapon)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerWeapon(); \
	friend struct Z_Construct_UClass_APlayerWeapon_Statics; \
public: \
	DECLARE_CLASS(APlayerWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerWeapon)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerWeapon(APlayerWeapon&&); \
	NO_API APlayerWeapon(const APlayerWeapon&); \
public:


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerWeapon(APlayerWeapon&&); \
	NO_API APlayerWeapon(const APlayerWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerWeapon)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_12_PROLOG
#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_RPC_WRAPPERS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_INCLASS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSEVENTHPROJECT_API UClass* StaticClass<class APlayerWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
