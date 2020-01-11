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
		<< "2. Create custom Country Object" << endl << "3. Print all Objects" << endl
		<< "4. Change default Country Object" << endl << "5. Create object with custom constructor " << endl
		<< "6. Exit" << endl;
	std::cin >> var;
	switch (var)
	{
	case 1: {
		system("cls");
		std::cout << "Creating default custom object" << endl;
		createDefaultObject();
		break;
	}
	case 2: {
		system("cls");
		std::cout << " Please ener 4 new objects" << endl;
		createCustomObject();
		break;
	}
	case 3: {
		printObject(defaultCountry);
		for (size_t i = 0; i < 4; i++)
		{
			std::cout << "Number of Object " << i << endl;
			printObject(&customObjectsArray[i]);
		}
		break;
	}
	case 5: {
		string countryName;
		float countryValue;
		int countryPeopleCount;

		std::cout << endl << "Enter Country Name" << endl;
		std::cin >> countryName;
		std::cout << endl << "Enter Country Value" << endl;
		std::cin >> countryValue;
		std::cout << endl << "Enter Country PeopleCount" << endl;
		std::cin >> countryPeopleCount;
		Country tmp(countryName, countryValue, countryPeopleCount);
		customConstructObj = &tmp;
		printObject(customConstructObj);
		break;
	}
	case 6:
	{
		break;
	}
	default:
		break;
	}
}

void Menu::createDefaultObject()
{
	int var = 0;
	bool repeat = true;
	std::cout << "New object created" << endl;
	while (repeat)
	{
		std::cout << "Select action" << endl << "1. Remove object" << endl
			<< "2. Change object" << endl << "3. Print object" << endl << "4. Return to menu" << endl;
		std::cin >> var;

		switch (var)
		{
		case 1: {
			defaultCountry->~Country();
			break;
		}
		case 2: {
			changeDefaultObject(defaultCountry);
		}
		case 3: {
			system("cls");
			std::cout << defaultCountry->getCountryName() << "  " << defaultCountry->getCountryPeopleCount() << "  " << defaultCountry->getCountryValue();
			break;
		}
		case 4: {
			repeat = false;
			mainMenu();
		}
		default:
			break;
		}
	}

}

void Menu::changeDefaultObject(Country* object)
{
	bool repeat = true;
	int action = 0, peopleCount;
	string name;
	float value;
	while (repeat)
	{
		system("cls");
		std::cout << "Select action" << endl << "1. Change Name" << endl << "2. Change People count" << endl
			<< "3. Change Value" << endl << "4. Return" << endl;
		std::cin >> action;

		switch (action)
		{
		case 1: {
			std::cout << "Current Name" << object->getCountryName() << endl << "Enter new Name" << endl;
			std::cin >> name;
			object->setCountryName(name);
			break;
		}
		case 2: {
			std::cout << "Current People Count" << object->getCountryPeopleCount() << endl << "Enter new People Count" << endl;
			std::cin >> peopleCount;
			object->setCountryPeopleCount(peopleCount);
			break;
		}
		case 3: {
			std::cout << "Current Value" << object->getCountryValue() << endl << "Enter new Value" << endl;
			std::cin >> value;
			object->setCountryValue(value);
			break;
		}
		case 4: {
			repeat = false;
			break;
		}
		default:
			break;
		}
	}
}

void Menu::createCustomObject()
{
	int sw;
	bool again = true;
	system("cls");
	
	for (size_t i = 0; i < 4; i++)
	{
		printObject(&customObjectsArray[i]);
	}
	while (again)
	{
		std::cout << "\nDo you want\n1. Delete Objects\n2. Customize Objects\n3. Print Objects\n4.Return";
		std::cin >> sw;
		switch (sw)
		{
		case 1: {
			delete[]customObjectsArray;
			mainMenu();
			break;
		}

		case 2:	{
			system("cls");
			int a = 0;
			float countryValue = 0;
			std::cout << "\nNuber of Object\n";
			std::cin >> a;
			changeDefaultObject(&customConstructObj[a]);
			break;
		}

		case 3:
		{
			system("cls");
			for (size_t i = 0; i < 4; i++)
			{
				std::cout << "Number of Object " << i << endl;
				printObject(&customObjectsArray[i]);
			}
			break;
		}

		case 4:{
			again = false;
			mainMenu();
			break;
		}

		default:
			break;
		}
	}
}

void Menu::printObject(Country* object)
{
	std::cout << object->getCountryName() << "  " << object->getCountryPeopleCount() << "  " << object->getCountryValue() << endl;
}
