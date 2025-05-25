#include "colors.h"
#include "shapes.h"

#include <iostream>

int main () {
    Shape* circle = new Circle(new Red());
    circle->shape();

    Shape* square = new Square(new Blue());
    square->shape();
}