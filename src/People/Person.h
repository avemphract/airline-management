#pragma once

#include <string>
#include <ctime>
#include <vector>
#include "Document.h"
#include "../Places/Country.h"
#include "../Others/Schedule.h"

class Person
{
    public:
        Person(std::string givenName, std::string middleName, std::string surname, std::time_t birthday);
        std::string getGivenName() const;
        std::string getMiddleName() const;
        std::string getSurname() const;
        std::time_t getBirthday() const;
        double getAge() const;
        bool isPersonAvaiable(std::time_t wantedBeginTime, std::time_t wantedEndTime);
        const std::vector<Document*> getDocuments() const;
        const std::vector<Schedule> getSchedules() const;
        void addSchedule(std::time_t beginTime, std::time_t estimatedEndTime, std::string taskName);
        void addDocument(Document* document);
        ~Person();

    private:
        std::string mGivenName;
        std::string mMiddleName;
        std::string mSurname;
        std::time_t mBirthday;

        std::vector<Document*> mDocuments;
};
