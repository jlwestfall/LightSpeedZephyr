// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAMEJAM_GameJamProjectile_generated_h
#error "GameJamProjectile.generated.h already included, missing '#pragma once' in GameJamProjectile.h"
#endif
#define GAMEJAM_GameJamProjectile_generated_h

#define GameJam_Source_GameJam_GameJamProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameJam_Source_GameJam_GameJamProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameJam_Source_GameJam_GameJamProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameJamProjectile(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_AGameJamProjectile(); \
public: \
	DECLARE_CLASS(AGameJamProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJam_Source_GameJam_GameJamProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameJamProjectile(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_AGameJamProjectile(); \
public: \
	DECLARE_CLASS(AGameJamProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJam_Source_GameJam_GameJamProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameJamProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameJamProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamProjectile(AGameJamProjectile&&); \
	NO_API AGameJamProjectile(const AGameJamProjectile&); \
public:


#define GameJam_Source_GameJam_GameJamProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamProjectile(AGameJamProjectile&&); \
	NO_API AGameJamProjectile(const AGameJamProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameJamProjectile)


#define GameJam_Source_GameJam_GameJamProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGameJamProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGameJamProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Bullet() { return STRUCT_OFFSET(AGameJamProjectile, Bullet); }


#define GameJam_Source_GameJam_GameJamProjectile_h_11_PROLOG
#define GameJam_Source_GameJam_GameJamProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_GameJamProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_GameJamProjectile_h_14_RPC_WRAPPERS \
	GameJam_Source_GameJam_GameJamProjectile_h_14_INCLASS \
	GameJam_Source_GameJam_GameJamProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameJam_Source_GameJam_GameJamProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_GameJamProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_GameJamProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GameJam_Source_GameJam_GameJamProjectile_h_14_INCLASS_NO_PURE_DECLS \
	GameJam_Source_GameJam_GameJamProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameJam_Source_GameJam_GameJamProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
