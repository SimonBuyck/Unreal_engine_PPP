// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyCharacter::execSpawnAbility)
	{
		P_GET_STRUCT(FVector,Z_Param_Loc);
		P_GET_STRUCT(FRotator,Z_Param_Rot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAbility(Z_Param_Loc,Z_Param_Rot);
		P_NATIVE_END;
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAbility", &AMyCharacter::execSpawnAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics
	{
		struct MyCharacter_eventSpawnAbility_Parms
		{
			FVector Loc;
			FRotator Rot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacter_eventSpawnAbility_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCharacter_eventSpawnAbility_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::NewProp_Rot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::NewProp_Loc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SpawnAbility", nullptr, nullptr, sizeof(MyCharacter_eventSpawnAbility_Parms), Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCharacter_SpawnAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCharacter_SpawnAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastedAbilityIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CastedAbilityIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CastedAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MetaData[];
#endif
		static void NewProp_Dead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Dead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static void NewProp_Shield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ability3Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ability2Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ability1Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCast3_MetaData[];
#endif
		static void NewProp_CanCast3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCast3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCast2_MetaData[];
#endif
		static void NewProp_CanCast2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCast2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCast1_MetaData[];
#endif
		static void NewProp_CanCast1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCast1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumping_MetaData[];
#endif
		static void NewProp_jumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_jumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_SpawnAbility, "SpawnAbility" }, // 949758893
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbilityIndex_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbilityIndex = { "CastedAbilityIndex", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, CastedAbilityIndex), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbilityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbilityIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbility_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbility = { "CastedAbility", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, CastedAbility), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Arm_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Arm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->Dead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead = { "Dead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->Shield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability3Cooldown_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability3Cooldown = { "Ability3Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Ability3Cooldown), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability3Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability3Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability2Cooldown_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability2Cooldown = { "Ability2Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Ability2Cooldown), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability2Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability2Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability1Cooldown_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability1Cooldown = { "Ability1Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Ability1Cooldown), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability1Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability1Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->CanCast3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3 = { "CanCast3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->CanCast2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2 = { "CanCast2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->CanCast1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1 = { "CanCast1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Ability), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->jumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping = { "jumping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "MovementSpeed" },
		{ "Comment", "//properties for the player\n" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
		{ "ToolTip", "properties for the player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbilityIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CastedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Dead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability3Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability2Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability1Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CanCast1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_jumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 1890877569);
	template<> MYPROJECT_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
