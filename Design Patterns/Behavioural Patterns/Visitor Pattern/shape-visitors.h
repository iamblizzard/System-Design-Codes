#ifndef SHAPE_VISITORS_H
#define SHAPE_VISITORS_H

#include "shape-visitor-interface.h"
#include "shapes.h"

class AreaCalculator : public ShapeVisitor {
public:
    void visit(Circle* circle) override;
    void visit(Square* square) override;
    void visit(Rectangle* rectangle) override;
};

class PerimeterCalculator : public ShapeVisitor {
public:
    void visit(Circle* circle) override;
    void visit(Square* square) override;
    void visit(Rectangle* rectangle) override;
};

#endif // SHAPE_VISITORS_H