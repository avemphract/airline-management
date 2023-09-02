#include "Document.h"

#include <utility>

const long Document::getId() const
{
    return mId;
}

std::string Document::getDocumentType() const
{
    return mDocumentName;
}

std::time_t Document::getValidFrom() const
{
    return mValidFrom;
}

std::optional<std::time_t> Document::getValidTo() const
{
    return mValidTo;
}

bool Document::isValid() const
{
    return isValid(std::time(0));
}

bool Document::isValid(std::time_t) const
{
    return false;
}

void Document::loadDocumentFromDb()
{
}
const std::pair<unsigned char const*, unsigned char> Document::getDocument() const
{
    if (this->mLength) {
        return std::pair<unsigned char const*, unsigned int>(pDocumentPdfByteArray, mLength);
    }
    else
    {
        return std::pair<unsigned char const*, unsigned int>(nullptr, mLength);;
    }
}

Document::~Document()
{
    if (!mLength) {
        for (unsigned int i = 0; i < mLength; i++) {
            delete (pDocumentPdfByteArray+i);
        }
    }
    if (pDocumentPdfByteArray)
        pDocumentPdfByteArray = nullptr;
}
