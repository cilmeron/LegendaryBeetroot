#pragma once

#ifdef BEET_PLATFORM_WINDOWS

extern LegendaryBeetroot::Application* LegendaryBeetroot::CreateApplication();

int main(int argc, char** argv)
{
	auto app = LegendaryBeetroot::CreateApplication();
	app->Run();
	delete app;
}
#endif
