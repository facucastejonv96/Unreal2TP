// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/MyGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AMyGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	UNREAL2TP_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AMyGameState::StaticRegisterNativesAMyGameState()
	{
	}
	UClass* Z_Construct_UClass_AMyGameState_NoRegister()
	{
		return AMyGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPointList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPointList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPointList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemiesLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemiesLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameState.h" },
		{ "ModuleRelativePath", "MyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList = { "SpawnPointList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameState, SpawnPointList), METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList_Inner = { "SpawnPointList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameState, Enemy), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "MyGameState" },
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameState, Time), METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::NewProp_EnemiesLeft_MetaData[] = {
		{ "Category", "MyGameState" },
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_EnemiesLeft = { "EnemiesLeft", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameState, EnemiesLeft), METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::NewProp_EnemiesLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::NewProp_EnemiesLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnPointList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_EnemiesLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameState_Statics::ClassParams = {
		&AMyGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameState, 1957563806);
	template<> UNREAL2TP_API UClass* StaticClass<AMyGameState>()
	{
		return AMyGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameState(Z_Construct_UClass_AMyGameState, &AMyGameState::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AMyGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
