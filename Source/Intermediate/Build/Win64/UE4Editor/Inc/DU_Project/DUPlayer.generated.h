// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DU_PROJECT_DUPlayer_generated_h
#error "DUPlayer.generated.h already included, missing '#pragma once' in DUPlayer.h"
#endif
#define DU_PROJECT_DUPlayer_generated_h

#define Source_Source_DU_Project_Player_DUPlayer_h_12_SPARSE_DATA
#define Source_Source_DU_Project_Player_DUPlayer_h_12_RPC_WRAPPERS
#define Source_Source_DU_Project_Player_DUPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Source_Source_DU_Project_Player_DUPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADUPlayer(); \
	friend struct Z_Construct_UClass_ADUPlayer_Statics; \
public: \
	DECLARE_CLASS(ADUPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DU_Project"), NO_API) \
	DECLARE_SERIALIZER(ADUPlayer)


#define Source_Source_DU_Project_Player_DUPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADUPlayer(); \
	friend struct Z_Construct_UClass_ADUPlayer_Statics; \
public: \
	DECLARE_CLASS(ADUPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DU_Project"), NO_API) \
	DECLARE_SERIALIZER(ADUPlayer)


#define Source_Source_DU_Project_Player_DUPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADUPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADUPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADUPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADUPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADUPlayer(ADUPlayer&&); \
	NO_API ADUPlayer(const ADUPlayer&); \
public:


#define Source_Source_DU_Project_Player_DUPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADUPlayer(ADUPlayer&&); \
	NO_API ADUPlayer(const ADUPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADUPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADUPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADUPlayer)


#define Source_Source_DU_Project_Player_DUPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define Source_Source_DU_Project_Player_DUPlayer_h_9_PROLOG
#define Source_Source_DU_Project_Player_DUPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Source_Source_DU_Project_Player_DUPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Source_Source_DU_Project_Player_DUPlayer_h_12_SPARSE_DATA \
	Source_Source_DU_Project_Player_DUPlayer_h_12_RPC_WRAPPERS \
	Source_Source_DU_Project_Player_DUPlayer_h_12_INCLASS \
	Source_Source_DU_Project_Player_DUPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Source_Source_DU_Project_Player_DUPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Source_Source_DU_Project_Player_DUPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Source_Source_DU_Project_Player_DUPlayer_h_12_SPARSE_DATA \
	Source_Source_DU_Project_Player_DUPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Source_Source_DU_Project_Player_DUPlayer_h_12_INCLASS_NO_PURE_DECLS \
	Source_Source_DU_Project_Player_DUPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DU_PROJECT_API UClass* StaticClass<class ADUPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Source_Source_DU_Project_Player_DUPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
