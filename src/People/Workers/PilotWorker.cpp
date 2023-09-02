#include "PilotWorker.h"

const unsigned short PilotWorker::getLevel()
{
	return mLevel;
}

const Person* PilotWorker::getPersonDetails() const
{
	return mPerson.get();
}
