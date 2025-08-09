#include <iostream>
#include "shapes.h"
#include "shape-visitors.h"

int main() {
    Shape* circle = new Circle(5);
    Shape* square = new Square(4);
    Shape* rectangle = new Rectangle(3, 6);

    ShapeVisitor* areaCalculator = new AreaCalculator();
    ShapeVisitor* perimeterCalculator = new PerimeterCalculator();

    circle->accept(areaCalculator);
    square->accept(areaCalculator);
    rectangle->accept(areaCalculator);

    circle->accept(perimeterCalculator);
    square->accept(perimeterCalculator);
    rectangle->accept(perimeterCalculator);
}
