#include <Beet.h>

class Sandbox : public LegendaryBeetroot::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

LegendaryBeetroot::Application* LegendaryBeetroot::CreateApplication()
{
	return new Sandbox();
}