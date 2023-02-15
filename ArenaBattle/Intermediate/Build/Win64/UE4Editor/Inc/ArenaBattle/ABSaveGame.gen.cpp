// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSaveGame() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABSaveGame::StaticRegisterNativesUABSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UABSaveGame_NoRegister()
	{
		return UABSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UABSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABSaveGame.h" },
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, CharacterIndex), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_CharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, Level), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_Exp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, Exp), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_HighScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, HighScore), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_HighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_HighScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_CharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_HighScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABSaveGame_Statics::ClassParams = {
		&UABSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABSaveGame, 222286076);
	template<> ARENABATTLE_API UClass* StaticClass<UABSaveGame>()
	{
		return UABSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABSaveGame(Z_Construct_UClass_UABSaveGame, &UABSaveGame::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
