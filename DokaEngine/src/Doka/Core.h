#pragma once

#ifdef DK_PLATFORM_WINDOWS
	#ifdef DK_BUILD_DLL
		#define DOKA_API __declspec(dllexport)
	#else
		#define DOKA_API __declspec(dllimport)
	#endif
#else
#error Doka only supports Windows!
#endif