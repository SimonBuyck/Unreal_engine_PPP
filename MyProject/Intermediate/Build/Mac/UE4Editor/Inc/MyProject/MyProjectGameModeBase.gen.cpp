// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectGameModeBase() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMyProjectGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AMyProjectGameModeBase::StaticRegisterNativesAMyProjectGameModeBase()
	{
		UClass* Class = AMyProjectGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AMyProjectGameModeBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics
	{
		struct MyProjectGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** Remove the current menu widget and create a new one from the specified class, if provided. */" },
		{ "ModuleRelativePath", "MyProjectGameModeBase.h" },
		{ "ToolTip", "Remove the current menu widget and create a new one from the specified class, if provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(MyProjectGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister()
	{
		return AMyProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProjectGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProjectGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 2666257565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MyProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "/** The widget instance that we are using as our menu. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectGameModeBase.h" },
		{ "ToolTip", "The widget instance that we are using as our menu." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** The widget class we will use as our menu when the game starts. */" },
		{ "ModuleRelativePath", "MyProjectGameModeBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameModeBase_Statics::NewProp_StartingWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectGameModeBase_Statics::ClassParams = {
		&AMyProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyProjectGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectGameModeBase, 1715071723);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectGameModeBase>()
	{
		return AMyProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameModeBase(Z_Construct_UClass_AMyProjectGameModeBase, &AMyProjectGameModeBase::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
