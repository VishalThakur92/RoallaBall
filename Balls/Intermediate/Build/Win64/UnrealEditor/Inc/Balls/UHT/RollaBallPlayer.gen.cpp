// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balls/Game/RollaBallPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallPlayer() {}
// Cross Module References
	BALLS_API UClass* Z_Construct_UClass_ARollaBallPlayer();
	BALLS_API UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Balls();
// End Cross Module References
	void ARollaBallPlayer::StaticRegisterNativesARollaBallPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARollaBallPlayer);
	UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister()
	{
		return ARollaBallPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Balls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/RollaBallPlayer.h" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallPlayer_Statics::ClassParams = {
		&ARollaBallPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARollaBallPlayer, ARollaBallPlayer::StaticClass, TEXT("ARollaBallPlayer"), &Z_Registration_Info_UClass_ARollaBallPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallPlayer), 1762513402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_Balls_Source_Balls_Game_RollaBallPlayer_h_2403502204(TEXT("/Script/Balls"),
		Z_CompiledInDeferFile_FID_UnrealEngineProjects_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_Balls_Source_Balls_Game_RollaBallPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
