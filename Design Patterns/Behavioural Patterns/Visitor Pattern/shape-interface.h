#ifndef SHAPE_INTERFACE_H
#define SHAPE_INTERFACE_H

// Forward declaration of ShapeVisitor to avoid circular dependency
class ShapeVisitor;

class Shape {
public:
    virtual void accept(ShapeVisitor* v) = 0;
};

#endif // SHAPE_INTERFACE_H