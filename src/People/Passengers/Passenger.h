#pragma once

#include "../Person.h"
#include <memory>


enum PassengerType {
    UNDEFINED_PASSENGER, BABY, TEEN, ADULT
};

class Passenger{
    public:
        Passenger();
        Passenger(std::shared_ptr<Person> personDetails);
        std::shared_ptr<const Person> getPersonDetails();
        PassengerType getPassengerType();
        bool addChild(Passenger* passenger);
        ~Passenger();
        
    private:
        std::vector<Passenger*> mChildren;
        std::shared_ptr<Person> mPersonDetails;
};
