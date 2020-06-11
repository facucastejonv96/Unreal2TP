// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/CharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
// End Cross Module References
	void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
	{
		return UCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aiming_MetaData[];
#endif
		static void NewProp_Aiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Aiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[];
#endif
		static void NewProp_Moving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "CharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->Aiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "CharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving_SetBit(void* Obj)
	{
		((UCharacterAnimInstance*)Obj)->Moving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Aiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Moving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
		&UCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAnimInstance, 3064119853);
	template<> UNREAL2TP_API UClass* StaticClass<UCharacterAnimInstance>()
	{
		return UCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAnimInstance(Z_Construct_UClass_UCharacterAnimInstance, &UCharacterAnimInstance::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("UCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
