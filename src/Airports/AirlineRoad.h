#pragma once

#include <utility>

class AirlineRoad
{
    public:
        AirlineRoad();
        AirlineRoad(unsigned short mOrder, std::pair<double, double> begin, std::pair<double, double> end);
        const unsigned short getOrder(); 
        const double getLength();
        const double getAngle();

    private:
        unsigned short mOrder;
        //Relative km
        std::pair<double,double> mBegin;
        std::pair<double,double> mEnd;
};