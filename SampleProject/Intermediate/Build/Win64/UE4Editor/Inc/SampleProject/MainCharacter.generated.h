// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLEPROJECT_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define SAMPLEPROJECT_MainCharacter_generated_h

#define SampleProject_Source_SampleProject_MainCharacter_h_12_SPARSE_DATA
#define SampleProject_Source_SampleProject_MainCharacter_h_12_RPC_WRAPPERS
#define SampleProject_Source_SampleProject_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SampleProject_Source_SampleProject_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define SampleProject_Source_SampleProject_MainCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define SampleProject_Source_SampleProject_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define SampleProject_Source_SampleProject_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define SampleProject_Source_SampleProject_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define SampleProject_Source_SampleProject_MainCharacter_h_9_PROLOG
#define SampleProject_Source_SampleProject_MainCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_MainCharacter_h_12_SPARSE_DATA \
	SampleProject_Source_SampleProject_MainCharacter_h_12_RPC_WRAPPERS \
	SampleProject_Source_SampleProject_MainCharacter_h_12_INCLASS \
	SampleProject_Source_SampleProject_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SampleProject_Source_SampleProject_MainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_MainCharacter_h_12_SPARSE_DATA \
	SampleProject_Source_SampleProject_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLEPROJECT_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SampleProject_Source_SampleProject_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
