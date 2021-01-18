// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Defragr/Public/DefragrPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefragrPlayer() {}
// Cross Module References
	DEFRAGR_API UClass* Z_Construct_UClass_ADefragrPlayer_NoRegister();
	DEFRAGR_API UClass* Z_Construct_UClass_ADefragrPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Defragr();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	DEFRAGR_API UClass* Z_Construct_UClass_UDefragrPlayerMoveComponent_NoRegister();
	DEFRAGR_API UClass* Z_Construct_UClass_UDefragrPlayerCollisionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADefragrPlayer::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execDoJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execGetGroundSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGroundSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execGetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execSetRotation)
	{
		P_GET_STRUCT(FQuat,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execSetRelativeVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRelativeVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execSetVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execSetPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execGetRaceTimeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRaceTimeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execGetRaceTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRaceTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execResetRaceTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRaceTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execStopRaceTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRaceTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefragrPlayer::execStartRaceTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRaceTimer();
		P_NATIVE_END;
	}
	void ADefragrPlayer::StaticRegisterNativesADefragrPlayer()
	{
		UClass* Class = ADefragrPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoJump", &ADefragrPlayer::execDoJump },
			{ "GetGroundSpeed", &ADefragrPlayer::execGetGroundSpeed },
			{ "GetPosition", &ADefragrPlayer::execGetPosition },
			{ "GetRaceTime", &ADefragrPlayer::execGetRaceTime },
			{ "GetRaceTimeString", &ADefragrPlayer::execGetRaceTimeString },
			{ "GetRotation", &ADefragrPlayer::execGetRotation },
			{ "ResetRaceTimer", &ADefragrPlayer::execResetRaceTimer },
			{ "SetPosition", &ADefragrPlayer::execSetPosition },
			{ "SetRelativeVelocity", &ADefragrPlayer::execSetRelativeVelocity },
			{ "SetRotation", &ADefragrPlayer::execSetRotation },
			{ "SetVelocity", &ADefragrPlayer::execSetVelocity },
			{ "StartRaceTimer", &ADefragrPlayer::execStartRaceTimer },
			{ "StopJump", &ADefragrPlayer::execStopJump },
			{ "StopRaceTimer", &ADefragrPlayer::execStopRaceTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter|CharacterMovement" },
		{ "Comment", "/* Commit to a jump */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Commit to a jump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "DoJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_DoJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_DoJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics
	{
		struct DefragrPlayer_eventGetGroundSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventGetGroundSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Get the player's linear speed */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Get the player's linear speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "GetGroundSpeed", nullptr, nullptr, sizeof(DefragrPlayer_eventGetGroundSpeed_Parms), Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics
	{
		struct DefragrPlayer_eventGetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Gets the position of the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Gets the position of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "GetPosition", nullptr, nullptr, sizeof(DefragrPlayer_eventGetPosition_Parms), Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics
	{
		struct DefragrPlayer_eventGetRaceTime_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventGetRaceTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "GetRaceTime", nullptr, nullptr, sizeof(DefragrPlayer_eventGetRaceTime_Parms), Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_GetRaceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_GetRaceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics
	{
		struct DefragrPlayer_eventGetRaceTimeString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventGetRaceTimeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "GetRaceTimeString", nullptr, nullptr, sizeof(DefragrPlayer_eventGetRaceTimeString_Parms), Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics
	{
		struct DefragrPlayer_eventGetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Gets the player's viewing angles */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Gets the player's viewing angles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "GetRotation", nullptr, nullptr, sizeof(DefragrPlayer_eventGetRotation_Parms), Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "ResetRaceTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics
	{
		struct DefragrPlayer_eventSetPosition_Parms
		{
			FVector NewPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventSetPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Sets the position of the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Sets the position of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "SetPosition", nullptr, nullptr, sizeof(DefragrPlayer_eventSetPosition_Parms), Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics
	{
		struct DefragrPlayer_eventSetRelativeVelocity_Parms
		{
			FVector NewVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventSetRelativeVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Sets the velocity in relation to the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Sets the velocity in relation to the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "SetRelativeVelocity", nullptr, nullptr, sizeof(DefragrPlayer_eventSetRelativeVelocity_Parms), Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics
	{
		struct DefragrPlayer_eventSetRotation_Parms
		{
			FQuat NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventSetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Sets the player's viewing angles */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Sets the player's viewing angles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "SetRotation", nullptr, nullptr, sizeof(DefragrPlayer_eventSetRotation_Parms), Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics
	{
		struct DefragrPlayer_eventSetVelocity_Parms
		{
			FVector NewVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefragrPlayer_eventSetVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter" },
		{ "Comment", "/* Sets the velocity of the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Sets the velocity of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "SetVelocity", nullptr, nullptr, sizeof(DefragrPlayer_eventSetVelocity_Parms), Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_SetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_SetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "StartRaceTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "DefragrCharacter|CharacterMovement" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefragrPlayer, nullptr, "StopRaceTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefragrPlayer_NoRegister()
	{
		return ADefragrPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADefragrPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Armour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardLandingSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardLandingSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpInput_MetaData[];
#endif
		static void NewProp_JumpInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JumpInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefragrPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Defragr,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefragrPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefragrPlayer_DoJump, "DoJump" }, // 3578990770
		{ &Z_Construct_UFunction_ADefragrPlayer_GetGroundSpeed, "GetGroundSpeed" }, // 606473753
		{ &Z_Construct_UFunction_ADefragrPlayer_GetPosition, "GetPosition" }, // 2972856695
		{ &Z_Construct_UFunction_ADefragrPlayer_GetRaceTime, "GetRaceTime" }, // 3692785147
		{ &Z_Construct_UFunction_ADefragrPlayer_GetRaceTimeString, "GetRaceTimeString" }, // 3963766640
		{ &Z_Construct_UFunction_ADefragrPlayer_GetRotation, "GetRotation" }, // 2435455226
		{ &Z_Construct_UFunction_ADefragrPlayer_ResetRaceTimer, "ResetRaceTimer" }, // 863238468
		{ &Z_Construct_UFunction_ADefragrPlayer_SetPosition, "SetPosition" }, // 4292363930
		{ &Z_Construct_UFunction_ADefragrPlayer_SetRelativeVelocity, "SetRelativeVelocity" }, // 356108849
		{ &Z_Construct_UFunction_ADefragrPlayer_SetRotation, "SetRotation" }, // 2533183569
		{ &Z_Construct_UFunction_ADefragrPlayer_SetVelocity, "SetVelocity" }, // 736531037
		{ &Z_Construct_UFunction_ADefragrPlayer_StartRaceTimer, "StartRaceTimer" }, // 1037019445
		{ &Z_Construct_UFunction_ADefragrPlayer_StopJump, "StopJump" }, // 4067083027
		{ &Z_Construct_UFunction_ADefragrPlayer_StopRaceTimer, "StopRaceTimer" }, // 2001953480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Pawn|DefragrCharacter|InternalEvents Navigation" },
		{ "IncludePath", "DefragrPlayer.h" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ShortTooltip", "Custom character specifically built for Q3 movement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Health of the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Health of the player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, Health), METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Armour_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Armour of the player */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Armour of the player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Armour = { "Armour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, Armour), METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Armour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Armour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpSoundCue_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpSoundCue = { "JumpSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, JumpSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_HardLandingSoundCue_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_HardLandingSoundCue = { "HardLandingSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, HardLandingSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_HardLandingSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_HardLandingSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_TeleportSoundCue_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_TeleportSoundCue = { "TeleportSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, TeleportSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_TeleportSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_TeleportSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/* The local normalized forward vector of the player's facing angle */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "The local normalized forward vector of the player's facing angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_RightVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/* The local normalized right vector of the player's facing angle */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "The local normalized right vector of the player's facing angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_RightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_RightVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/* X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0) */" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput_SetBit(void* Obj)
	{
		((ADefragrPlayer*)Obj)->JumpInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput = { "JumpInput", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefragrPlayer), &Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The BoxComponent being used for movement collision. Always treated as being vertically aligned in simple collision check functions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "The BoxComponent being used for movement collision. Always treated as being vertically aligned in simple collision check functions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Character's movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "Character's movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, MovementComponent), Z_Construct_UClass_UDefragrPlayerMoveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, CollisionComponent), Z_Construct_UClass_UDefragrPlayerCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayer.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefragrPlayer, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefragrPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Armour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_HardLandingSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_TeleportSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_RightVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_JumpInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_CollisionComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefragrPlayer_Statics::NewProp_FirstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefragrPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefragrPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefragrPlayer_Statics::ClassParams = {
		&ADefragrPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefragrPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefragrPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefragrPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefragrPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefragrPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefragrPlayer, 3096186975);
	template<> DEFRAGR_API UClass* StaticClass<ADefragrPlayer>()
	{
		return ADefragrPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefragrPlayer(Z_Construct_UClass_ADefragrPlayer, &ADefragrPlayer::StaticClass, TEXT("/Script/Defragr"), TEXT("ADefragrPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefragrPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
