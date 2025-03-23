#include <Doka.h>

class Sandbox : public Doka::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Doka::Application* Doka::CreateApplication()
{
	return new Sandbox();
}