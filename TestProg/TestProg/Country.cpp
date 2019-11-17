#include "Country.h"

Country::Country() {
	countryName = "Default Name";
	countryValue = 0, 1;
	countryPeopleCount = 0;
}

Country::~Country() {
	std::cout << "Object deleted sucsess" << endl;
}

string Country::getCountryName()
{
	return countryName;
}

float Country::getCountryValue()
{
	return countryValue;
}

int Country::getCountryPeopleCount()
{
	return countryPeopleCount;
}
