#ifndef FOREST_H
#define FOREST_H

#include "tree.h"

#include <vector>

class Forest {
public:
Tree* plantTree(int x, int y, std::string name, Color color);
void drawTrees();

private:
std::vector<Tree*> trees_;
};

#endif // FOREST_H