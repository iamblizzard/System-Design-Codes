#ifndef HISTORY_H
#define HISTORY_H

#include "document-memento.h"
#include "document.h"

#include <stack>

class History {
private:
    Document* document_;
    std::stack<DocumentMemento*> history_;
public:
    History(Document* document) :
        document_(document), history_(std::stack<DocumentMemento*>()) {}

    void makeBackup();
    void restore();
};

#endif // HISTORY_H