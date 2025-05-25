#ifndef SHAPES_H
#define SHAPES_H

#include "colors.h"

class Shape {
public:
    Shape(Color* color) : color_(color) {}
    void color() {
        color_->color();
    }
    virtual void shape() = 0;

private:
    Color* color_;
};

class Circle : public Shape {
public:
    Circle(Color* color) : Shape(color) {}
    void shape() {
        std::cout << "Circle with color: ";
        color();
    }
};

class Square : public Shape {
public:
    Square(Color* color) : Shape(color) {}
    void shape() {
        std::cout << "Square with color: ";
        color();
    }
};

#endif // SHAPES_H