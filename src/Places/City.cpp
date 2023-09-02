#include "City.h"

City::City()
{
}

City::City(Country country, std::string cityName, std::pair<double,double> coordinate, double altitude):
	mCountry{ country },
	mCityName{ cityName },
	mCoordinate{coordinate},
	mAltitude{ altitude }
{
}

std::string City::getCityName() const
{
	return mCityName;
}

const std::pair<double, double> City::getCoordinate() const
{
	return mCoordinate;
}


double City::getAltitude() const
{
	return mAltitude;
}
