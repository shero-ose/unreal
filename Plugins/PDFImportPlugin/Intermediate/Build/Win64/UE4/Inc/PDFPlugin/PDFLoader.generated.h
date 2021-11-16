// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPDFInfo;
class UTexture2D;
#ifdef PDFPLUGIN_PDFLoader_generated_h
#error "PDFLoader.generated.h already included, missing '#pragma once' in PDFLoader.h"
#endif
#define PDFPLUGIN_PDFLoader_generated_h

#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_SPARSE_DATA
#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPDFPage); \
	DECLARE_FUNCTION(execLoadPDF);


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPDFPage); \
	DECLARE_FUNCTION(execLoadPDF);


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDFLoader(); \
	friend struct Z_Construct_UClass_UPDFLoader_Statics; \
public: \
	DECLARE_CLASS(UPDFLoader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPDFLoader)


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPDFLoader(); \
	friend struct Z_Construct_UClass_UPDFLoader_Statics; \
public: \
	DECLARE_CLASS(UPDFLoader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPDFLoader)


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDFLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDFLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDFLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDFLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDFLoader(UPDFLoader&&); \
	NO_API UPDFLoader(const UPDFLoader&); \
public:


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDFLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDFLoader(UPDFLoader&&); \
	NO_API UPDFLoader(const UPDFLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDFLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDFLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDFLoader)


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_7_PROLOG
#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_SPARSE_DATA \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_RPC_WRAPPERS \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_INCLASS \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_SPARSE_DATA \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDFPLUGIN_API UClass* StaticClass<class UPDFLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_PDFPlugin_Source_PDFPlugin_Public_PDFLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
