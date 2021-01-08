// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNSHOOTERGAME_TopDownShooterGameCharacter_generated_h
#error "TopDownShooterGameCharacter.generated.h already included, missing '#pragma once' in TopDownShooterGameCharacter.h"
#endif
#define TOPDOWNSHOOTERGAME_TopDownShooterGameCharacter_generated_h

#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_SPARSE_DATA
#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownShooterGameCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterGameCharacter)


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATopDownShooterGameCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterGameCharacter)


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownShooterGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownShooterGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterGameCharacter(ATopDownShooterGameCharacter&&); \
	NO_API ATopDownShooterGameCharacter(const ATopDownShooterGameCharacter&); \
public:


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterGameCharacter(ATopDownShooterGameCharacter&&); \
	NO_API ATopDownShooterGameCharacter(const ATopDownShooterGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownShooterGameCharacter)


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopDownShooterGameCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopDownShooterGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopDownShooterGameCharacter, CursorToWorld); }


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_9_PROLOG
#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_SPARSE_DATA \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_RPC_WRAPPERS \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_INCLASS \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_SPARSE_DATA \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTERGAME_API UClass* StaticClass<class ATopDownShooterGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooterGame_4_26_Source_TopDownShooterGame_TopDownShooterGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
