// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTravelersJourney/TheTravelersJourneyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheTravelersJourneyGameModeBase() {}
// Cross Module References
	THETRAVELERSJOURNEY_API UClass* Z_Construct_UClass_ATheTravelersJourneyGameModeBase_NoRegister();
	THETRAVELERSJOURNEY_API UClass* Z_Construct_UClass_ATheTravelersJourneyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheTravelersJourney();
// End Cross Module References
	void ATheTravelersJourneyGameModeBase::StaticRegisterNativesATheTravelersJourneyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATheTravelersJourneyGameModeBase_NoRegister()
	{
		return ATheTravelersJourneyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTravelersJourney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheTravelersJourneyGameModeBase.h" },
		{ "ModuleRelativePath", "TheTravelersJourneyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheTravelersJourneyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::ClassParams = {
		&ATheTravelersJourneyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheTravelersJourneyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheTravelersJourneyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheTravelersJourneyGameModeBase, 2274823279);
	template<> THETRAVELERSJOURNEY_API UClass* StaticClass<ATheTravelersJourneyGameModeBase>()
	{
		return ATheTravelersJourneyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheTravelersJourneyGameModeBase(Z_Construct_UClass_ATheTravelersJourneyGameModeBase, &ATheTravelersJourneyGameModeBase::StaticClass, TEXT("/Script/TheTravelersJourney"), TEXT("ATheTravelersJourneyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheTravelersJourneyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
