// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/NewBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewBullet() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_ANewBullet_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_ANewBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	MYSEVENTHPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBulletStructX();
// End Cross Module References
	void ANewBullet::StaticRegisterNativesANewBullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewBullet);
	UClass* Z_Construct_UClass_ANewBullet_NoRegister()
	{
		return ANewBullet::StaticClass();
	}
	struct Z_Construct_UClass_ANewBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSide_MetaData[];
#endif
		static void NewProp_PlayerSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestoryParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestoryParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewBullet.h" },
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewBullet, Speed), METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_MinDamage_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_MinDamage = { "MinDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewBullet, MinDamage), METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_MinDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_MinDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_MaxDamage_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_MaxDamage = { "MaxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewBullet, MaxDamage), METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_MaxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_MaxDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide_MetaData[] = {
		{ "Category", "Laser" },
		{ "Comment", "//\x09UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"Laser\")\n//\x09\x09UParticleSystem* Laser;\n" },
		{ "ModuleRelativePath", "NewBullet.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"Laser\")\n       UParticleSystem* Laser;" },
	};
#endif
	void Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide_SetBit(void* Obj)
	{
		((ANewBullet*)Obj)->PlayerSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide = { "PlayerSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANewBullet), &Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_MyOwner_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_MyOwner = { "MyOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewBullet, MyOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_MyOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_MyOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewBullet_Statics::NewProp_DestoryParticle_MetaData[] = {
		{ "Category", "Laser" },
		{ "Comment", "//ECombatSide MyCombatSide ;\n" },
		{ "ModuleRelativePath", "NewBullet.h" },
		{ "ToolTip", "ECombatSide MyCombatSide ;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewBullet_Statics::NewProp_DestoryParticle = { "DestoryParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewBullet, DestoryParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::NewProp_DestoryParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::NewProp_DestoryParticle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_MinDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_MaxDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_PlayerSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_MyOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewBullet_Statics::NewProp_DestoryParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewBullet_Statics::ClassParams = {
		&ANewBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewBullet()
	{
		if (!Z_Registration_Info_UClass_ANewBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewBullet.OuterSingleton, Z_Construct_UClass_ANewBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANewBullet.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<ANewBullet>()
	{
		return ANewBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewBullet);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BulletStructX;
class UScriptStruct* FBulletStructX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BulletStructX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BulletStructX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulletStructX, Z_Construct_UPackage__Script_MySeventhProject(), TEXT("BulletStructX"));
	}
	return Z_Registration_Info_UScriptStruct_BulletStructX.OuterSingleton;
}
template<> MYSEVENTHPROJECT_API UScriptStruct* StaticStruct<FBulletStructX>()
{
	return FBulletStructX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBulletStructX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletStructX_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewBullet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBulletStructX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulletStructX>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBulletStructX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
		nullptr,
		&NewStructOps,
		"BulletStructX",
		sizeof(FBulletStructX),
		alignof(FBulletStructX),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletStructX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletStructX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBulletStructX()
	{
		if (!Z_Registration_Info_UScriptStruct_BulletStructX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BulletStructX.InnerSingleton, Z_Construct_UScriptStruct_FBulletStructX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BulletStructX.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ScriptStructInfo[] = {
		{ FBulletStructX::StaticStruct, Z_Construct_UScriptStruct_FBulletStructX_Statics::NewStructOps, TEXT("BulletStructX"), &Z_Registration_Info_UScriptStruct_BulletStructX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBulletStructX), 2331107816U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANewBullet, ANewBullet::StaticClass, TEXT("ANewBullet"), &Z_Registration_Info_UClass_ANewBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewBullet), 3879416989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_3237522770(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_NewBullet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
