// Copyright 2019 Isara Technologies SAS. All Rights Reserved.

#include "PDFPluginModule.h"
#include "PDFConverter.h"

PDFPluginModule::PDFPluginModule()
	: Initialized(false) {
	PDFiumLibrary = nullptr;
}

void PDFPluginModule::StartupModule()
{
	PDFiumLibrary = LoadLibrary(TEXT("pdfium"));
	//Initialize third party library
	ConfigFPDF();
	Initialized = true;
}

void PDFPluginModule::ShutdownModule()
{
	if (!Initialized)
	{
		FPDF_DestroyLibrary();
		return;
	}
	if (PDFiumLibrary) FPlatformProcess::FreeDllHandle(PDFiumLibrary);

	Initialized = false;
}

void* PDFPluginModule::LoadLibrary(const  FString& name) {

	FString BaseDir = IPluginManager::Get().FindPlugin("PDFPlugin")->GetBaseDir();

	FString LibDir;
	FString prefix;
	FString extension;
	extension = TEXT(".dll");
	prefix = "";

	LibDir = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/pdfium/bin/vs/x64"));
	if (!LibDir.IsEmpty()) {
		FString LibraryPath = FPaths::Combine(*LibDir, prefix + name + extension);
		return FPlatformProcess::GetDllHandle(*LibraryPath);
	}
	return nullptr;
}

IMPLEMENT_MODULE(PDFPluginModule, PDFPlugin);