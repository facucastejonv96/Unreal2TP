// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL2TP_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define UNREAL2TP_Enemy_generated_h

#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_SPARSE_DATA
#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_RPC_WRAPPERS \
	virtual void Server_Unaim_Implementation(); \
	virtual void Server_Aim_Implementation(); \
	virtual void Server_StopShooting_Implementation(); \
	virtual void Server_StartShooting_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Unaim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_Unaim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Aim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_Aim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StopShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StopShooting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StartShooting_Implementation(); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_Unaim_Implementation(); \
	virtual void Server_Aim_Implementation(); \
	virtual void Server_StopShooting_Implementation(); \
	virtual void Server_StartShooting_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Unaim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_Unaim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Aim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_Aim_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StopShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StopShooting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StartShooting_Implementation(); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_EVENT_PARMS
#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_CALLBACK_WRAPPERS
#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_PRIVATE_PROPERTY_OFFSET
#define Unreal2TP_Source_Unreal2TP_Enemy_h_11_PROLOG \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_EVENT_PARMS


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_RPC_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_INCLASS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal2TP_Source_Unreal2TP_Enemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_INCLASS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Enemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL2TP_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal2TP_Source_Unreal2TP_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
