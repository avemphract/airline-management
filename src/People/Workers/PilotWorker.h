#pragma once
class PilotWorker
{
	public:
		unsigned short getLevel() const;
		unsigned short getFlightHour() const;
        const Person* getPersonDetails() const;
		
	private:
        std::shared_ptr<Person> mPerson;
		unsigned short mLevel;
		unsigned int mFlightHours;
};