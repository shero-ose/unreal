#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PDFLoader.generated.h"


UCLASS()
class UPDFLoader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//Node allowing to convert a pdf's page to a bmp image
	UFUNCTION(BlueprintCallable, Category = "PDFTools")
	static UPDFInfo* LoadPDF(FString Path);
	
	static UTexture2D* LoadTexture2DFromFile(const FString& FullFilePath);

	UFUNCTION(BlueprintPure, Category = "PDFTools")
	static UTexture2D* GetPDFPage(const UPDFInfo* Pdf, int PageIndex, int Ppi = 300);

};

