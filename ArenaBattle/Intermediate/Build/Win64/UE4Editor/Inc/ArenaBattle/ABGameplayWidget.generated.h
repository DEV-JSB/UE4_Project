// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameplayWidget_generated_h
#error "ABGameplayWidget.generated.h already included, missing '#pragma once' in ABGameplayWidget.h"
#endif
#define ARENABATTLE_ABGameplayWidget_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked); \
	DECLARE_FUNCTION(execOnReturnToTitleClicked); \
	DECLARE_FUNCTION(execOnResumClicked);


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked); \
	DECLARE_FUNCTION(execOnReturnToTitleClicked); \
	DECLARE_FUNCTION(execOnResumClicked);


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameplayWidget(); \
	friend struct Z_Construct_UClass_UABGameplayWidget_Statics; \
public: \
	DECLARE_CLASS(UABGameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameplayWidget)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABGameplayWidget(); \
	friend struct Z_Construct_UClass_UABGameplayWidget_Statics; \
public: \
	DECLARE_CLASS(UABGameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameplayWidget)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameplayWidget(UABGameplayWidget&&); \
	NO_API UABGameplayWidget(const UABGameplayWidget&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameplayWidget(UABGameplayWidget&&); \
	NO_API UABGameplayWidget(const UABGameplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameplayWidget)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UABGameplayWidget, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__ReturnToTittleButton() { return STRUCT_OFFSET(UABGameplayWidget, ReturnToTittleButton); } \
	FORCEINLINE static uint32 __PPO__RetryGameButton() { return STRUCT_OFFSET(UABGameplayWidget, RetryGameButton); }


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_12_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABGameplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
