#pragma once

#include <memory>

#include "../Person.h"
#include "../../Airplanes/Airplane.h"
#include <map>
class MaintenanceWorker
{
    public:
        unsigned short getLevel() const;
        const std::shared_ptr<Person> getPersonDetails() const;
        
    private:
        unsigned short mLevel;
        unsigned int mExperienceHour;
        std::shared_ptr<Person> mPerson;
};
