#pragma once

#include <string>
#include <utility>
#include <vector>

#include "AirlineRoad.h"
#include "../Places/City.h"

class Airport
{
    public:
        Airport();
        Airport(City city, std::string name, std::string code, std::pair<double, double> coordinate, double altitude, std::vector<AirlineRoad> airportsRoads);
        const City getCity() const;
        
        std::string getName() const;
        std::string getCode() const;
        
        const std::pair<double,double> getCoordinate() const;
        double getAltitude() const;

    private:
        City mCity;
        
        std::string mName;
        std::string mCode;

        std::pair<double,double> mCoordinate;
        double mAltitude;
        std::vector<AirlineRoad> mAirportsRoads;
};
