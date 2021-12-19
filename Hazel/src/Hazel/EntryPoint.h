#pragma once

#ifdef HZ_FLATFORM_WINDOWS

// windows³ÌÐò
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Hazel engine!" << std::endl;
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}


#endif // HZ_PLATFORM_WINDOWS
