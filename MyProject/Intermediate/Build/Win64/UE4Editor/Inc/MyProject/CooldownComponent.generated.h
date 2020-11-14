// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CooldownComponent_generated_h
#error "CooldownComponent.generated.h already included, missing '#pragma once' in CooldownComponent.h"
#endif
#define MYPROJECT_CooldownComponent_generated_h

#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCooldown);


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCooldown);


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCooldownComponent(); \
	friend struct Z_Construct_UClass_UCooldownComponent_Statics; \
public: \
	DECLARE_CLASS(UCooldownComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCooldownComponent)


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCooldownComponent(); \
	friend struct Z_Construct_UClass_UCooldownComponent_Statics; \
public: \
	DECLARE_CLASS(UCooldownComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCooldownComponent)


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCooldownComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCooldownComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCooldownComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCooldownComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCooldownComponent(UCooldownComponent&&); \
	NO_API UCooldownComponent(const UCooldownComponent&); \
public:


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCooldownComponent(UCooldownComponent&&); \
	NO_API UCooldownComponent(const UCooldownComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCooldownComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCooldownComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCooldownComponent)


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Public_CooldownComponent_h_10_PROLOG
#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_INCLASS \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Public_CooldownComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_CooldownComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UCooldownComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Public_CooldownComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
