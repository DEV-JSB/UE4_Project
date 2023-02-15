// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameplayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UABGameplayWidget::execOnRetryGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryGameClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABGameplayWidget::execOnReturnToTitleClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnToTitleClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABGameplayWidget::execOnResumClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumClicked();
		P_NATIVE_END;
	}
	void UABGameplayWidget::StaticRegisterNativesUABGameplayWidget()
	{
		UClass* Class = UABGameplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumClicked", &UABGameplayWidget::execOnResumClicked },
			{ "OnRetryGameClicked", &UABGameplayWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UABGameplayWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnResumClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnResumClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnResumClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnRetryGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnReturnToTitleClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister()
	{
		return UABGameplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGameplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToTittleButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnToTittleButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABGameplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABGameplayWidget_OnResumClicked, "OnResumClicked" }, // 268440192
		{ &Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 2745230242
		{ &Z_Construct_UFunction_UABGameplayWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 3478215860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABGameplayWidget.h" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGameplayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTittleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTittleButton = { "ReturnToTittleButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGameplayWidget, ReturnToTittleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTittleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTittleButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGameplayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTittleButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameplayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams = {
		&UABGameplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameplayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGameplayWidget, 3080011437);
	template<> ARENABATTLE_API UClass* StaticClass<UABGameplayWidget>()
	{
		return UABGameplayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGameplayWidget(Z_Construct_UClass_UABGameplayWidget, &UABGameplayWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGameplayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
