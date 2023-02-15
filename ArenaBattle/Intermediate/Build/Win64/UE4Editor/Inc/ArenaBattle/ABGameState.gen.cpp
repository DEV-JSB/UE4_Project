// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameState() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABGameState::StaticRegisterNativesAABGameState()
	{
	}
	UClass* Z_Construct_UClass_AABGameState_NoRegister()
	{
		return AABGameState::StaticClass();
	}
	struct Z_Construct_UClass_AABGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalGameScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalGameScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameCleared_MetaData[];
#endif
		static void NewProp_bGameCleared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameCleared;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ABGameState.h" },
		{ "ModuleRelativePath", "Public/ABGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore = { "TotalGameScore", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABGameState, TotalGameScore), METADATA_PARAMS(Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameState.h" },
	};
#endif
	void Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared_SetBit(void* Obj)
	{
		((AABGameState*)Obj)->bGameCleared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared = { "bGameCleared", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AABGameState), &Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared_SetBit, METADATA_PARAMS(Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameState_Statics::NewProp_TotalGameScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameState_Statics::NewProp_bGameCleared,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABGameState_Statics::ClassParams = {
		&AABGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABGameState, 3311343242);
	template<> ARENABATTLE_API UClass* StaticClass<AABGameState>()
	{
		return AABGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABGameState(Z_Construct_UClass_AABGameState, &AABGameState::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
