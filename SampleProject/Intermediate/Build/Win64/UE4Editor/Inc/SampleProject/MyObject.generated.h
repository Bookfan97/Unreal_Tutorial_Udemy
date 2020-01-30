// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLEPROJECT_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define SAMPLEPROJECT_MyObject_generated_h

#define SampleProject_Source_SampleProject_MyObject_h_15_SPARSE_DATA
#define SampleProject_Source_SampleProject_MyObject_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyFunction(); \
		P_NATIVE_END; \
	}


#define SampleProject_Source_SampleProject_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MyFunction(); \
		P_NATIVE_END; \
	}


#define SampleProject_Source_SampleProject_MyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define SampleProject_Source_SampleProject_MyObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define SampleProject_Source_SampleProject_MyObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public:


#define SampleProject_Source_SampleProject_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyObject)


#define SampleProject_Source_SampleProject_MyObject_h_15_PRIVATE_PROPERTY_OFFSET
#define SampleProject_Source_SampleProject_MyObject_h_12_PROLOG
#define SampleProject_Source_SampleProject_MyObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_MyObject_h_15_SPARSE_DATA \
	SampleProject_Source_SampleProject_MyObject_h_15_RPC_WRAPPERS \
	SampleProject_Source_SampleProject_MyObject_h_15_INCLASS \
	SampleProject_Source_SampleProject_MyObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SampleProject_Source_SampleProject_MyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_MyObject_h_15_SPARSE_DATA \
	SampleProject_Source_SampleProject_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_MyObject_h_15_INCLASS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLEPROJECT_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SampleProject_Source_SampleProject_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
