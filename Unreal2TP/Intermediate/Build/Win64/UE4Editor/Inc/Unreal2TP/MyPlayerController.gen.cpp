// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREAL2TP_API UClass* Z_Construct_UClass_AUnreal2TPCharacter_NoRegister();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lost_MetaData[];
#endif
		static void NewProp_Lost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Lost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRespawning_MetaData[];
#endif
		static void NewProp_IsRespawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRespawning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, CharacterClass), Z_Construct_UClass_AUnreal2TPCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_TimeToRespawn_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_TimeToRespawn = { "TimeToRespawn", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, TimeToRespawn), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_TimeToRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_TimeToRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->Lost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost = { "Lost", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->IsRespawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning = { "IsRespawning", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_TimeToRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Lost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsRespawning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 1158280025);
	template<> UNREAL2TP_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
