#include <iostream>

#include "Menu.h"

int main(void)
{
	std::cout << "Hello World";

	Menu* menu = new Menu;
	
	menu->mainMenu();

	return 0;
}