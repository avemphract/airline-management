#include "Airport.h"

Airport::Airport()
{
}

Airport::Airport(City city, std::string name, std::string code, std::pair<double, double> coordinate, double altitude, std::vector<AirlineRoad> airportsRunaway) :
    mCity{ city },
    mName{ name },
    mCode{ code },
    mCoordinate{ coordinate },
    mAltitude{ altitude },
    mAirportsRoads{ airportsRunaway }
{
}

const City Airport::getCity() const
{
    return mCity;
}

std::string Airport::getName() const
{
    return mName;
}

std::string Airport::getCode() const
{
    return mCode;
}

const std::pair<double, double> Airport::getCoordinate() const
{
    return mCoordinate;
}

double Airport::getAltitude() const
{
    return mAltitude;
}
