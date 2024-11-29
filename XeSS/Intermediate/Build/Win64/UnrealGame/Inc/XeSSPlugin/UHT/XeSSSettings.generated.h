// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XeSSSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XESSPLUGIN_XeSSSettings_generated_h
#error "XeSSSettings.generated.h already included, missing '#pragma once' in XeSSSettings.h"
#endif
#define XESSPLUGIN_XeSSSettings_generated_h

#define FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXeSSSettings(); \
	friend struct Z_Construct_UClass_UXeSSSettings_Statics; \
public: \
	DECLARE_CLASS(UXeSSSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/XeSSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UXeSSSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXeSSSettings(UXeSSSettings&&); \
	UXeSSSettings(const UXeSSSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXeSSSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXeSSSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXeSSSettings) \
	NO_API virtual ~UXeSSSettings();


#define FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_29_PROLOG
#define FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XESSPLUGIN_API UClass* StaticClass<class UXeSSSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_XeSS_Source_XeSS_Public_XeSSSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
