#ifndef SHAPES_H
#define SHAPES_H

#include "colors.h"

class Circle {
public:
    Circle(Color* color) : color_(color) {}
    void color() {
        color_->color();
    }

private:
    Color* color_;
};

class Square {
public:
    Square(Color* color) : color_(color) {}
    void color() {
        color_->color();
    }

private:
    Color* color_;
};

#endif // SHAPES_H