// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CooldownComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCooldownComponent() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UCooldownComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCooldownComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UCooldownComponent::execStartCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCooldown();
		P_NATIVE_END;
	}
	void UCooldownComponent::StaticRegisterNativesUCooldownComponent()
	{
		UClass* Class = UCooldownComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCooldown", &UCooldownComponent::execStartCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CooldownComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCooldownComponent, nullptr, "StartCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCooldownComponent_StartCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCooldownComponent_StartCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCooldownComponent_NoRegister()
	{
		return UCooldownComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCooldownComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCast_MetaData[];
#endif
		static void NewProp_CanCast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCooldownTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCooldownComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCooldownComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCooldownComponent_StartCooldown, "StartCooldown" }, // 47797626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCooldownComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CooldownComponent.h" },
		{ "ModuleRelativePath", "Public/CooldownComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast_MetaData[] = {
		{ "Category", "CooldownComponent" },
		{ "ModuleRelativePath", "Public/CooldownComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast_SetBit(void* Obj)
	{
		((UCooldownComponent*)Obj)->CanCast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast = { "CanCast", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCooldownComponent), &Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CooldownTimer_MetaData[] = {
		{ "Category", "CooldownComponent" },
		{ "ModuleRelativePath", "Public/CooldownComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCooldownComponent, CooldownTimer), METADATA_PARAMS(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCooldownComponent_Statics::NewProp_DefaultCooldownTimer_MetaData[] = {
		{ "Category", "cooldown" },
		{ "ModuleRelativePath", "Public/CooldownComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCooldownComponent_Statics::NewProp_DefaultCooldownTimer = { "DefaultCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCooldownComponent, DefaultCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_DefaultCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownComponent_Statics::NewProp_DefaultCooldownTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCooldownComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CanCast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCooldownComponent_Statics::NewProp_CooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCooldownComponent_Statics::NewProp_DefaultCooldownTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCooldownComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCooldownComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCooldownComponent_Statics::ClassParams = {
		&UCooldownComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCooldownComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCooldownComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCooldownComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCooldownComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCooldownComponent, 3029914073);
	template<> MYPROJECT_API UClass* StaticClass<UCooldownComponent>()
	{
		return UCooldownComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCooldownComponent(Z_Construct_UClass_UCooldownComponent, &UCooldownComponent::StaticClass, TEXT("/Script/MyProject"), TEXT("UCooldownComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCooldownComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
