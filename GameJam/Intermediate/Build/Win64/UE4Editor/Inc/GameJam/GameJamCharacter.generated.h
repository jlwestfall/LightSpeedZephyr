// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAM_GameJamCharacter_generated_h
#error "GameJamCharacter.generated.h already included, missing '#pragma once' in GameJamCharacter.h"
#endif
#define GAMEJAM_GameJamCharacter_generated_h

#define GameJam_Source_GameJam_GameJamCharacter_h_14_RPC_WRAPPERS
#define GameJam_Source_GameJam_GameJamCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GameJam_Source_GameJam_GameJamCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameJamCharacter(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_AGameJamCharacter(); \
public: \
	DECLARE_CLASS(AGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameJam_Source_GameJam_GameJamCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameJamCharacter(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_AGameJamCharacter(); \
public: \
	DECLARE_CLASS(AGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameJam_Source_GameJam_GameJamCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameJamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameJamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamCharacter(AGameJamCharacter&&); \
	NO_API AGameJamCharacter(const AGameJamCharacter&); \
public:


#define GameJam_Source_GameJam_GameJamCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamCharacter(AGameJamCharacter&&); \
	NO_API AGameJamCharacter(const AGameJamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameJamCharacter)


#define GameJam_Source_GameJam_GameJamCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGameJamCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGameJamCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGameJamCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGameJamCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGameJamCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGameJamCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGameJamCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGameJamCharacter, L_MotionController); }


#define GameJam_Source_GameJam_GameJamCharacter_h_11_PROLOG
#define GameJam_Source_GameJam_GameJamCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_GameJamCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_GameJamCharacter_h_14_RPC_WRAPPERS \
	GameJam_Source_GameJam_GameJamCharacter_h_14_INCLASS \
	GameJam_Source_GameJam_GameJamCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameJam_Source_GameJam_GameJamCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_GameJamCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_GameJamCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GameJam_Source_GameJam_GameJamCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GameJam_Source_GameJam_GameJamCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameJam_Source_GameJam_GameJamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
