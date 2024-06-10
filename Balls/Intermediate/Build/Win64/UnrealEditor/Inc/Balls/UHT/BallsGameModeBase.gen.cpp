// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balls/Game/BallsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallsGameModeBase() {}
// Cross Module References
	BALLS_API UClass* Z_Construct_UClass_ABallsGameModeBase();
	BALLS_API UClass* Z_Construct_UClass_ABallsGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Balls();
// End Cross Module References
	void ABallsGameModeBase::StaticRegisterNativesABallsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallsGameModeBase);
	UClass* Z_Construct_UClass_ABallsGameModeBase_NoRegister()
	{
		return ABallsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABallsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Balls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallsGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BallsGameModeBase.h" },
		{ "ModuleRelativePath", "Game/BallsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallsGameModeBase_Statics::ClassParams = {
		&ABallsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallsGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABallsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABallsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallsGameModeBase.OuterSingleton, Z_Construct_UClass_ABallsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABallsGameModeBase.OuterSingleton;
	}
	template<> BALLS_API UClass* StaticClass<ABallsGameModeBase>()
	{
		return ABallsGameModeBase::StaticClass();
	}
	ABallsGameModeBase::ABallsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallsGameModeBase);
	ABallsGameModeBase::~ABallsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_BallsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_BallsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABallsGameModeBase, ABallsGameModeBase::StaticClass, TEXT("ABallsGameModeBase"), &Z_Registration_Info_UClass_ABallsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallsGameModeBase), 2132020625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_BallsGameModeBase_h_2218972143(TEXT("/Script/Balls"),
		Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_BallsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_BallsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
