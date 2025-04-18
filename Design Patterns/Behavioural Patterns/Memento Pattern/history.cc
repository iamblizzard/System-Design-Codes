#include "history.h"

void History::makeBackup() {
    history_.push(document_->createMemento());
}

void History::restore() {
    if (history_.empty()) {
        return; // No memento to restore
    }
    DocumentMemento* memento = history_.top();
    history_.pop();
    document_->restore(memento->getContent());
    delete memento;
}