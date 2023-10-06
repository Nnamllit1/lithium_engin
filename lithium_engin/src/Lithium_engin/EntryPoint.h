#pragma once

#ifdef lithium_engin_PLATFORM_WINDOWS

extern lithium::Application* lithium::CreateApplication();

int main(int argc, char** argv)
{
	//printf("Lithium_engin starting ...\n");
	auto app = lithium::CreateApplication();
	//printf("Lithium_engin starting finish\n");
	app->Run();
	delete app;
}
#endif // DEBUG
