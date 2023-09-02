#include <optional>
#include "Route.h"

Airport Route::getFrom()
{
    return mFrom;
}

Airport Route::getTo()
{
    return mTo;
}

std::vector<Passenger> Route::getAllPassenger()
{
    return std::vector<Passenger>();
}

std::optional<Passenger> Route::getPassenger(std::pair<char, unsigned int> seatNumber)
{
    return this->mPassengers[this->mAirplane.getSeat(seatNumber)];
}
