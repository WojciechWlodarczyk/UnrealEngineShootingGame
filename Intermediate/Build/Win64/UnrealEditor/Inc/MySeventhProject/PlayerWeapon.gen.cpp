// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/PlayerWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWeapon() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_APlayerWeapon_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_APlayerWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_ANewBullet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerWeapon::execLeftHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->LeftHandTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerWeapon::execRightHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->RightHandTransform();
		P_NATIVE_END;
	}
	void APlayerWeapon::StaticRegisterNativesAPlayerWeapon()
	{
		UClass* Class = APlayerWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LeftHandTransform", &APlayerWeapon::execLeftHandTransform },
			{ "RightHandTransform", &APlayerWeapon::execRightHandTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics
	{
		struct PlayerWeapon_eventLeftHandTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeapon_eventLeftHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerWeapon, nullptr, "LeftHandTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::PlayerWeapon_eventLeftHandTransform_Parms), Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerWeapon_LeftHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerWeapon_LeftHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics
	{
		struct PlayerWeapon_eventRightHandTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeapon_eventRightHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerWeapon, nullptr, "RightHandTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::PlayerWeapon_eventRightHandTransform_Parms), Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerWeapon_RightHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerWeapon_RightHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerWeapon);
	UClass* Z_Construct_UClass_APlayerWeapon_NoRegister()
	{
		return APlayerWeapon::StaticClass();
	}
	struct Z_Construct_UClass_APlayerWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Laser_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Laser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dispersion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dispersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerWeapon_LeftHandTransform, "LeftHandTransform" }, // 1775843858
		{ &Z_Construct_UFunction_APlayerWeapon_RightHandTransform, "RightHandTransform" }, // 480348896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerWeapon.h" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerWeapon_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerWeapon_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerWeapon, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_MyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_MyStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerWeapon_Statics::NewProp_Laser_MetaData[] = {
		{ "Category", "Leser" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerWeapon_Statics::NewProp_Laser = { "Laser", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerWeapon, Laser), Z_Construct_UClass_ANewBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_Laser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_Laser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerWeapon_Statics::NewProp_dispersion_MetaData[] = {
		{ "Category", "Leser" },
		{ "ModuleRelativePath", "PlayerWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerWeapon_Statics::NewProp_dispersion = { "dispersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerWeapon, dispersion), METADATA_PARAMS(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_dispersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerWeapon_Statics::NewProp_dispersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerWeapon_Statics::NewProp_MyStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerWeapon_Statics::NewProp_Laser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerWeapon_Statics::NewProp_dispersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerWeapon_Statics::ClassParams = {
		&APlayerWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerWeapon()
	{
		if (!Z_Registration_Info_UClass_APlayerWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerWeapon.OuterSingleton, Z_Construct_UClass_APlayerWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerWeapon.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<APlayerWeapon>()
	{
		return APlayerWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerWeapon);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerWeapon, APlayerWeapon::StaticClass, TEXT("APlayerWeapon"), &Z_Registration_Info_UClass_APlayerWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerWeapon), 617506690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_2899461252(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_PlayerWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
