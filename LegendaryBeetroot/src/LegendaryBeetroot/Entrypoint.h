#pragma once

#ifdef BEET_PLATFORM_WINDOWS

extern LegendaryBeetroot::Application* LegendaryBeetroot::CreateApplication();

int main(int argc, char** argv)
{

	LegendaryBeetroot::Log::Init();
	BEET_CORE_WARN("Initialized Log!");
	int a = 42;
	BEET_INFO("Hello! Var={0}", a);
	auto app = LegendaryBeetroot::CreateApplication();
	app->Run();
	delete app;
}
#endif
