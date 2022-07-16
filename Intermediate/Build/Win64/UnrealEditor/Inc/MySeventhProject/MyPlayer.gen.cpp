// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MyPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyGrenade_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayer::execCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execOnHit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
		P_GET_OBJECT(APawn,Z_Param_FromPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_CurrentHealth,Z_Param_FromPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execMyDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execGetLeftHandIKTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLeftHandIKTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execGetRightHandIKTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRightHandIKTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execGetLeftHandLoactionFromMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLeftHandLoactionFromMesh();
		P_NATIVE_END;
	}
	void AMyPlayer::StaticRegisterNativesAMyPlayer()
	{
		UClass* Class = AMyPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentHealth", &AMyPlayer::execCurrentHealth },
			{ "GetLeftHandIKTransform", &AMyPlayer::execGetLeftHandIKTransform },
			{ "GetLeftHandLoactionFromMesh", &AMyPlayer::execGetLeftHandLoactionFromMesh },
			{ "GetRightHandIKTransform", &AMyPlayer::execGetRightHandIKTransform },
			{ "MyDeath", &AMyPlayer::execMyDeath },
			{ "OnHit", &AMyPlayer::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics
	{
		struct MyPlayer_eventCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "CurrentHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::MyPlayer_eventCurrentHealth_Parms), Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics
	{
		struct MyPlayer_eventGetLeftHandIKTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventGetLeftHandIKTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "GetLeftHandIKTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::MyPlayer_eventGetLeftHandIKTransform_Parms), Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics
	{
		struct MyPlayer_eventGetLeftHandLoactionFromMesh_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventGetLeftHandLoactionFromMesh_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "GetLeftHandLoactionFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::MyPlayer_eventGetLeftHandLoactionFromMesh_Parms), Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics
	{
		struct MyPlayer_eventGetRightHandIKTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventGetRightHandIKTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "GetRightHandIKTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::MyPlayer_eventGetRightHandIKTransform_Parms), Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_MyDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_MyDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_MyDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "MyDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_MyDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_MyDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_MyDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_MyDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_OnHit_Statics
	{
		struct MyPlayer_eventOnHit_Parms
		{
			int32 CurrentHealth;
			APawn* FromPawn;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyPlayer_OnHit_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventOnHit_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_OnHit_Statics::NewProp_FromPawn = { "FromPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventOnHit_Parms, FromPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnHit_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_OnHit_Statics::NewProp_FromPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayer_OnHit_Statics::MyPlayer_eventOnHit_Parms), Z_Construct_UFunction_AMyPlayer_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
	UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
	{
		return AMyPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyGrenade_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MyGrenade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myWeaponPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_myWeaponPrefab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[];
#endif
		static void NewProp_IsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_CurrentHealth, "CurrentHealth" }, // 1301957419
		{ &Z_Construct_UFunction_AMyPlayer_GetLeftHandIKTransform, "GetLeftHandIKTransform" }, // 1016654399
		{ &Z_Construct_UFunction_AMyPlayer_GetLeftHandLoactionFromMesh, "GetLeftHandLoactionFromMesh" }, // 3959931908
		{ &Z_Construct_UFunction_AMyPlayer_GetRightHandIKTransform, "GetRightHandIKTransform" }, // 3447997785
		{ &Z_Construct_UFunction_AMyPlayer_MyDeath, "MyDeath" }, // 9385340
		{ &Z_Construct_UFunction_AMyPlayer_OnHit, "OnHit" }, // 844550775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_MyGrenade_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_MyGrenade = { "MyGrenade", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, MyGrenade), Z_Construct_UClass_AMyGrenade_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MyGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MyGrenade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "Deaths" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AMyPlayer*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_forward_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, forward), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_forward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_right_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, right), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_myWeaponPrefab_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_myWeaponPrefab = { "myWeaponPrefab", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, myWeaponPrefab), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_myWeaponPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_myWeaponPrefab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping_SetBit(void* Obj)
	{
		((AMyPlayer*)Obj)->IsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MyGrenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_myWeaponPrefab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_IsJumping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
		&AMyPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayer()
	{
		if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<AMyPlayer>()
	{
		return AMyPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 75051118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_4141916589(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
