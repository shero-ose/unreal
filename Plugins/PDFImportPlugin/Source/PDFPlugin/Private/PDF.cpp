#include "PDF.h"

UPDFInfo::~UPDFInfo()
{
	if (this->Doc != nullptr)
	{
		FPDF_CloseDocument(this->Doc);
	}
}
