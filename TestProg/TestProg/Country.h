#pragma once

#include <string>
#include <iostream>
using namespace std;
class Country
{
public:

	Country();
	~Country();

	// Setters
	void setCountryName(string m_countryName);
	void setCountryValue(float m_ountryValue);
	void setCountryPeopleCount(int m_countryPeopleCount);
	// Getters
	string getCountryName();
	float getCountryValue();
	int getCountryPeopleCount();

private :

	string countryName;
	float countryValue;
	int countryPeopleCount;

};

