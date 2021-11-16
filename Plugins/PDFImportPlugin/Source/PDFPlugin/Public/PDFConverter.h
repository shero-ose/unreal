#ifndef PUBLIC_PDFCONVERTER_H_
#define PUBLIC_PDFCONVERTER_H_



#include "PDF.h"
#include "fpdfview.h"

const int MAX_PPI = 600;

unsigned char* createBitmapFileHeader(int, int);
unsigned char* createBitmapInfoHeader(int, int);
PDFPLUGIN_API void GenerateBitmapImage(unsigned char*, int, int, char*);
PDFPLUGIN_API void ConfigFPDF();
PDFPLUGIN_API FPDF_DOCUMENT LoadDocument(const char*);
PDFPLUGIN_API FPDF_PAGE LoadPage(FPDF_DOCUMENT, int, int);
PDFPLUGIN_API FPDF_BITMAP CreateEmptyBitmap(int, int);
PDFPLUGIN_API void GenerateBitmapFromPage(FPDF_PAGE, char*, int);

#endif
