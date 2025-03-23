#ifndef COLORS_H
#define COLORS_H

#include <iostream>

class Color {
public:
    virtual void color() = 0;
};

class Red : public Color {
public:
    void color() {
        std::cout << "red" << std::endl;
    }
};

class Blue : public Color {
public:
    void color() {
        std::cout << "blue" << std::endl;
    }
};

#endif // COLORS_H