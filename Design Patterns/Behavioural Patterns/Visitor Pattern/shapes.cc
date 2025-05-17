#include "shapes.h"

void Circle::accept(ShapeVisitor* v) {
    v->visit(this);
}
double Circle::getRadius() const {
    return radius;
}

void Square::accept(ShapeVisitor* v) {
    v->visit(this);
}
double Square::getSideLength() const {
    return sideLength;
}

void Rectangle::accept(ShapeVisitor* v) {
    v->visit(this);
}
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getHeight() const {
    return height;
}
