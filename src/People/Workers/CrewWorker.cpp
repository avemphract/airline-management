#include "CrewWorker.h"

unsigned int CrewWorker::getExperienceHours() const
{
	return mExperienceHours;
}

const std::shared_ptr<Person> CrewWorker::getPersonDetails() const
{
	return mPerson;
}
