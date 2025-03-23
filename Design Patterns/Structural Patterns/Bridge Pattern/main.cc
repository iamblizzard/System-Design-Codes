#include "colors.h"
#include "shapes.h"

#include <iostream>

int main () {
    Circle* circle = new Circle(new Red());
    std::cout << "Color of circle is: ";
    circle->color();

    Square* square = new Square(new Blue());
    std::cout << "Color of square is: ";
    square->color();
}