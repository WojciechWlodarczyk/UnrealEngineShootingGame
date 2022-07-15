// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/ThisGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisGameInstance() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_UThisGameInstance_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_UThisGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
// End Cross Module References
	void UThisGameInstance::StaticRegisterNativesUThisGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThisGameInstance);
	UClass* Z_Construct_UClass_UThisGameInstance_NoRegister()
	{
		return UThisGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UThisGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThisGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThisGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ThisGameInstance.h" },
		{ "ModuleRelativePath", "ThisGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThisGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThisGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThisGameInstance_Statics::ClassParams = {
		&UThisGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UThisGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThisGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThisGameInstance()
	{
		if (!Z_Registration_Info_UClass_UThisGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThisGameInstance.OuterSingleton, Z_Construct_UClass_UThisGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThisGameInstance.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<UThisGameInstance>()
	{
		return UThisGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThisGameInstance);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_ThisGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_ThisGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThisGameInstance, UThisGameInstance::StaticClass, TEXT("UThisGameInstance"), &Z_Registration_Info_UClass_UThisGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThisGameInstance), 3456040726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_ThisGameInstance_h_87142881(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_ThisGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_ThisGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
