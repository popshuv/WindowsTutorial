#include <iostream>
#include "Window.h"

int main()
{
	std::cout << "Hello, Windows!\n";

	Window* pWindow = new Window();

	bool running = true;
	while (running)
	{
		if (!pWindow->ProcessMessages())
		{
			std::cout << "Closing Window\n";
			running = false;
		}
		Sleep(10);
	}
	delete pWindow;

	return 0;
}