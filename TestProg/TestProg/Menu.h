#pragma once

#include <iostream>
#include "Country.h"
using namespace std;

class Menu
{
public:

	Menu();
	~Menu();

	int tmp = 0;
	void mainMenu();
	void createDefaultObject();
	void changeDefaultObject(Country* object);
	void createCustomObject();
	void printObject(Country* object);

	Country* defaultCountry = new Country;
	Country* customObjectsArray = new Country[4];
	Country* customConstructObj = new Country;
};

