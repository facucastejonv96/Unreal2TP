// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AEnemy_Server_Aim();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AEnemy_Server_StartShooting();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AEnemy_Server_StopShooting();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AEnemy_Server_Unaim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREAL2TP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AEnemy_Server_Aim = FName(TEXT("Server_Aim"));
	void AEnemy::Server_Aim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Server_Aim),NULL);
	}
	static FName NAME_AEnemy_Server_StartShooting = FName(TEXT("Server_StartShooting"));
	void AEnemy::Server_StartShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Server_StartShooting),NULL);
	}
	static FName NAME_AEnemy_Server_StopShooting = FName(TEXT("Server_StopShooting"));
	void AEnemy::Server_StopShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Server_StopShooting),NULL);
	}
	static FName NAME_AEnemy_Server_Unaim = FName(TEXT("Server_Unaim"));
	void AEnemy::Server_Unaim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Server_Unaim),NULL);
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_Aim", &AEnemy::execServer_Aim },
			{ "Server_StartShooting", &AEnemy::execServer_StartShooting },
			{ "Server_StopShooting", &AEnemy::execServer_StopShooting },
			{ "Server_Unaim", &AEnemy::execServer_Unaim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Server_Aim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Server_Aim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Server_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "Server_Aim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Server_Aim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Server_Aim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Server_Aim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Server_Aim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "Server_StartShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Server_StartShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Server_StartShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "Server_StopShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Server_StopShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Server_StopShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Server_Unaim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Server_Unaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Server_Unaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "Server_Unaim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Server_Unaim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Server_Unaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Server_Unaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Server_Unaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shooting_MetaData[];
#endif
		static void NewProp_Shooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_MetaData[];
#endif
		static void NewProp_Aiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Aiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ready_MetaData[];
#endif
		static void NewProp_Ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ready;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggering_MetaData[];
#endif
		static void NewProp_Triggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Triggering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hitting_MetaData[];
#endif
		static void NewProp_Hitting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hitting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Server_Aim, "Server_Aim" }, // 3979465950
		{ &Z_Construct_UFunction_AEnemy_Server_StartShooting, "Server_StartShooting" }, // 1498421162
		{ &Z_Construct_UFunction_AEnemy_Server_StopShooting, "Server_StopShooting" }, // 829568753
		{ &Z_Construct_UFunction_AEnemy_Server_Unaim, "Server_Unaim" }, // 1531091160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->Shooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting = { "Shooting", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->Aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, FireRate), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Ready_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_Ready_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->Ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Ready_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Ready_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->Triggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering = { "Triggering", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->Hitting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting = { "Hitting", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, Life), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, BulletClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_DamageSound_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_DamageSound = { "DamageSound", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, DamageSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_DamageSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_DamageSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, FireSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_BulletSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_BulletSpawn = { "BulletSpawn", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, BulletSpawn), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_BulletSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_BulletSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Shooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Aiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Ready,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Triggering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Hitting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_Life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_DamageSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_BulletSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy, 2315906384);
	template<> UNREAL2TP_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy(Z_Construct_UClass_AEnemy, &AEnemy::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
