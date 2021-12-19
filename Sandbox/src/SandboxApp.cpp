#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

// 仅需要写一个继承类并重写创建函数返回类的指针即可
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}