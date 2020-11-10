// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/CollidingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawn() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ACollidingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
	}
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACollidingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakingDamage_MetaData[];
#endif
		static void NewProp_TakingDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TakingDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollidingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CollidingPawn.h" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurCameraSpringArm_MetaData[] = {
		{ "Category", "CollidingPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurCameraSpringArm = { "OurCameraSpringArm", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, OurCameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurCameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurCameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MyTimeline_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MyTimeline = { "MyTimeline", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, MyTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MyTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MyTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthCurve_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthCurve = { "HealthCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, HealthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	void Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage_SetBit(void* Obj)
	{
		((ACollidingPawn*)Obj)->TakingDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage = { "TakingDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollidingPawn), &Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_PreviousHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, PreviousHealth), METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_PreviousHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_PreviousHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_FullHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_FullHealth = { "FullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, FullHealth), METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_FullHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, Health), METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "MovementSpeed" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent = { "OurMovementComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, OurMovementComponent), Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData[] = {
		{ "Comment", "// Sets default values for this pawn's properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
		{ "ToolTip", "Sets default values for this pawn's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem = { "OurParticleSystem", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollidingPawn, OurParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollidingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurCameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MyTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_TakingDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_PreviousHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_FullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollidingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollidingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollidingPawn_Statics::ClassParams = {
		&ACollidingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACollidingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollidingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollidingPawn, 3383785418);
	template<> MYPROJECT_API UClass* StaticClass<ACollidingPawn>()
	{
		return ACollidingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollidingPawn(Z_Construct_UClass_ACollidingPawn, &ACollidingPawn::StaticClass, TEXT("/Script/MyProject"), TEXT("ACollidingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
