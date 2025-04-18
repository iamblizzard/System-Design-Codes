#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "document-memento.h"

#include <string>

class Document  {
private:
    std::string content_;
public:
    Document(const std::string& content) : content_(content) {}

    void write(const std::string& text);
    std::string read() const;

    void restore(const std::string& content);
    DocumentMemento* createMemento();
};

#endif // DOCUMENT_H