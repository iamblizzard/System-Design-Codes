#include <iostream>
#include "shapes.h"
#include "shape-visitors.h"

int main() {
    Circle* circle = new Circle(5);
    Square* square = new Square(4);
    Rectangle* rectangle = new Rectangle(3, 6);

    AreaCalculator* areaCalculator = new AreaCalculator();
    PerimeterCalculator* perimeterCalculator = new PerimeterCalculator();

    circle->accept(areaCalculator);
    square->accept(areaCalculator);
    rectangle->accept(areaCalculator);

    circle->accept(perimeterCalculator);
    square->accept(perimeterCalculator);
    rectangle->accept(perimeterCalculator);
}
