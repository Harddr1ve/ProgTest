#pragma once

#include <iostream>
#include "Country.h"
using namespace std;

class Menu
{
public:

	Menu();
	~Menu();

	void mainMenu();
	void createDefaultObject();
	void changeDefaultObject(Country* object);
	void createCustomObject();
	void removeObject();

};

