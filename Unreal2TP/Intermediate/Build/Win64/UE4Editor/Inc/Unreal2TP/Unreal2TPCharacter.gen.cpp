// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/Unreal2TPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal2TPCharacter() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPCharacter_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z();
	UNREAL2TP_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREAL2TP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_AUnreal2TPCharacter_Server_Aim = FName(TEXT("Server_Aim"));
	void AUnreal2TPCharacter::Server_Aim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_Aim),NULL);
	}
	static FName NAME_AUnreal2TPCharacter_Server_StartShooting = FName(TEXT("Server_StartShooting"));
	void AUnreal2TPCharacter::Server_StartShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_StartShooting),NULL);
	}
	static FName NAME_AUnreal2TPCharacter_Server_StopShooting = FName(TEXT("Server_StopShooting"));
	void AUnreal2TPCharacter::Server_StopShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_StopShooting),NULL);
	}
	static FName NAME_AUnreal2TPCharacter_Server_Unaim = FName(TEXT("Server_Unaim"));
	void AUnreal2TPCharacter::Server_Unaim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_Unaim),NULL);
	}
	static FName NAME_AUnreal2TPCharacter_Server_Y = FName(TEXT("Server_Y"));
	void AUnreal2TPCharacter::Server_Y(const float newY)
	{
		Unreal2TPCharacter_eventServer_Y_Parms Parms;
		Parms.newY=newY;
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_Y),&Parms);
	}
	static FName NAME_AUnreal2TPCharacter_Server_Z = FName(TEXT("Server_Z"));
	void AUnreal2TPCharacter::Server_Z(const float newZ)
	{
		Unreal2TPCharacter_eventServer_Z_Parms Parms;
		Parms.newZ=newZ;
		ProcessEvent(FindFunctionChecked(NAME_AUnreal2TPCharacter_Server_Z),&Parms);
	}
	void AUnreal2TPCharacter::StaticRegisterNativesAUnreal2TPCharacter()
	{
		UClass* Class = AUnreal2TPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_Aim", &AUnreal2TPCharacter::execServer_Aim },
			{ "Server_StartShooting", &AUnreal2TPCharacter::execServer_StartShooting },
			{ "Server_StopShooting", &AUnreal2TPCharacter::execServer_StopShooting },
			{ "Server_Unaim", &AUnreal2TPCharacter::execServer_Unaim },
			{ "Server_Y", &AUnreal2TPCharacter::execServer_Y },
			{ "Server_Z", &AUnreal2TPCharacter::execServer_Z },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_Aim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_StartShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_StopShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_Unaim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::NewProp_newY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::NewProp_newY = { "newY", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unreal2TPCharacter_eventServer_Y_Parms, newY), METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::NewProp_newY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::NewProp_newY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::NewProp_newY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_Y", nullptr, nullptr, sizeof(Unreal2TPCharacter_eventServer_Y_Parms), Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::NewProp_newZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::NewProp_newZ = { "newZ", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unreal2TPCharacter_eventServer_Z_Parms, newZ), METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::NewProp_newZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::NewProp_newZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::NewProp_newZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnreal2TPCharacter, nullptr, "Server_Z", nullptr, nullptr, sizeof(Unreal2TPCharacter_eventServer_Z_Parms), Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnreal2TPCharacter_NoRegister()
	{
		return AUnreal2TPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal2TPCharacter_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggering_MetaData[];
#endif
		static void NewProp_Triggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Triggering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal2TPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnreal2TPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_Aim, "Server_Aim" }, // 3465534586
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_StartShooting, "Server_StartShooting" }, // 1862345203
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_StopShooting, "Server_StopShooting" }, // 335795255
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_Unaim, "Server_Unaim" }, // 1543056617
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_Y, "Server_Y" }, // 277892986
		{ &Z_Construct_UFunction_AUnreal2TPCharacter_Server_Z, "Server_Z" }, // 1388958711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Unreal2TPCharacter.h" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting_MetaData[] = {
		{ "Category", "Unreal2TPCharacter" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting_SetBit(void* Obj)
	{
		((AUnreal2TPCharacter*)Obj)->Shooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting = { "Shooting", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnreal2TPCharacter), &Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "Unreal2TPCharacter" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming_SetBit(void* Obj)
	{
		((AUnreal2TPCharacter*)Obj)->Aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnreal2TPCharacter), &Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, FireRate), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering_MetaData[] = {
		{ "Category", "Unreal2TPCharacter" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering_SetBit(void* Obj)
	{
		((AUnreal2TPCharacter*)Obj)->Triggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering = { "Triggering", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnreal2TPCharacter), &Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Unreal2TPCharacter" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, Z), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Unreal2TPCharacter" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, Y), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Animator_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Animator = { "Animator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, Animator), Z_Construct_UClass_UCharacterAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Animator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Animator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, BulletClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletSpawn = { "BulletSpawn", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, BulletSpawn), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unreal2TPCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnreal2TPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnreal2TPCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Shooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Aiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Triggering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_Animator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_BulletSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal2TPCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal2TPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal2TPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal2TPCharacter_Statics::ClassParams = {
		&AUnreal2TPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnreal2TPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal2TPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal2TPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal2TPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal2TPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal2TPCharacter, 1392918134);
	template<> UNREAL2TP_API UClass* StaticClass<AUnreal2TPCharacter>()
	{
		return AUnreal2TPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal2TPCharacter(Z_Construct_UClass_AUnreal2TPCharacter, &AUnreal2TPCharacter::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AUnreal2TPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal2TPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
