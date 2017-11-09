// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WhereIsDaltonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhereIsDaltonGameMode() {}
// Cross Module References
	WHEREISDALTON_API UClass* Z_Construct_UClass_AWhereIsDaltonGameMode_NoRegister();
	WHEREISDALTON_API UClass* Z_Construct_UClass_AWhereIsDaltonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WhereIsDalton();
// End Cross Module References
	void AWhereIsDaltonGameMode::StaticRegisterNativesAWhereIsDaltonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWhereIsDaltonGameMode_NoRegister()
	{
		return AWhereIsDaltonGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWhereIsDaltonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_WhereIsDalton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "WhereIsDaltonGameMode.h" },
				{ "ModuleRelativePath", "WhereIsDaltonGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWhereIsDaltonGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWhereIsDaltonGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWhereIsDaltonGameMode, 2980307386);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWhereIsDaltonGameMode(Z_Construct_UClass_AWhereIsDaltonGameMode, &AWhereIsDaltonGameMode::StaticClass, TEXT("/Script/WhereIsDalton"), TEXT("AWhereIsDaltonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWhereIsDaltonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
