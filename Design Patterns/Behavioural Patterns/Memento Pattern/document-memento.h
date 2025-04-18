#ifndef DOCUMENT_MEMENTO_H
#define DOCUMENT_MEMENTO_H

#include <string>

class DocumentMemento {
private:
    std::string content_;
public:
    DocumentMemento(std::string& content) : content_(content) {}
    std::string getContent();
};

#endif // DOCUMENT_MEMENTO_H