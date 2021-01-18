// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FQuat;
struct FVector;
#ifdef DEFRAGR_DefragrPlayer_generated_h
#error "DefragrPlayer.generated.h already included, missing '#pragma once' in DefragrPlayer.h"
#endif
#define DEFRAGR_DefragrPlayer_generated_h

#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_SPARSE_DATA
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execDoJump); \
	DECLARE_FUNCTION(execGetGroundSpeed); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetRelativeVelocity); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetRaceTimeString); \
	DECLARE_FUNCTION(execGetRaceTime); \
	DECLARE_FUNCTION(execResetRaceTimer); \
	DECLARE_FUNCTION(execStopRaceTimer); \
	DECLARE_FUNCTION(execStartRaceTimer);


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execDoJump); \
	DECLARE_FUNCTION(execGetGroundSpeed); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetRelativeVelocity); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetRaceTimeString); \
	DECLARE_FUNCTION(execGetRaceTime); \
	DECLARE_FUNCTION(execResetRaceTimer); \
	DECLARE_FUNCTION(execStopRaceTimer); \
	DECLARE_FUNCTION(execStartRaceTimer);


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefragrPlayer(); \
	friend struct Z_Construct_UClass_ADefragrPlayer_Statics; \
public: \
	DECLARE_CLASS(ADefragrPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defragr"), NO_API) \
	DECLARE_SERIALIZER(ADefragrPlayer)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADefragrPlayer(); \
	friend struct Z_Construct_UClass_ADefragrPlayer_Statics; \
public: \
	DECLARE_CLASS(ADefragrPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defragr"), NO_API) \
	DECLARE_SERIALIZER(ADefragrPlayer)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefragrPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefragrPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefragrPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefragrPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefragrPlayer(ADefragrPlayer&&); \
	NO_API ADefragrPlayer(const ADefragrPlayer&); \
public:


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefragrPlayer(ADefragrPlayer&&); \
	NO_API ADefragrPlayer(const ADefragrPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefragrPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefragrPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefragrPlayer)


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_PRIVATE_PROPERTY_OFFSET
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_20_PROLOG
#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_PRIVATE_PROPERTY_OFFSET \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_SPARSE_DATA \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_RPC_WRAPPERS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_INCLASS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_PRIVATE_PROPERTY_OFFSET \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_SPARSE_DATA \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_INCLASS_NO_PURE_DECLS \
	DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEFRAGR_API UClass* StaticClass<class ADefragrPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DefragrAlt_Plugins_Defragr_Source_Defragr_Public_DefragrPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
