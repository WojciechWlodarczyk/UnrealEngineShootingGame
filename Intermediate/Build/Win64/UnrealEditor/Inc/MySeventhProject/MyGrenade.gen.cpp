// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MyGrenade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGrenade() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyGrenade_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyGrenade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyGrenade::StaticRegisterNativesAMyGrenade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGrenade);
	UClass* Z_Construct_UClass_AMyGrenade_NoRegister()
	{
		return AMyGrenade::StaticClass();
	}
	struct Z_Construct_UClass_AMyGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGrenade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGrenade.h" },
		{ "ModuleRelativePath", "MyGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGrenade_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGrenade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGrenade_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGrenade, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGrenade_Statics::NewProp_MyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenade_Statics::NewProp_MyStaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGrenade_Statics::NewProp_MyStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGrenade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGrenade_Statics::ClassParams = {
		&AMyGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGrenade()
	{
		if (!Z_Registration_Info_UClass_AMyGrenade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGrenade.OuterSingleton, Z_Construct_UClass_AMyGrenade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGrenade.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<AMyGrenade>()
	{
		return AMyGrenade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGrenade);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGrenade, AMyGrenade::StaticClass, TEXT("AMyGrenade"), &Z_Registration_Info_UClass_AMyGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGrenade), 4029219739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenade_h_3840913977(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
