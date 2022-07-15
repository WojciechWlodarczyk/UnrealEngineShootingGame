// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySeventhProject/MyGrenadeX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGrenadeX() {}
// Cross Module References
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyGrenadeX_NoRegister();
	MYSEVENTHPROJECT_API UClass* Z_Construct_UClass_AMyGrenadeX();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MySeventhProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyGrenadeX::StaticRegisterNativesAMyGrenadeX()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGrenadeX);
	UClass* Z_Construct_UClass_AMyGrenadeX_NoRegister()
	{
		return AMyGrenadeX::StaticClass();
	}
	struct Z_Construct_UClass_AMyGrenadeX_Statics
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
	UObject* (*const Z_Construct_UClass_AMyGrenadeX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MySeventhProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGrenadeX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGrenadeX.h" },
		{ "ModuleRelativePath", "MyGrenadeX.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGrenadeX_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGrenadeX.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGrenadeX_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGrenadeX, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGrenadeX_Statics::NewProp_MyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenadeX_Statics::NewProp_MyStaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGrenadeX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGrenadeX_Statics::NewProp_MyStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGrenadeX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGrenadeX>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGrenadeX_Statics::ClassParams = {
		&AMyGrenadeX::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGrenadeX_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenadeX_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGrenadeX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGrenadeX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGrenadeX()
	{
		if (!Z_Registration_Info_UClass_AMyGrenadeX.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGrenadeX.OuterSingleton, Z_Construct_UClass_AMyGrenadeX_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGrenadeX.OuterSingleton;
	}
	template<> MYSEVENTHPROJECT_API UClass* StaticClass<AMyGrenadeX>()
	{
		return AMyGrenadeX::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGrenadeX);
	struct Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenadeX_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenadeX_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGrenadeX, AMyGrenadeX::StaticClass, TEXT("AMyGrenadeX"), &Z_Registration_Info_UClass_AMyGrenadeX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGrenadeX), 560985349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenadeX_h_3299552389(TEXT("/Script/MySeventhProject"),
		Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenadeX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MySeventhProject_5_0_Source_MySeventhProject_MyGrenadeX_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
