// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the PENGINE_CORE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// PENGINE_CORE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PENGINE_CORE_EXPORTS
#define PENGINE_CORE_API __declspec(dllexport)
#else
#define PENGINE_CORE_API __declspec(dllimport)
#endif

// This class is exported from the PEngine_Core.dll
class PENGINE_CORE_API CPEngine_Core {
public:
	CPEngine_Core(void);
	// TODO: add your methods here.
};

extern PENGINE_CORE_API int nPEngine_Core;

PENGINE_CORE_API int fnPEngine_Core(void);
