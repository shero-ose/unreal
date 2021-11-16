// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYFILEDIALOG_EFDFunctionLibrary_generated_h
#error "EFDFunctionLibrary.generated.h already included, missing '#pragma once' in EFDFunctionLibrary.h"
#endif
#define EASYFILEDIALOG_EFDFunctionLibrary_generated_h

#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_SPARSE_DATA
#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenFolderDialog); \
	DECLARE_FUNCTION(execSaveFileDialog); \
	DECLARE_FUNCTION(execOpenFileDialog);


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenFolderDialog); \
	DECLARE_FUNCTION(execSaveFileDialog); \
	DECLARE_FUNCTION(execOpenFileDialog);


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEFDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEFDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEFDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyFileDialog"), NO_API) \
	DECLARE_SERIALIZER(UEFDFunctionLibrary)


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEFDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEFDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEFDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyFileDialog"), NO_API) \
	DECLARE_SERIALIZER(UEFDFunctionLibrary)


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEFDFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEFDFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEFDFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEFDFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEFDFunctionLibrary(UEFDFunctionLibrary&&); \
	NO_API UEFDFunctionLibrary(const UEFDFunctionLibrary&); \
public:


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEFDFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEFDFunctionLibrary(UEFDFunctionLibrary&&); \
	NO_API UEFDFunctionLibrary(const UEFDFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEFDFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEFDFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEFDFunctionLibrary)


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_13_PROLOG
#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYFILEDIALOG_API UClass* StaticClass<class UEFDFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
