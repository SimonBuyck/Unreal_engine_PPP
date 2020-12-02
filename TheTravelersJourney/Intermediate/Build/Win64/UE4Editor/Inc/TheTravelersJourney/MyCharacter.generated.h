// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef THETRAVELERSJOURNEY_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define THETRAVELERSJOURNEY_MyCharacter_generated_h

#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_SPARSE_DATA
#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_RPC_WRAPPERS \
	virtual void TraceAbilityForward_Implementation(); \
	virtual void TraceForward_Implementation(); \
 \
	DECLARE_FUNCTION(execTraceAbilityForward); \
	DECLARE_FUNCTION(execTraceForward); \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execSpawnAbility);


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceAbilityForward); \
	DECLARE_FUNCTION(execTraceForward); \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execSpawnAbility);


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_EVENT_PARMS
#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_CALLBACK_WRAPPERS
#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTravelersJourney"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTravelersJourney"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Arm() { return STRUCT_OFFSET(AMyCharacter, Arm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__TraceDistance() { return STRUCT_OFFSET(AMyCharacter, TraceDistance); }


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_11_PROLOG \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_EVENT_PARMS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_RPC_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_CALLBACK_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_INCLASS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_CALLBACK_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAVELERSJOURNEY_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheTravelersJourney_Source_TheTravelersJourney_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
