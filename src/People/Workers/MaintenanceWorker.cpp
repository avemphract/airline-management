#include <algorithm>

#include "MaintenanceWorker.h"
#include "../Document.h"

#include <utility>


unsigned short MaintenanceWorker::getLevel() const
{
    return mLevel;
}

const std::shared_ptr<Person> MaintenanceWorker::getPersonDetails() const
{
    return mPerson;
}
