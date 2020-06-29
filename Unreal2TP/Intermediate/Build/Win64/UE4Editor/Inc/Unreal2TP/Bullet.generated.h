// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREAL2TP_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define UNREAL2TP_Bullet_generated_h

#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_SPARSE_DATA
#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_RPC_WRAPPERS \
	virtual void NetMulticast_OnHit_Implementation(); \
 \
	DECLARE_FUNCTION(execOnBulletHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBulletHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetMulticast_OnHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NetMulticast_OnHit_Implementation(); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMulticast_OnHit_Implementation(); \
 \
	DECLARE_FUNCTION(execOnBulletHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBulletHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNetMulticast_OnHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NetMulticast_OnHit_Implementation(); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_EVENT_PARMS
#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_CALLBACK_WRAPPERS
#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ABullet, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__BulletMovement() { return STRUCT_OFFSET(ABullet, BulletMovement); }


#define Unreal2TP_Source_Unreal2TP_Bullet_h_9_PROLOG \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_EVENT_PARMS


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_RPC_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_INCLASS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal2TP_Source_Unreal2TP_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_CALLBACK_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL2TP_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal2TP_Source_Unreal2TP_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
