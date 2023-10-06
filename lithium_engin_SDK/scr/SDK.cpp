#include <lithium.h>

class SandBox : public lithium::Application
{
public:
	SandBox() 
	{

	}
	~SandBox() 
	{

	}
};

lithium::Application* lithium::CreateApplication()
{
	return new SandBox();
}