#pragma once
#ifdef lithium_engin_PLATFORM_WINDOWS
	#ifdef lithium_engin_BUILD_DLL
		#define lithium_engin_API_declspec(dllexport)
	#else
		#define lithium_engin_API_declspec(dllimport)
	#endif
#else
	#error lithium_engin only support Windows! 
#endif