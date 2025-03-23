#pragma once

#ifdef DK_PLATFORM_WINDOWS

extern Doka::Application* Doka::CreateApplication();

int main(int argc, char** argv)
{
	Doka::Log::Init();
	DK_CORE_WARN("Initialized Log!");
	int a = 5;
	DK_INFO("Hello! Var={0}", a);

	auto app = Doka::CreateApplication();
	app->Run();
	delete app;
}

#endif