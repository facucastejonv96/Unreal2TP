// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/EnemyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	UNREAL2TP_API UFunction* Z_Construct_UFunction_AEnemyController_OnPawnDetected();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPCharacter_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
		UClass* Class = AEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AEnemyController::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics
	{
		struct EnemyController_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnPawnDetected_Parms, DetectedPawns), METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(EnemyController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerDetected_MetaData[];
#endif
		static void NewProp_bIsPlayerDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyController_OnPawnDetected, "OnPawnDetected" }, // 2915892208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, Target), Z_Construct_UClass_AUnreal2TPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected_SetBit(void* Obj)
	{
		((AEnemyController*)Obj)->bIsPlayerDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected = { "bIsPlayerDetected", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyController), &Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAngle_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAngle = { "AISightAngle", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AISightAngle), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AILoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_bIsPlayerDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AISightRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
		&AEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyController, 338987353);
	template<> UNREAL2TP_API UClass* StaticClass<AEnemyController>()
	{
		return AEnemyController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyController(Z_Construct_UClass_AEnemyController, &AEnemyController::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
