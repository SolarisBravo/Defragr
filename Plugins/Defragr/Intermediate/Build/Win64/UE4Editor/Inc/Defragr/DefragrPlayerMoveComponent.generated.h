// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEFRAGR_DefragrPlayerMoveComponent_generated_h
#error "DefragrPlayerMoveComponent.generated.h already included, missing '#pragma once' in DefragrPlayerMoveComponent.h"
#endif
#define DEFRAGR_DefragrPlayerMoveComponent_generated_h

#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_SPARSE_DATA
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_RPC_WRAPPERS
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefragrPlayerMoveComponent(); \
	friend struct Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UDefragrPlayerMoveComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defragr"), NO_API) \
	DECLARE_SERIALIZER(UDefragrPlayerMoveComponent)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDefragrPlayerMoveComponent(); \
	friend struct Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UDefragrPlayerMoveComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defragr"), NO_API) \
	DECLARE_SERIALIZER(UDefragrPlayerMoveComponent)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefragrPlayerMoveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefragrPlayerMoveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefragrPlayerMoveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefragrPlayerMoveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefragrPlayerMoveComponent(UDefragrPlayerMoveComponent&&); \
	NO_API UDefragrPlayerMoveComponent(const UDefragrPlayerMoveComponent&); \
public:


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefragrPlayerMoveComponent(UDefragrPlayerMoveComponent&&); \
	NO_API UDefragrPlayerMoveComponent(const UDefragrPlayerMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefragrPlayerMoveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefragrPlayerMoveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefragrPlayerMoveComponent)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_23_PROLOG
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_SPARSE_DATA \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_RPC_WRAPPERS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_INCLASS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_SPARSE_DATA \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_INCLASS_NO_PURE_DECLS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEFRAGR_API UClass* StaticClass<class UDefragrPlayerMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayerMoveComponent_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Fly) \
	op(EMovementType::Spectate) \
	op(EMovementType::Normal) 

enum class EMovementType : uint8;
template<> DEFRAGR_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
