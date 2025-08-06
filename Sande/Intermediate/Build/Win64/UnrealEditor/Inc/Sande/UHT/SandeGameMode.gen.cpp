// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sande/SandeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SANDE_API UClass* Z_Construct_UClass_ASandeGameMode();
SANDE_API UClass* Z_Construct_UClass_ASandeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sande();
// End Cross Module References

// Begin Class ASandeGameMode
void ASandeGameMode::StaticRegisterNativesASandeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASandeGameMode);
UClass* Z_Construct_UClass_ASandeGameMode_NoRegister()
{
	return ASandeGameMode::StaticClass();
}
struct Z_Construct_UClass_ASandeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SandeGameMode.h" },
		{ "ModuleRelativePath", "SandeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASandeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Sande,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASandeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASandeGameMode_Statics::ClassParams = {
	&ASandeGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASandeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASandeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASandeGameMode()
{
	if (!Z_Registration_Info_UClass_ASandeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASandeGameMode.OuterSingleton, Z_Construct_UClass_ASandeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASandeGameMode.OuterSingleton;
}
template<> SANDE_API UClass* StaticClass<ASandeGameMode>()
{
	return ASandeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASandeGameMode);
ASandeGameMode::~ASandeGameMode() {}
// End Class ASandeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_SSANDE_Sande_Source_Sande_SandeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASandeGameMode, ASandeGameMode::StaticClass, TEXT("ASandeGameMode"), &Z_Registration_Info_UClass_ASandeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASandeGameMode), 533365221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_SSANDE_Sande_Source_Sande_SandeGameMode_h_4057489660(TEXT("/Script/Sande"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_SSANDE_Sande_Source_Sande_SandeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_SSANDE_Sande_Source_Sande_SandeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
