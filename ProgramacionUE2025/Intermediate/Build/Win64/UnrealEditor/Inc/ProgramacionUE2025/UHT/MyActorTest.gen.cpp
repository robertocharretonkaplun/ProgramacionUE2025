// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgramacionUE2025/Public/MyActorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROGRAMACIONUE2025_API UClass* Z_Construct_UClass_AMyActorTest();
PROGRAMACIONUE2025_API UClass* Z_Construct_UClass_AMyActorTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProgramacionUE2025();
// End Cross Module References

// Begin Class AMyActorTest
void AMyActorTest::StaticRegisterNativesAMyActorTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorTest);
UClass* Z_Construct_UClass_AMyActorTest_NoRegister()
{
	return AMyActorTest::StaticClass();
}
struct Z_Construct_UClass_AMyActorTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest.h" },
		{ "ModuleRelativePath", "Public/MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "Test Properties" },
		{ "ModuleRelativePath", "Public/MyActorTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProgramacionUE2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Statics::ClassParams = {
	&AMyActorTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyActorTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest()
{
	if (!Z_Registration_Info_UClass_AMyActorTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest.OuterSingleton, Z_Construct_UClass_AMyActorTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest.OuterSingleton;
}
template<> PROGRAMACIONUE2025_API UClass* StaticClass<AMyActorTest>()
{
	return AMyActorTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest);
AMyActorTest::~AMyActorTest() {}
// End Class AMyActorTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_ProgramacionUE2025_ProgramacionUE2025_Source_ProgramacionUE2025_Public_MyActorTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest, AMyActorTest::StaticClass, TEXT("AMyActorTest"), &Z_Registration_Info_UClass_AMyActorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest), 3963899662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_ProgramacionUE2025_ProgramacionUE2025_Source_ProgramacionUE2025_Public_MyActorTest_h_1701863026(TEXT("/Script/ProgramacionUE2025"),
	Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_ProgramacionUE2025_ProgramacionUE2025_Source_ProgramacionUE2025_Public_MyActorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_ProgramacionUE2025_ProgramacionUE2025_Source_ProgramacionUE2025_Public_MyActorTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
