#include <iostream>

#include "Menu.h"
#include "Country.h"

int main(void)
{
	string bigCountry;
	float tmp, tmp2;
	float tmpCount;

	Menu* menu = new Menu;
	
	menu->mainMenu();

	&menu->customConstructObj->getCountryName();
	tmp = menu->customConstructObj->getCountryPeopleCount() / menu->customConstructObj->getCountryValue();

	for (int i = 0; i < 3; i++)
	{
		tmpCount = menu->customObjectsArray[i].getCountryPeopleCount() / menu->customConstructObj[i].getCountryValue();
		tmp2 = menu->customObjectsArray[i+1].getCountryPeopleCount() / menu->customConstructObj[i+1].getCountryValue();
		if (tmpCount > tmp2) 
		{
			bigCountry = menu->customObjectsArray[i].getCountryName();
		}
		else
		{
			bigCountry = menu->customObjectsArray[i+1].getCountryName();
		}
	}

	std::cout << bigCountry << tmp2 << tmpCount;

	return 0;
}
