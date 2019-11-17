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
		<< "2. Create custom Country Object" << endl << "3. Print default Contry Object" << endl
		<< "4. Change default Country Object" << endl << "5. Exit" << endl;
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
		int val = 0;
		system("cls");
		std::cout << "How many objects you want" << endl;
		std::cin >> val;
		createCustomObject(val);
		break;
	}
	case 3: {
		break;
	}
	case 5: {
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
	Country* defaultCountry = new Country();
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
			defaultCountry->~Country();
			mainMenu();
			break;
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

void Menu::createCustomObject(int val)
{
	char sw;
	bool again = true;
	system("cls");
	std::cout << "How many objects create\n";
	Country* arr = new Country[val];
	for (size_t i = 0; i < val; i++)
	{
		printObject(&arr[i]);
	}
	while (again)
	{
		std::cout << "\nDo you want\n1. Delete Objects\n2. Customize Objects\n3. Print Objects\n";
		std::cin >> sw;
		if (sw == 'a')
		{
			delete[]arr;
			mainMenu();
		}
		else if (sw == 'b')
		{
			system("cls");
			int a = 0;
			float countryValue = 0;
			std::cout << "\nNuber of Object\n";
			std::cin >> a;
			std::cout << "Current Value\n" << arr[a].getCountryValue() << "\nEnter New Value\n";
			std::cin >> countryValue;
			arr[a].setCountryValue(countryValue);
		}
		else if (sw == 'c')
		{
			system("cls");
			for (size_t i = 0; i < val; i++)
			{
				std::cout << "Number of Object " << i << endl;
				printObject(&arr[i]);
			}
		}
		else if (sw == 'd')
		{
			again = false;
			mainMenu();
		}
	}
}

void Menu::removeObject()
{
}

void Menu::printObject(Country* object)
{
	std::cout << object->getCountryName() << "  " << object->getCountryPeopleCount() << "  " << object->getCountryValue() << endl;
}
