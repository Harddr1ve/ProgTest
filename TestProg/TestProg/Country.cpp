#include "Country.h"

Country::Country()
{
	countryName = "Default Name";
	countryValue = 0, 1;
	countryPeopleCount = 0;
}

Country::Country(string m_countryName, float m_countryValue, int m_countryPeopleCount)
{
	countryName = m_countryName;
	countryValue = m_countryValue;
	countryPeopleCount = m_countryPeopleCount;
}


Country::~Country() {
	std::cout << "Object deleted sucsess" << endl;
}

void Country::setCountryName(string m_countryName)
{
	countryName = m_countryName;
}

void Country::setCountryValue(float m_ountryValue)
{
	countryValue = m_ountryValue;
}

void Country::setCountryPeopleCount(int m_countryPeopleCount)
{
	countryPeopleCount = m_countryPeopleCount;
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
