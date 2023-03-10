// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAnimInstance() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimInstance_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UABAnimInstance::execAnimNotify_NextAttackCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NextAttackCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAnimInstance::execAnimNotify_AttackHitCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackHitCheck();
		P_NATIVE_END;
	}
	void UABAnimInstance::StaticRegisterNativesUABAnimInstance()
	{
		UClass* Class = UABAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackHitCheck", &UABAnimInstance::execAnimNotify_AttackHitCheck },
			{ "AnimNotify_NextAttackCheck", &UABAnimInstance::execAnimNotify_NextAttackCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAnimInstance, nullptr, "AnimNotify_AttackHitCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// -> ?\xcc\xb0\xcd\xb5??\xd6\xbe????? ????\n" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
		{ "ToolTip", "-> ?\xcc\xb0\xcd\xb5??\xd6\xbe????? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAnimInstance, nullptr, "AnimNotify_NextAttackCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABAnimInstance_NoRegister()
	{
		return UABAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UABAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fCurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fCurrentPawnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsInAir_MetaData[];
#endif
		static void NewProp_m_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pAttackMontange_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pAttackMontange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsDead_MetaData[];
#endif
		static void NewProp_m_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck, "AnimNotify_AttackHitCheck" }, // 4246878944
		{ &Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck, "AnimNotify_NextAttackCheck" }, // 1793756120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ABAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_fCurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "Comment", "// ???? ????\xc6\xae???? ?????? ?????\xcf\xb0\xd4\xb2? ????\n" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
		{ "ToolTip", "???? ????\xc6\xae???? ?????? ?????\xcf\xb0\xd4\xb2? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_fCurrentPawnSpeed = { "m_fCurrentPawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABAnimInstance, m_fCurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_fCurrentPawnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_fCurrentPawnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir_SetBit(void* Obj)
	{
		((UABAnimInstance*)Obj)->m_bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir = { "m_bIsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABAnimInstance), &Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_pAttackMontange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_pAttackMontange = { "m_pAttackMontange", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABAnimInstance, m_pAttackMontange), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_pAttackMontange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_pAttackMontange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/ABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead_SetBit(void* Obj)
	{
		((UABAnimInstance*)Obj)->m_bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead = { "m_bIsDead", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABAnimInstance), &Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_fCurrentPawnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_pAttackMontange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_m_bIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABAnimInstance_Statics::ClassParams = {
		&UABAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABAnimInstance, 62129550);
	template<> ARENABATTLE_API UClass* StaticClass<UABAnimInstance>()
	{
		return UABAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABAnimInstance(Z_Construct_UClass_UABAnimInstance, &UABAnimInstance::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
