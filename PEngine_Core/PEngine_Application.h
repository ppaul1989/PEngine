#pragma once
#ifdef PENGINE_CORE_EXPORTS
#define PENGINE_CORE_API __declspec(dllexport)
#else
#define PENGINE_CORE_API __declspec(dllimport)
#endif

class PENGINE_CORE_API PEngine_Application
{
public:
	static PEngine_Application *getInstance() {
			static PEngine_Application lInstance;
			return &lInstance;
		}
private:
	PEngine_Application();
	~PEngine_Application();
};

