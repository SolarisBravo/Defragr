// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Defragr/Public/DefragrPlayerMoveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefragrPlayerMoveComponent() {}
// Cross Module References
	DEFRAGR_API UEnum* Z_Construct_UEnum_Defragr_EMovementType();
	UPackage* Z_Construct_UPackage__Script_Defragr();
	DEFRAGR_API UClass* Z_Construct_UClass_UDefragrPlayerMoveComponent_NoRegister();
	DEFRAGR_API UClass* Z_Construct_UClass_UDefragrPlayerMoveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
// End Cross Module References
	static UEnum* EMovementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Defragr_EMovementType, Z_Construct_UPackage__Script_Defragr(), TEXT("EMovementType"));
		}
		return Singleton;
	}
	template<> DEFRAGR_API UEnum* StaticEnum<EMovementType>()
	{
		return EMovementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementType(EMovementType_StaticEnum, TEXT("/Script/Defragr"), TEXT("EMovementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Defragr_EMovementType_Hash() { return 2185101824U; }
	UEnum* Z_Construct_UEnum_Defragr_EMovementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Defragr();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementType"), 0, Get_Z_Construct_UEnum_Defragr_EMovementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementType::Fly", (int64)EMovementType::Fly },
				{ "EMovementType::Spectate", (int64)EMovementType::Spectate },
				{ "EMovementType::Normal", (int64)EMovementType::Normal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fly.Name", "EMovementType::Fly" },
				{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
				{ "Normal.Name", "EMovementType::Normal" },
				{ "Spectate.Name", "EMovementType::Spectate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Defragr,
				nullptr,
				"EMovementType",
				"EMovementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDefragrPlayerMoveComponent::StaticRegisterNativesUDefragrPlayerMoveComponent()
	{
	}
	UClass* Z_Construct_UClass_UDefragrPlayerMoveComponent_NoRegister()
	{
		return UDefragrPlayerMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundStopSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundStopSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundDampening_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundDampening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirStopAccelerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirStopAccelerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirStrafeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirStrafeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirStrafeAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirStrafeAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPMAirControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CPMAirControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectatorFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorAccelerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectatorAccelerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorStopSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectatorStopSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Defragr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DefragrPlayerMoveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "General Movement" },
		{ "Comment", "/** Custom gravity scale. Gravity is multiplied by this amount for the character */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "Custom gravity scale. Gravity is multiplied by this amount for the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, Gravity), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "General Movement" },
		{ "Comment", "/** Amount of jumping force the player has, does not represent absolute jump height */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "Amount of jumping force the player has, does not represent absolute jump height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, JumpForce), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "General Movement" },
		{ "Comment", "/** Ground friction */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "Ground friction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, Friction), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundStopSpeed_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "Comment", "/** The rate at which the player stops when on the ground */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The rate at which the player stops when on the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundStopSpeed = { "GroundStopSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, GroundStopSpeed), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundStopSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundStopSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundMaxSpeed_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "Comment", "/** The maximum speed the player can travel while on the ground */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The maximum speed the player can travel while on the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundMaxSpeed = { "GroundMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, GroundMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundAcceleration_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "Comment", "/** The rate at which the player gains speed while on the ground */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The rate at which the player gains speed while on the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundAcceleration = { "GroundAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, GroundAcceleration), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundDampening_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "Comment", "/** The rate at which the player loses speed while on the ground */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The rate at which the player loses speed while on the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundDampening = { "GroundDampening", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, GroundDampening), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundDampening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirMaxSpeed_MetaData[] = {
		{ "Category", "Air Movement" },
		{ "Comment", "/** The maximum speed the player can achieve while not strafe jumping */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The maximum speed the player can achieve while not strafe jumping" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirMaxSpeed = { "AirMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, AirMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStopAccelerate_MetaData[] = {
		{ "Category", "Air Movement" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStopAccelerate = { "AirStopAccelerate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, AirStopAccelerate), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStopAccelerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStopAccelerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeSpeed_MetaData[] = {
		{ "Category", "Air Movement" },
		{ "Comment", "/** The maximum speed the player can achieve when strafing, but not actually strafe jumping */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The maximum speed the player can achieve when strafing, but not actually strafe jumping" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeSpeed = { "AirStrafeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, AirStrafeSpeed), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeAcceleration_MetaData[] = {
		{ "Category", "Air Movement" },
		{ "Comment", "/** The rate at which the player gains speed to achieve Air Strafe Speed */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The rate at which the player gains speed to achieve Air Strafe Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeAcceleration = { "AirStrafeAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, AirStrafeAcceleration), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_CPMAirControl_MetaData[] = {
		{ "Category", "Air Movement" },
		{ "Comment", "/** The amount of air control the player has */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "The amount of air control the player has" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_CPMAirControl = { "CPMAirControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, CPMAirControl), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_CPMAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_CPMAirControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorFriction_MetaData[] = {
		{ "Category", "General Movement" },
		{ "Comment", "/* Friction for spectator modes */" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
		{ "ToolTip", "Friction for spectator modes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorFriction = { "SpectatorFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, SpectatorFriction), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorAccelerate_MetaData[] = {
		{ "Category", "General Movement" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorAccelerate = { "SpectatorAccelerate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, SpectatorAccelerate), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorAccelerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorAccelerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorStopSpeed_MetaData[] = {
		{ "Category", "General Movement" },
		{ "ModuleRelativePath", "Public/DefragrPlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorStopSpeed = { "SpectatorStopSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefragrPlayerMoveComponent, SpectatorStopSpeed), METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorStopSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorStopSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_JumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundStopSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_GroundDampening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStopAccelerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_AirStrafeAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_CPMAirControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorAccelerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::NewProp_SpectatorStopSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefragrPlayerMoveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::ClassParams = {
		&UDefragrPlayerMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefragrPlayerMoveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefragrPlayerMoveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefragrPlayerMoveComponent, 1525283638);
	template<> DEFRAGR_API UClass* StaticClass<UDefragrPlayerMoveComponent>()
	{
		return UDefragrPlayerMoveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefragrPlayerMoveComponent(Z_Construct_UClass_UDefragrPlayerMoveComponent, &UDefragrPlayerMoveComponent::StaticClass, TEXT("/Script/Defragr"), TEXT("UDefragrPlayerMoveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefragrPlayerMoveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
