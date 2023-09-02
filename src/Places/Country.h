#pragma once

#include <string>

class Country
{
    public:
        Country();
        Country(std::string countryName);
        std::string getCountryName();
    private:
        std::string mCountryName;
};