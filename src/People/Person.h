#pragma once

#include <string>
#include <ctime>
#include <vector>
#include "Document.h"
#include "../Places/Country.h"

class Person
{
    public:
        Person(std::string givenName, std::string middleName, std::string surname, std::time_t birthday);
        std::string getGivenName() const;
        std::string getMiddleName() const;
        std::string getSurname() const;
        std::time_t getBirthday() const;
        double getAge() const;
        
        const std::vector<Document*> getDocuments() const;
        void addDocument(Document* document);
        ~Person();

    private:
        std::string mGivenName;
        std::string mMiddleName;
        std::string mSurname;
        std::time_t mBirthday;

        std::vector<Document*> mDocuments;
};
