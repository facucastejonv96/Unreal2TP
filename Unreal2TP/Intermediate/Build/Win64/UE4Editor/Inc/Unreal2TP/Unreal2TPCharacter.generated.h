// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL2TP_Unreal2TPCharacter_generated_h
#error "Unreal2TPCharacter.generated.h already included, missing '#pragma once' in Unreal2TPCharacter.h"
#endif
#define UNREAL2TP_Unreal2TPCharacter_generated_h

#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_SPARSE_DATA
#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_RPC_WRAPPERS \
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


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_EVENT_PARMS
#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_CALLBACK_WRAPPERS
#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnreal2TPCharacter(); \
	friend struct Z_Construct_UClass_AUnreal2TPCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnreal2TPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AUnreal2TPCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAUnreal2TPCharacter(); \
	friend struct Z_Construct_UClass_AUnreal2TPCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnreal2TPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AUnreal2TPCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnreal2TPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnreal2TPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnreal2TPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnreal2TPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnreal2TPCharacter(AUnreal2TPCharacter&&); \
	NO_API AUnreal2TPCharacter(const AUnreal2TPCharacter&); \
public:


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnreal2TPCharacter(AUnreal2TPCharacter&&); \
	NO_API AUnreal2TPCharacter(const AUnreal2TPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnreal2TPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnreal2TPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnreal2TPCharacter)


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUnreal2TPCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUnreal2TPCharacter, FollowCamera); }


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_8_PROLOG \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_EVENT_PARMS


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_RPC_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_INCLASS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_INCLASS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL2TP_API UClass* StaticClass<class AUnreal2TPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal2TP_Source_Unreal2TP_Unreal2TPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
