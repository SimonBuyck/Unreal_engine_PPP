// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THETRAVELERSJOURNEY_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define THETRAVELERSJOURNEY_InteractInterface_generated_h

#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_SPARSE_DATA
#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_EVENT_PARMS \
	struct InteractInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_CALLBACK_WRAPPERS
#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THETRAVELERSJOURNEY_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THETRAVELERSJOURNEY_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THETRAVELERSJOURNEY_API UInteractInterface(UInteractInterface&&); \
	THETRAVELERSJOURNEY_API UInteractInterface(const UInteractInterface&); \
public:


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THETRAVELERSJOURNEY_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THETRAVELERSJOURNEY_API UInteractInterface(UInteractInterface&&); \
	THETRAVELERSJOURNEY_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THETRAVELERSJOURNEY_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheTravelersJourney"), THETRAVELERSJOURNEY_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_10_PROLOG \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_EVENT_PARMS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_RPC_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_CALLBACK_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_SPARSE_DATA \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_CALLBACK_WRAPPERS \
	TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAVELERSJOURNEY_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheTravelersJourney_Source_TheTravelersJourney_Public_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
