#pragma once

#ifdef BEET_PLATFORM_WINDOWS
	#ifdef BEET_BUILD_DLL
		#define BEET_API __declspec(dllexport)
	#else
		#define BEET_API __declspec(dllimport)
	#endif
#else
	#error LegendaryBeetroot only supports Windows!
#endif

#define BIT(x) (1 << x)