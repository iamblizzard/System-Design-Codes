#ifndef SHAPE_VISITOR_INTERFACE_H
#define SHAPE_VISITOR_INTERFACE_H

// Forward declaration of shape classes to avoid circular dependency.
class Circle;
class Square;
class Rectangle;

class ShapeVisitor {
public:
    virtual void visit(Circle* circle) = 0;
    virtual void visit(Square* square) = 0;
    virtual void visit(Rectangle* rectangle) = 0;
};

#endif // SHAPE_VISITOR_INTERFACE_H