#pragma once

#include <map>
#include <string>
#include <optional>
#include <tuple>

#include "../Places/City.h"
#include "../People/Workers/PilotWorker.h"
#include "../People/Workers/CrewWorker.h"
#include "Seat.h"
#include "AirplaneStatus.h"

typedef bool (*RequirementPilot)(const PilotWorker&);
typedef bool (*RequirementCrewWorker)(const CrewWorker&);


class Airplane
{
    public:
        Airplane(
            std::string icaoCode,
            std::string iataCode,
            std::string airplaneModelName,
            std::string licencePlate,
            std::map<std::pair<char, unsigned int>, PassengerSeat> seats,
            std::vector<std::tuple<std::string, bool, RequirementPilot>> pilots,
            std::vector<std::tuple<std::string, bool, RequirementCrewWorker>> crew,
            AirplaneStatus airplaneStatus,
            double fuelVolume,
            std::optional<City> currentCity
            );
        PassengerSeat getSeat(std::pair<char, unsigned int> seatNumber);
        AirplaneStatus getAirplaneStatus() const;
        const std::vector<std::tuple<std::string, bool, RequirementPilot>> getPilotSeats() const;
        const std::vector<std::tuple<std::string, bool, RequirementCrewWorker>> getCrewSeats() const;

    private:
        std::string mIcaoCode;
        std::string mIataCode;
        std::string mAirplaneModelName;
        std::string mLicencePlate;
        std::map<std::pair<char,unsigned int>, PassengerSeat> mSeats;
        std::vector<std::tuple<std::string, bool, RequirementPilot>> mPilots;
        std::vector<std::tuple<std::string, bool, RequirementCrewWorker>> mCrew;

        AirplaneStatus mAirplaneStatus;
        double mFuelVolume;
        std::optional<City> mCurrentCity;

};
