// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/AbilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent() {}
// Cross Module References
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilities();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYPROJECT_API UClass* Z_Construct_UClass_AAbilityComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AAbilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FAbilities::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FAbilities_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilities, Z_Construct_UPackage__Script_MyProject(), TEXT("Abilities"), sizeof(FAbilities), Get_Z_Construct_UScriptStruct_FAbilities_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FAbilities>()
{
	return FAbilities::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilities(FAbilities::StaticStruct, TEXT("/Script/MyProject"), TEXT("Abilities"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFAbilities
{
	FScriptStruct_MyProject_StaticRegisterNativesFAbilities()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Abilities")),new UScriptStruct::TCppStructOps<FAbilities>);
	}
} ScriptStruct_MyProject_StaticRegisterNativesFAbilities;
	struct Z_Construct_UScriptStruct_FAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilities>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_description_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, Points), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_category_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, category), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilities, rarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_rarity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_rarity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Abilities",
		sizeof(FAbilities),
		alignof(FAbilities),
		Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilities()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilities_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Abilities"), sizeof(FAbilities), Get_Z_Construct_UScriptStruct_FAbilities_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilities_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilities_Hash() { return 556825228U; }
	void AAbilityComponent::StaticRegisterNativesAAbilityComponent()
	{
	}
	UClass* Z_Construct_UClass_AAbilityComponent_NoRegister()
	{
		return AAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_AAbilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityComponent.h" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilityComponent_Statics::NewProp_AbilityData_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "// Sets default values for this actor's properties\n" },
		{ "ModuleRelativePath", "AbilityComponent.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityComponent_Statics::NewProp_AbilityData = { "AbilityData", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbilityComponent, AbilityData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilityComponent_Statics::NewProp_AbilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityComponent_Statics::NewProp_AbilityData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityComponent_Statics::NewProp_AbilityData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbilityComponent_Statics::ClassParams = {
		&AAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityComponent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbilityComponent, 959593539);
	template<> MYPROJECT_API UClass* StaticClass<AAbilityComponent>()
	{
		return AAbilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbilityComponent(Z_Construct_UClass_AAbilityComponent, &AAbilityComponent::StaticClass, TEXT("/Script/MyProject"), TEXT("AAbilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
