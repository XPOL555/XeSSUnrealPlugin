// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeSS/Public/XeSSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeSSSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_XeSSPlugin();
XESSPLUGIN_API UClass* Z_Construct_UClass_UXeSSSettings();
XESSPLUGIN_API UClass* Z_Construct_UClass_UXeSSSettings_NoRegister();
// End Cross Module References

// Begin Class UXeSSSettings
void UXeSSSettings::StaticRegisterNativesUXeSSSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXeSSSettings);
UClass* Z_Construct_UClass_UXeSSSettings_NoRegister()
{
	return UXeSSSettings::StaticClass();
}
struct Z_Construct_UClass_UXeSSSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Intel XeSS" },
		{ "IncludePath", "XeSSSettings.h" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableXeSSInEditorViewports_MetaData[] = {
		{ "Category", "Editor" },
		{ "DisplayName", "Allow Intel XeSS to be turned on in Editor viewports" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
		{ "ToolTip", "Disabling will only allow to enable XeSS when running standalone game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDataDumpPath_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "r.XeSS.FrameDump.Path" },
		{ "DisplayName", "Intel XeSS debug data save location" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
		{ "ToolTip", "Directory that will be used for debug images and data when r.XeSS.FrameDump.Start is called, can be changed with r.XeSS.FrameDump.Path" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableXeSSInEditorViewports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableXeSSInEditorViewports;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugDataDumpPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeSSSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_SetBit(void* Obj)
{
	((UXeSSSettings*)Obj)->bEnableXeSSInEditorViewports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports = { "bEnableXeSSInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UXeSSSettings), &Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableXeSSInEditorViewports_MetaData), NewProp_bEnableXeSSInEditorViewports_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath = { "DebugDataDumpPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXeSSSettings, DebugDataDumpPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDataDumpPath_MetaData), NewProp_DebugDataDumpPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXeSSSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UXeSSSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_XeSSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXeSSSettings_Statics::ClassParams = {
	&UXeSSSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UXeSSSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UXeSSSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXeSSSettings()
{
	if (!Z_Registration_Info_UClass_UXeSSSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXeSSSettings.OuterSingleton, Z_Construct_UClass_UXeSSSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXeSSSettings.OuterSingleton;
}
template<> XESSPLUGIN_API UClass* StaticClass<UXeSSSettings>()
{
	return UXeSSSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXeSSSettings);
UXeSSSettings::~UXeSSSettings() {}
// End Class UXeSSSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXeSSSettings, UXeSSSettings::StaticClass, TEXT("UXeSSSettings"), &Z_Registration_Info_UClass_UXeSSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXeSSSettings), 2614913776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_25191483(TEXT("/Script/XeSSPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
