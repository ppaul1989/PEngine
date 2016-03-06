// PEngine_Core.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "PEngine_Core.h"
#include <stdio.h>


// This is an example of an exported variable
PENGINE_CORE_API int nPEngine_Core=0;

// This is an example of an exported function.
PENGINE_CORE_API int fnPEngine_Core(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see PEngine_Core.h for the class definition
CPEngine_Core::CPEngine_Core()
{
	printf("Core initialized");
	int in;
	scanf("%i", &in);
    return;
}


