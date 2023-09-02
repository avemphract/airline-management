#pragma once
#include "Airplane.h"

#include <vector>
#include <tuple>

Airplane::Airplane(std::string icaoCode, std::string iataCode, std::string airplaneModelName, std::string licencePlate, std::map<std::pair<char, unsigned int>, PassengerSeat> seats, std::vector<std::tuple<std::string, bool, RequirementPilot>> pilots, std::vector<std::tuple<std::string, bool, RequirementCrewWorker>> crew, AirplaneStatus airplaneStatus, double fuelVolume, std::optional<City> currentCity):
	mIcaoCode{ icaoCode },
	mIataCode{ iataCode },
	mAirplaneModelName{ airplaneModelName },
	mLicencePlate{ licencePlate },
	mSeats{ seats },
	mPilots{ pilots },
	mCrew{ crew },
	mAirplaneStatus{ airplaneStatus },
	mFuelVolume{ fuelVolume },
	mCurrentCity{ currentCity }

{
}

PassengerSeat Airplane::getSeat(std::pair<char, unsigned int> seatNumber)
{
	return mSeats[seatNumber];
}
