// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySeventhProject_init() {}
	MYSEVENTHPROJECT_API UFunction* Z_Construct_UDelegateFunction_MySeventhProject_DeathDelegate__DelegateSignature();
	MYSEVENTHPROJECT_API UFunction* Z_Construct_UDelegateFunction_MySeventhProject_HitDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MySeventhProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MySeventhProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MySeventhProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MySeventhProject_DeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MySeventhProject_HitDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MySeventhProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8ECE2AAB,
				0x4F654728,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MySeventhProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MySeventhProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MySeventhProject(Z_Construct_UPackage__Script_MySeventhProject, TEXT("/Script/MySeventhProject"), Z_Registration_Info_UPackage__Script_MySeventhProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8ECE2AAB, 0x4F654728));
PRAGMA_ENABLE_DEPRECATION_WARNINGS