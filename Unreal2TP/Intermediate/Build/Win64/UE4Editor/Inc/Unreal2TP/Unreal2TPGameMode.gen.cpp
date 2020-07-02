// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/Unreal2TPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal2TPGameMode() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPGameMode_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AUnreal2TPGameMode::StaticRegisterNativesAUnreal2TPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnreal2TPGameMode_NoRegister()
	{
		return AUnreal2TPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal2TPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemyAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal2TPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unreal2TPGameMode.h" },
		{ "ModuleRelativePath", "Unreal2TPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyAmount_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Unreal2TPGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyAmount = { "EnemyAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPGameMode, EnemyAmount), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Unreal2TPGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPGameMode, EnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnreal2TPGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPGameMode_Statics::NewProp_EnemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal2TPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal2TPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal2TPGameMode_Statics::ClassParams = {
		&AUnreal2TPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnreal2TPGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal2TPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal2TPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal2TPGameMode, 1694896906);
	template<> UNREAL2TP_API UClass* StaticClass<AUnreal2TPGameMode>()
	{
		return AUnreal2TPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal2TPGameMode(Z_Construct_UClass_AUnreal2TPGameMode, &AUnreal2TPGameMode::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AUnreal2TPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal2TPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
