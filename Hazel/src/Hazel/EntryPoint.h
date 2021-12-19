#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// windows³ÌÐò
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("³õÊ¼»¯Hazel!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
