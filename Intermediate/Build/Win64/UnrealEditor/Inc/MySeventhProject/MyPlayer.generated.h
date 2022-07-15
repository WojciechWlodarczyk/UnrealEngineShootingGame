// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYSEVENTHPROJECT_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define MYSEVENTHPROJECT_MyPlayer_generated_h

#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_SPARSE_DATA
#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCurrentHealth); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execMyDeath); \
	DECLARE_FUNCTION(execGetLeftHandIKTransform); \
	DECLARE_FUNCTION(execGetRightHandIKTransform); \
	DECLARE_FUNCTION(execGetLeftHandLoactionFromMesh);


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCurrentHealth); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execMyDeath); \
	DECLARE_FUNCTION(execGetLeftHandIKTransform); \
	DECLARE_FUNCTION(execGetRightHandIKTransform); \
	DECLARE_FUNCTION(execGetLeftHandLoactionFromMesh);


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_EVENT_PARMS
#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_CALLBACK_WRAPPERS
#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySeventhProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_16_PROLOG \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_EVENT_PARMS


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_RPC_WRAPPERS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_CALLBACK_WRAPPERS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_INCLASS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_SPARSE_DATA \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_CALLBACK_WRAPPERS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_INCLASS_NO_PURE_DECLS \
	FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSEVENTHPROJECT_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
