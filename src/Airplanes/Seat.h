#pragma once

enum PassengerSeatType {
    UNDEFINED_SEAT, ECO, BUS
};

class PassengerSeat
{
    public:
        PassengerSeat();
        PassengerSeat(PassengerSeatType seatType, bool requiredEmergencyInform, unsigned short order);
        const unsigned short getOrder() const;
        bool operator<(const PassengerSeat& rhs) const;
    private:
        PassengerSeatType mSeatType;
        bool mRequiredEmergencyInform;
        unsigned short mOrder;
};
