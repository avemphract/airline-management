#pragma once
#include <cmath>
#include "AirlineRoad.h"
#include <exception>



AirlineRoad::AirlineRoad() :
	mOrder{ 0 },
	mBegin{ std::pair<double, double>(0,0) },
	mEnd{ std::pair<double, double>(0,0) }
{
}

AirlineRoad::AirlineRoad(unsigned short order, std::pair<double, double> begin, std::pair<double, double> end):
	mOrder { order },
	mBegin { begin },
	mEnd { end }
{
}

const unsigned short AirlineRoad::getOrder()
{
	return mOrder;
}

const double AirlineRoad::getLength()
{
	return std::pow(std::pow(mEnd.first - mBegin.first,2) + std::pow(mEnd.second - mBegin.second, 2), 0.5l);
}

const double AirlineRoad::getAngle()
{
	return std::atan2(mEnd.second - mBegin.second, mEnd.first - mBegin.first);
}
