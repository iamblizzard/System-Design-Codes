#include "shape-visitors.h"
#include "shapes.h"

#include <iostream>
#include <cmath>

void AreaCalculator::visit(Circle* circle) {
    double area = M_PI * std::pow(circle->getRadius(), 2);
    std::cout << "Area of Circle: " << area << std::endl;
}
void AreaCalculator::visit(Square* square) {
    double area = std::pow(square->getSideLength(), 2);
    std::cout << "Area of Square: " << area << std::endl;
}
void AreaCalculator::visit(Rectangle* rectangle) {
    double area = rectangle->getWidth() * rectangle->getHeight();
    std::cout << "Area of Rectangle: " << area << std::endl;
}

void PerimeterCalculator::visit(Circle* circle) {
    double perimeter = 2 * M_PI * circle->getRadius();
    std::cout << "Perimeter of Circle: " << perimeter << std::endl;
}
void PerimeterCalculator::visit(Square* square) {
    double perimeter = 4 * square->getSideLength();
    std::cout << "Perimeter of Square: " << perimeter << std::endl;
}
void PerimeterCalculator::visit(Rectangle* rectangle) {
    double perimeter = 2 * (rectangle->getWidth() + rectangle->getHeight());
    std::cout << "Perimeter of Rectangle: " << perimeter << std::endl;
}