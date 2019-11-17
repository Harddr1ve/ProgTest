#include "Menu.h"

Menu::Menu() {

}

Menu::~Menu() {

}

void Menu::mainMenu()
{
	int var = 0;
	system("cls");
	std::cout << "Menu" << endl << "Select action" << endl << "1. Create new defaut Country Object" << endl
		<< "2. Remove default Country Object" << endl << "3. Print default Contry Object" << endl
		<< "4. Change default Country Object" << endl << "5. Exit" << endl;
	std::cin >> var;
	switch (var)
	{
	case 1: {
		system("cls");
		std::cout << "Creating default custom object" << endl;
		createCustomObject();
		break;
	}
	case 2: {
		std::cout << "Some SHIT";
		break;
	}
	case 5: {
		break;
	}
	default:
		break;
	}
}

void Menu::createCustomObject()
{
	int var = 0;
	Country* defaultCountry = new Country();
	std::cout << "New object created" << endl << "Select action" << endl << "1. Remove object" << endl 
		<< "2. Change object" << endl << "3. Print object" << endl << "4. Return to menu" << endl;
	std::cin >> var;
	switch (var)
	{
	case 1: {
		defaultCountry->~Country();
		break;
	}
	case 3: {
		system("cls");
		std::cout << defaultCountry->getCountryName() << "  " << defaultCountry->getCountryPeopleCount() << "  " << defaultCountry->getCountryValue();
		break;
	}
	case 4: {
		mainMenu();
		break;
	}
	default:
		break;
	}
}

void Menu::removeObject()
{
}
