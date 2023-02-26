#include "Application.h"

#include "LegendaryBeetroot/Events/ApplicationEvent.h"
#include "LegendaryBeetroot/Log.h"

namespace LegendaryBeetroot
{
	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		BEET_TRACE(e);
		while (true);
	}
}