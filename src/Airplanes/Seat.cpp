#include "Seat.h"

PassengerSeat::PassengerSeat() :
	mSeatType{ PassengerSeatType::UNDEFINED_SEAT },
	mRequiredEmergencyInform { false },
	mOrder { 0 }
{
}

PassengerSeat::PassengerSeat(PassengerSeatType seatType, bool requiredEmergencyInform, unsigned short order) :
	mSeatType{ seatType },
	mRequiredEmergencyInform{ requiredEmergencyInform },
	mOrder { order }
{
}

const unsigned short PassengerSeat::getOrder() const
{
	return mOrder;
}

bool PassengerSeat::operator<(const PassengerSeat& rhs) const
{
	return this->getOrder() < rhs.mOrder;
}
