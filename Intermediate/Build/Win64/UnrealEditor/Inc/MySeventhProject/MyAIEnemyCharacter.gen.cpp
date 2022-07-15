// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MyAIEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIEnemyCharacter() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyAIEnemyCharacter_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyAIEnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_APlayerWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execOnHit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
		P_GET_OBJECT(APawn,Z_Param_FromPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_CurrentHealth,Z_Param_FromPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execDestoryOrDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestoryOrDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execMyDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execGetLeftHandIKTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLeftHandIKTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execGetRightHandIKTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRightHandIKTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyAIEnemyCharacter::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	static FName NAME_AMyAIEnemyCharacter_DeathEvent = FName(TEXT("DeathEvent"));
	void AMyAIEnemyCharacter::DeathEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyAIEnemyCharacter_DeathEvent),NULL);
	}
	void AMyAIEnemyCharacter::StaticRegisterNativesAMyAIEnemyCharacter()
	{
		UClass* Class = AMyAIEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentHealth", &AMyAIEnemyCharacter::execCurrentHealth },
			{ "DestoryOrDisable", &AMyAIEnemyCharacter::execDestoryOrDisable },
			{ "GetLeftHandIKTransform", &AMyAIEnemyCharacter::execGetLeftHandIKTransform },
			{ "GetRightHandIKTransform", &AMyAIEnemyCharacter::execGetRightHandIKTransform },
			{ "MyDeath", &AMyAIEnemyCharacter::execMyDeath },
			{ "OnHit", &AMyAIEnemyCharacter::execOnHit },
			{ "OnPawnSeen", &AMyAIEnemyCharacter::execOnPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics
	{
		struct MyAIEnemyCharacter_eventCurrentHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "CurrentHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::MyAIEnemyCharacter_eventCurrentHealth_Parms), Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "DeathEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "DestoryOrDisable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics
	{
		struct MyAIEnemyCharacter_eventGetLeftHandIKTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventGetLeftHandIKTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "GetLeftHandIKTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::MyAIEnemyCharacter_eventGetLeftHandIKTransform_Parms), Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics
	{
		struct MyAIEnemyCharacter_eventGetRightHandIKTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventGetRightHandIKTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "GetRightHandIKTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::MyAIEnemyCharacter_eventGetRightHandIKTransform_Parms), Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "MyDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics
	{
		struct MyAIEnemyCharacter_eventOnHit_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventOnHit_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::NewProp_FromPawn = { "FromPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventOnHit_Parms, FromPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::NewProp_FromPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::MyAIEnemyCharacter_eventOnHit_Parms), Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics
	{
		struct MyAIEnemyCharacter_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIEnemyCharacter_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//AIBehaviour* MyCurrentBehaviour;// = AIBehaviour();\n" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
		{ "ToolTip", "AIBehaviour* MyCurrentBehaviour; = AIBehaviour();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIEnemyCharacter, nullptr, "OnPawnSeen", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::MyAIEnemyCharacter_eventOnPawnSeen_Parms), Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyAIEnemyCharacter);
	UClass* Z_Construct_UClass_AMyAIEnemyCharacter_NoRegister()
	{
		return AMyAIEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myWeaponPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_myWeaponPrefab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyAIEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_CurrentHealth, "CurrentHealth" }, // 1406287412
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_DeathEvent, "DeathEvent" }, // 3316980651
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_DestoryOrDisable, "DestoryOrDisable" }, // 3218223598
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_GetLeftHandIKTransform, "GetLeftHandIKTransform" }, // 50149190
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_GetRightHandIKTransform, "GetRightHandIKTransform" }, // 734882676
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_MyDeath, "MyDeath" }, // 2931921077
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_OnHit, "OnHit" }, // 1493404997
		{ &Z_Construct_UFunction_AMyAIEnemyCharacter_OnPawnSeen, "OnPawnSeen" }, // 3462477368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyAIEnemyCharacter.h" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_Forward_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, Forward), METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_myWeaponPrefab_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_myWeaponPrefab = { "myWeaponPrefab", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, myWeaponPrefab), Z_Construct_UClass_APlayerWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_myWeaponPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_myWeaponPrefab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, CurrentWeapon), Z_Construct_UClass_APlayerWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "IsDead" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AMyAIEnemyCharacter*)Obj)->isDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyAIEnemyCharacter), &Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_MySkeletalMesh_MetaData[] = {
		{ "Category", "MyAIEnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_MySkeletalMesh = { "MySkeletalMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, MySkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_MySkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_MySkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnEnemy_MetaData[] = {
		{ "Category", "MyAIEnemyCharacter" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnEnemy = { "PawnEnemy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, PawnEnemy), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnEnemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyAIEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIEnemyCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_Forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_myWeaponPrefab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_isDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_MySkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIEnemyCharacter_Statics::NewProp_PawnSensingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIEnemyCharacter_Statics::ClassParams = {
		&AMyAIEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyAIEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAIEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyAIEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIEnemyCharacter.OuterSingleton, Z_Construct_UClass_AMyAIEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyAIEnemyCharacter.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<AMyAIEnemyCharacter>()
	{
		return AMyAIEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIEnemyCharacter);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyAIEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyAIEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIEnemyCharacter, AMyAIEnemyCharacter::StaticClass, TEXT("AMyAIEnemyCharacter"), &Z_Registration_Info_UClass_AMyAIEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIEnemyCharacter), 464080178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyAIEnemyCharacter_h_3087203866(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyAIEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyAIEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
