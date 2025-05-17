#ifndef SHAPES_H
#define SHAPES_H

#include "shape-interface.h"
#include "shape-visitor-interface.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getRadius() const;
    void accept(ShapeVisitor* v) override;
};
class Square : public Shape {
private:
    double sideLength;
public:
    Square(double s) : sideLength(s) {}
    double getSideLength() const;
    void accept(ShapeVisitor* v) override;
};
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getWidth() const;
    double getHeight() const;
    void accept(ShapeVisitor* v) override;
};

#endif // SHAPES_H