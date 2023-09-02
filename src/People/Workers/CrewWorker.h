#pragma once

#include <memory>
#include "../Person.h"

class CrewWorker
{
    public:
        unsigned int getExperienceHours() const;
        const std::shared_ptr<Person> getPersonDetails() const;
    private:
        unsigned int  mExperienceHours;
        std::shared_ptr<Person> mPerson;
};

    