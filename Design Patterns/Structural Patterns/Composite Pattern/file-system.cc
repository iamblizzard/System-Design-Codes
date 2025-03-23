#include "file-system.h"

#include <iostream>

void File::display() {
    std::cout << "File: " << name_ << std::endl;
}

void Directory::add(FileSystemComponent* component) {
    children_.push_back(component);
}

void Directory::display() {
    std::cout << "Directory: " << name_ << std::endl;
    for (FileSystemComponent* child : children_) {
        child->display();
    }
}