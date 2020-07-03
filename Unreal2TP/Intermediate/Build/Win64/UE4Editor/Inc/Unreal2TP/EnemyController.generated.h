// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREAL2TP_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define UNREAL2TP_EnemyController_generated_h

#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_SPARSE_DATA
#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal2TP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController)


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_PRIVATE_PROPERTY_OFFSET
#define Unreal2TP_Source_Unreal2TP_EnemyController_h_13_PROLOG
#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_RPC_WRAPPERS \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_INCLASS \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal2TP_Source_Unreal2TP_EnemyController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_PRIVATE_PROPERTY_OFFSET \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_SPARSE_DATA \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_INCLASS_NO_PURE_DECLS \
	Unreal2TP_Source_Unreal2TP_EnemyController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL2TP_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal2TP_Source_Unreal2TP_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
