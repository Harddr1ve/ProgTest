#pragma once

#include <string>
#include <iostream>
using namespace std;
class Country
{
public:

	Country();
	~Country();

	string getCountryName();
	float getCountryValue();
	int getCountryPeopleCount();

private :

	string countryName;
	float countryValue;
	int countryPeopleCount;

};

