// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAM_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define GAMEJAM_PlayerPawn_generated_h

#define GameJam_Source_GameJam_PlayerPawn_h_12_RPC_WRAPPERS
#define GameJam_Source_GameJam_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameJam_Source_GameJam_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameJam_Source_GameJam_PlayerPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend GAMEJAM_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameJam_Source_GameJam_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define GameJam_Source_GameJam_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define GameJam_Source_GameJam_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerComponent() { return STRUCT_OFFSET(APlayerPawn, PlayerComponent); } \
	FORCEINLINE static uint32 __PPO__OurCamera() { return STRUCT_OFFSET(APlayerPawn, OurCamera); }


#define GameJam_Source_GameJam_PlayerPawn_h_9_PROLOG
#define GameJam_Source_GameJam_PlayerPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_PlayerPawn_h_12_RPC_WRAPPERS \
	GameJam_Source_GameJam_PlayerPawn_h_12_INCLASS \
	GameJam_Source_GameJam_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameJam_Source_GameJam_PlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJam_Source_GameJam_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GameJam_Source_GameJam_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameJam_Source_GameJam_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	GameJam_Source_GameJam_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameJam_Source_GameJam_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
