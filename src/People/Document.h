#pragma once

#include <string>
#include <ctime>
#include <optional>
#include "../Places/Country.h"

class Document{
    public:
        const long getId() const;
        std::string getDocumentType() const;
        std::time_t getValidFrom() const;
        std::optional<std::time_t> getValidTo() const;
        bool isValid() const;
        bool isValid(std::time_t) const;
        void loadDocumentFromDb();
        const std::pair<unsigned char const*, unsigned char> getDocument() const;

        ~Document();
    private:
        unsigned long mId;
        std::string mDocumentName;
        Country mGivenCountry;

        std::time_t mValidFrom;
        std::optional<std::time_t> mValidTo;
        
        unsigned char const* pDocumentPdfByteArray;
        unsigned int mLength = 0;
};