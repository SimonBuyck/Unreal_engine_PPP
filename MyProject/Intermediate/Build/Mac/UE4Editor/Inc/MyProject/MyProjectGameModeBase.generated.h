// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef MYPROJECT_MyProjectGameModeBase_generated_h
#error "MyProjectGameModeBase.generated.h already included, missing '#pragma once' in MyProjectGameModeBase.h"
#endif
#define MYPROJECT_MyProjectGameModeBase_generated_h

#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_SPARSE_DATA
#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectGameModeBase)


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectGameModeBase)


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectGameModeBase(AMyProjectGameModeBase&&); \
	NO_API AMyProjectGameModeBase(const AMyProjectGameModeBase&); \
public:


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectGameModeBase(AMyProjectGameModeBase&&); \
	NO_API AMyProjectGameModeBase(const AMyProjectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameModeBase)


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AMyProjectGameModeBase, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMyProjectGameModeBase, CurrentWidget); }


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_14_PROLOG
#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_INCLASS \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
