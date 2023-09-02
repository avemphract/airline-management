#pragma once

#include <map>
#include <optional>
#include "../Airports/Airport.h"
#include "../Airplanes/Seat.h"
#include "../People/Passengers/Passenger.h"
#include "../People/Workers/PilotWorker.h"
#include "../Airplanes/Airplane.h"
#include "../People/Workers/CrewWorker.h"

class Route
{
    public:
        Airport getFrom();
        Airport getTo();
        std::vector<Passenger> getAllPassenger();
        std::optional<Passenger> getPassenger(std::pair<char,unsigned int> seatNumber);
        bool addPassenger(std::pair<char, unsigned int> seatNumber, Passenger passenger);
        bool addPilot(size_t taskIndex, PilotWorker pilot);
        bool addCrew(size_t taskIndex, CrewWorker crew);
        bool isValid();
        
    private:
        Airport mFrom;
        unsigned short mFromAirportRoadOrder;
        Airport mTo;
        unsigned short mToAirportRoadOrder;
        
        Airplane mAirplane;
        
        std::map<PassengerSeat, std::optional<Passenger>> mPassengers;
        std::map<size_t, PilotWorker> mRoutePilots;
        std::map<size_t, CrewWorker> mRouteCrews;
};
