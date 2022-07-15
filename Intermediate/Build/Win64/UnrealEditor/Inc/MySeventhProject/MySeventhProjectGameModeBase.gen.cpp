// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MySeventhProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySeventhProjectGameModeBase() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMySeventhProjectGameModeBase_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMySeventhProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
// End Cross Module References
	void AMySeventhProjectGameModeBase::StaticRegisterNativesAMySeventhProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySeventhProjectGameModeBase);
	UClass* Z_Construct_UClass_AMySeventhProjectGameModeBase_NoRegister()
	{
		return AMySeventhProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MySeventhProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MySeventhProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySeventhProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::ClassParams = {
		&AMySeventhProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMySeventhProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMySeventhProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySeventhProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AMySeventhProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMySeventhProjectGameModeBase.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<AMySeventhProjectGameModeBase>()
	{
		return AMySeventhProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySeventhProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MySeventhProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MySeventhProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMySeventhProjectGameModeBase, AMySeventhProjectGameModeBase::StaticClass, TEXT("AMySeventhProjectGameModeBase"), &Z_Registration_Info_UClass_AMySeventhProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySeventhProjectGameModeBase), 4029571731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MySeventhProjectGameModeBase_h_2526271123(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MySeventhProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MySeventhProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
