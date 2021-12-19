#pragma once
#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application() = default;

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();
}

