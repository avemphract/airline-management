#include "Person.h"

Person::Person(std::string givenName, std::string middleName, std::string surname, std::time_t birthday):
    mGivenName{givenName}, mMiddleName{middleName}, mSurname{surname}, mBirthday{birthday}
{
}

std::string Person::getGivenName() const
{
    return mGivenName;
}

std::string Person::getMiddleName() const
{
    return mMiddleName;
}

std::string Person::getSurname() const
{
    return mSurname;
}

std::time_t Person::getBirthday() const
{
    return mBirthday;
}

double Person::getAge() const
{
    return 0.0;
}

const std::vector<Document*> Person::getDocuments() const
{
    return mDocuments;
}

void Person::addDocument(Document* document)
{
    mDocuments.push_back(document);
}

Person::~Person()
{
    for (Document* d:mDocuments)
    {
        delete d;
    }
    mDocuments.clear();
}
