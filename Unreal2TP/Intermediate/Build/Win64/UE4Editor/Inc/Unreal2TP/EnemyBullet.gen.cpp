// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/EnemyBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBullet() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemyBullet_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemyBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
// End Cross Module References
	void AEnemyBullet::StaticRegisterNativesAEnemyBullet()
	{
	}
	UClass* Z_Construct_UClass_AEnemyBullet_NoRegister()
	{
		return AEnemyBullet::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyBullet.h" },
		{ "ModuleRelativePath", "EnemyBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBullet_Statics::ClassParams = {
		&AEnemyBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyBullet, 1683474407);
	template<> UNREAL2TP_API UClass* StaticClass<AEnemyBullet>()
	{
		return AEnemyBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyBullet(Z_Construct_UClass_AEnemyBullet, &AEnemyBullet::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AEnemyBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
