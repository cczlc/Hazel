#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

// ����Ҫдһ���̳��ಢ��д���������������ָ�뼴��
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}