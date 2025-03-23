#pragma once

#ifdef DK_PLATFORM_WINDOWS

extern Doka::Application* Doka::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Doka::CreateApplication();
	app->Run();
	delete app;
}

#endif