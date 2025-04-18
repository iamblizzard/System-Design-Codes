#include "history.h"
#include "document.h"

#include <iostream>

int main () {
    Document* doc = new Document("Initial content");
    History* history = new History(doc);

    std::cout << "Current content: " << doc->read() << std::endl;
    history->makeBackup();
    doc->write(" - Additional content");

    std::cout << "Current content: " << doc->read() << std::endl;
    history->makeBackup();
    doc->write(" - More content");

    std::cout << "Current content: " << doc->read() << std::endl;
    history->restore();
    std::cout << "Restored content: " << doc->read() << std::endl;

    history->restore();
    std::cout << "Restored content: " << doc->read() << std::endl;
}