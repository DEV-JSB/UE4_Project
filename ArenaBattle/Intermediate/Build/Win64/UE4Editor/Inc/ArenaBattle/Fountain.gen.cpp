// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Fountain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
// End Cross Module References
	void AFountain::StaticRegisterNativesAFountain()
	{
	}
	UClass* Z_Construct_UClass_AFountain_NoRegister()
	{
		return AFountain::StaticClass();
	}
	struct Z_Construct_UClass_AFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pWater_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pWater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pSplash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_iID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fRotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fRotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fountain.h" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_pBody_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_pBody = { "m_pBody", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_pBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_pBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_pBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_pWater_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_pWater = { "m_pWater", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_pWater), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_pWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_pWater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_pLight_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_pLight = { "m_pLight", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_pLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_pLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_pLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_pSplash_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_pSplash = { "m_pSplash", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_pSplash), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_pSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_pSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_pMovement_MetaData[] = {
		{ "Category", "Fountain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_pMovement = { "m_pMovement", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_pMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_pMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_pMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_iID_MetaData[] = {
		{ "Category", "ID" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_iID = { "m_iID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_iID), METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_iID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_iID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::NewProp_m_fRotateSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFountain_Statics::NewProp_m_fRotateSpeed = { "m_fRotateSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFountain, m_fRotateSpeed), METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::NewProp_m_fRotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::NewProp_m_fRotateSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFountain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_pBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_pWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_pLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_pSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_pMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_iID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFountain_Statics::NewProp_m_fRotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFountain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFountain_Statics::ClassParams = {
		&AFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFountain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFountain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFountain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFountain, 1498571968);
	template<> ARENABATTLE_API UClass* StaticClass<AFountain>()
	{
		return AFountain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFountain(Z_Construct_UClass_AFountain, &AFountain::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AFountain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFountain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
