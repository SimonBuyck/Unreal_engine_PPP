// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CollidingPawn_generated_h
#error "CollidingPawn.generated.h already included, missing '#pragma once' in CollidingPawn.h"
#endif
#define MYPROJECT_CollidingPawn_generated_h

#define MyProject_Source_MyProject_CollidingPawn_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_CollidingPawn_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_CollidingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_CollidingPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define MyProject_Source_MyProject_CollidingPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define MyProject_Source_MyProject_CollidingPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollidingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollidingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public:


#define MyProject_Source_MyProject_CollidingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollidingPawn)


#define MyProject_Source_MyProject_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OurCameraSpringArm() { return STRUCT_OFFSET(ACollidingPawn, OurCameraSpringArm); }


#define MyProject_Source_MyProject_CollidingPawn_h_9_PROLOG
#define MyProject_Source_MyProject_CollidingPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CollidingPawn_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_CollidingPawn_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_CollidingPawn_h_12_INCLASS \
	MyProject_Source_MyProject_CollidingPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_CollidingPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CollidingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CollidingPawn_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_CollidingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CollidingPawn_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CollidingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ACollidingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_CollidingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
