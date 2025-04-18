#include "document.h"

void Document::write(const std::string& text) {
    content_ += text;
}

std::string Document::read() const {
    return content_;
}

void Document::restore(const std::string& content) {
    content_ = content;
}

DocumentMemento* Document::createMemento() {
    return new DocumentMemento(content_);
}