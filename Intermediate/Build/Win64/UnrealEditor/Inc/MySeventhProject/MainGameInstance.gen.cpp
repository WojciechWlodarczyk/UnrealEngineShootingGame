// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MainGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameInstance() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_UMainGameInstance_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_UMainGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
// End Cross Module References
	void UMainGameInstance::StaticRegisterNativesUMainGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainGameInstance);
	UClass* Z_Construct_UClass_UMainGameInstance_NoRegister()
	{
		return UMainGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainGameInstance.h" },
		{ "ModuleRelativePath", "MainGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGameInstance_Statics::ClassParams = {
		&UMainGameInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton, Z_Construct_UClass_UMainGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<UMainGameInstance>()
	{
		return UMainGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameInstance);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MainGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MainGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainGameInstance, UMainGameInstance::StaticClass, TEXT("UMainGameInstance"), &Z_Registration_Info_UClass_UMainGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGameInstance), 3247912408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MainGameInstance_h_4025434452(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MainGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MainGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
