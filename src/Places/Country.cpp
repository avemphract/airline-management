#include "Country.h"

Country::Country()
{
}

Country::Country(std::string countryName):
    mCountryName{countryName}
{
}

std::string Country::getCountryName()
{
    return mCountryName;
}
