#pragma once

#include <memory>
#include <string>
#include "../Person.h"

class GroundServicesWorker
{
    public:
        std::string getExpertise() const;
        const Person* getPersonDetails() const;
    private:
        std::shared_ptr<Person> mPerson;
        std::string mExpertise;
};

