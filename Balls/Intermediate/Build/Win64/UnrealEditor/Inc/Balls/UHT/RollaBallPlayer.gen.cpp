// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balls/Game/RollaBallPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallPlayer() {}
// Cross Module References
	BALLS_API UClass* Z_Construct_UClass_ARollaBallPlayer();
	BALLS_API UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Balls();
// End Cross Module References
	DEFINE_FUNCTION(ARollaBallPlayer::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ARollaBallPlayer::StaticRegisterNativesARollaBallPlayer()
	{
		UClass* Class = ARollaBallPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ARollaBallPlayer::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics
	{
		struct RollaBallPlayer_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallPlayer_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallPlayer_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallPlayer_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallPlayer_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallPlayer_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARollaBallPlayer, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::RollaBallPlayer_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::RollaBallPlayer_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARollaBallPlayer_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARollaBallPlayer_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARollaBallPlayer);
	UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister()
	{
		return ARollaBallPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJumpCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Balls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARollaBallPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARollaBallPlayer_OnHit, "OnHit" }, // 3688120048
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/RollaBallPlayer.h" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Definite Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definite Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables \n" },
#endif
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce = { "MoveForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, MoveForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, JumpImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount = { "MaxJumpCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallPlayer, MaxJumpCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData), Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallPlayer_Statics::ClassParams = {
		&ARollaBallPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARollaBallPlayer()
	{
		if (!Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton, Z_Construct_UClass_ARollaBallPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton;
	}
	template<> BALLS_API UClass* StaticClass<ARollaBallPlayer>()
	{
		return ARollaBallPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollaBallPlayer);
	ARollaBallPlayer::~ARollaBallPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARollaBallPlayer, ARollaBallPlayer::StaticClass, TEXT("ARollaBallPlayer"), &Z_Registration_Info_UClass_ARollaBallPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallPlayer), 3900131321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallPlayer_h_1899258835(TEXT("/Script/Balls"),
		Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
