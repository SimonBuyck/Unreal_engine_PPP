// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef THETRAVELERSJOURNEY_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define THETRAVELERSJOURNEY_HealthComponent_generated_h

#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_SPARSE_DATA
#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTravelersJourney"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTravelersJourney"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ability() { return STRUCT_OFFSET(UHealthComponent, Ability); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UHealthComponent, DefaultHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UHealthComponent, Health); }


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_10_PROLOG
#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_RPC_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_INCLASS \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAVELERSJOURNEY_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheTravelersJourney_Source_TheTravelersJourney_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
