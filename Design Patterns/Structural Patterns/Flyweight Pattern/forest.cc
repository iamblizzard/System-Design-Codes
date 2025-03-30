#include "forest.h"

Tree* Forest::plantTree(int x, int y, std::string name, Color color) {
    Tree* tree = new Tree(x, y, name, color);
    trees_.push_back(tree);
    return tree;
}

void Forest::drawTrees() {
    for (Tree* tree : trees_) {
        tree->draw();
    }
}