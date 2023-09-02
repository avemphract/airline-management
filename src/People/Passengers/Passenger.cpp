#include "Passenger.h"
#include <ctime>
#include <memory>

#define secondToYear 1/(60*60*24*365.25)

Passenger::Passenger()
{
}

Passenger::Passenger(std::shared_ptr<Person> personDetails):
	mPersonDetails{ personDetails }
{
}

std::shared_ptr<const Person> Passenger::getPersonDetails()
{
	return this->mPersonDetails;
}

PassengerType Passenger::getPassengerType()
{
	double year = std::difftime(this->mPersonDetails.get()->getBirthday(), std::time(0)) * secondToYear;
	if (year < 6) {
		return PassengerType::BABY;
	}
	else if (year < 18) {
		return PassengerType::TEEN;
	}
	else {
		return PassengerType::ADULT;
	}
}

Passenger::~Passenger()
{
	mPersonDetails.reset();
}

bool Passenger::addChild(Passenger* passenger)
{
	switch (passenger->getPassengerType())
	{
		case PassengerType::BABY:
		case PassengerType::TEEN:
			mChildren.push_back(passenger);
			return true;
		default:
			return false;
	}
}
