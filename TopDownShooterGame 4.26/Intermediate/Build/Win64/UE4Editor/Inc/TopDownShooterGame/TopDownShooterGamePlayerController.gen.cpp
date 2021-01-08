// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooterGame/TopDownShooterGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooterGamePlayerController() {}
// Cross Module References
	TOPDOWNSHOOTERGAME_API UClass* Z_Construct_UClass_ATopDownShooterGamePlayerController_NoRegister();
	TOPDOWNSHOOTERGAME_API UClass* Z_Construct_UClass_ATopDownShooterGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDownShooterGame();
// End Cross Module References
	void ATopDownShooterGamePlayerController::StaticRegisterNativesATopDownShooterGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATopDownShooterGamePlayerController_NoRegister()
	{
		return ATopDownShooterGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopDownShooterGamePlayerController.h" },
		{ "ModuleRelativePath", "TopDownShooterGamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownShooterGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::ClassParams = {
		&ATopDownShooterGamePlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownShooterGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownShooterGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownShooterGamePlayerController, 461991971);
	template<> TOPDOWNSHOOTERGAME_API UClass* StaticClass<ATopDownShooterGamePlayerController>()
	{
		return ATopDownShooterGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownShooterGamePlayerController(Z_Construct_UClass_ATopDownShooterGamePlayerController, &ATopDownShooterGamePlayerController::StaticClass, TEXT("/Script/TopDownShooterGame"), TEXT("ATopDownShooterGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownShooterGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
