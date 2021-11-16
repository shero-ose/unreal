#pragma once

#include "fpdfview.h"
#include "PDF.generated.h"


UCLASS(BlueprintType)
class UPDFInfo : public UObject
{
	GENERATED_BODY()

public:

	UPDFInfo() : Doc(nullptr), PageCount(0) {}
	~UPDFInfo();

	FPDF_DOCUMENT Doc;
	
	UPROPERTY(BlueprintReadOnly,Category = "PDFLoader")
	int PageCount;
};
