// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_AbilityComponent_generated_h
#error "AbilityComponent.generated.h already included, missing '#pragma once' in AbilityComponent.h"
#endif
#define MYPROJECT_AbilityComponent_generated_h

#define MyProject_Source_MyProject_AbilityComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilities_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FAbilities>();

#define MyProject_Source_MyProject_AbilityComponent_h_40_SPARSE_DATA
#define MyProject_Source_MyProject_AbilityComponent_h_40_RPC_WRAPPERS
#define MyProject_Source_MyProject_AbilityComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_AbilityComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilityComponent(); \
	friend struct Z_Construct_UClass_AAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(AAbilityComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AAbilityComponent)


#define MyProject_Source_MyProject_AbilityComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAAbilityComponent(); \
	friend struct Z_Construct_UClass_AAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(AAbilityComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AAbilityComponent)


#define MyProject_Source_MyProject_AbilityComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilityComponent(AAbilityComponent&&); \
	NO_API AAbilityComponent(const AAbilityComponent&); \
public:


#define MyProject_Source_MyProject_AbilityComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilityComponent(AAbilityComponent&&); \
	NO_API AAbilityComponent(const AAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilityComponent)


#define MyProject_Source_MyProject_AbilityComponent_h_40_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_AbilityComponent_h_37_PROLOG
#define MyProject_Source_MyProject_AbilityComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_AbilityComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_AbilityComponent_h_40_SPARSE_DATA \
	MyProject_Source_MyProject_AbilityComponent_h_40_RPC_WRAPPERS \
	MyProject_Source_MyProject_AbilityComponent_h_40_INCLASS \
	MyProject_Source_MyProject_AbilityComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_AbilityComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_AbilityComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_AbilityComponent_h_40_SPARSE_DATA \
	MyProject_Source_MyProject_AbilityComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_AbilityComponent_h_40_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_AbilityComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_AbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
