#pragma once
#include "Core.h"
namespace LegendaryBeetroot
{
	class BEET_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};
	//to be defined in client
	Application* CreateApplication();
}

