// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal2TP/ThirdPersonAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonAnimInstance() {}
// Cross Module References
	UNREAL2TP_API UClass* Z_Construct_UClass_UThirdPersonAnimInstance_NoRegister();
	UNREAL2TP_API UClass* Z_Construct_UClass_UThirdPersonAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Unreal2TP();
// End Cross Module References
	void UThirdPersonAnimInstance::StaticRegisterNativesUThirdPersonAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UThirdPersonAnimInstance_NoRegister()
	{
		return UThirdPersonAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UThirdPersonAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThirdPersonAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal2TP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ThirdPersonAnimInstance.h" },
		{ "ModuleRelativePath", "ThirdPersonAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThirdPersonAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThirdPersonAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThirdPersonAnimInstance_Statics::ClassParams = {
		&UThirdPersonAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPersonAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThirdPersonAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThirdPersonAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThirdPersonAnimInstance, 1536993400);
	template<> UNREAL2TP_API UClass* StaticClass<UThirdPersonAnimInstance>()
	{
		return UThirdPersonAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThirdPersonAnimInstance(Z_Construct_UClass_UThirdPersonAnimInstance, &UThirdPersonAnimInstance::StaticClass, TEXT("/Script/Unreal2TP"), TEXT("UThirdPersonAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThirdPersonAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
