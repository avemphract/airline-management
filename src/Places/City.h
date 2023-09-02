#pragma once

#include "Country.h"
#include <string>

class City
{
    public:
        City();
        City(Country country, std::string cityName, std::pair<double, double> coordinate, double mAltitude);
        std::string getCityName() const;
        const std::pair<double, double> getCoordinate() const;
        double getAltitude() const;


    private:
        Country mCountry;
        std::string mCityName;
        std::pair<double,double> mCoordinate;
        double mAltitude;
};
