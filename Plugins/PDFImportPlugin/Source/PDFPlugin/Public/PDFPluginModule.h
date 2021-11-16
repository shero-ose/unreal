// Copyright 2019 Isara Technologies SAS. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

#include "Core.h"
#include "Interfaces/IPluginManager.h"

#include "Modules/ModuleInterface.h"
#include "Templates/SharedPointer.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include <fstream>
#include <iterator>
#include <vector>

extern  "C" {
#include "fpdfview.h"
}



/**
*
*/
class PDFPluginModule : public FDefaultGameModuleImpl
{
public:
	PDFPluginModule();
	/**
	* First method called to initialize plugin
	*/
	virtual void StartupModule() override;
	/**
	* Called to clean up plugin
	*/
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return true;
	}


protected:
	/**
	* Load static library
	*/
	void* LoadLibrary(const FString& name);

private:
	void* PDFiumLibrary;

	/** Whether the module has been initialized. */
	bool Initialized;
};