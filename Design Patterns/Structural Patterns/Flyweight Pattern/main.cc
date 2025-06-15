#include "forest.h"
#include "tree.h"

int main() {
    Forest* forest = new Forest();

    // Plant trees in the forest
    forest->plantTree(1, 2, "Oak", LIGHT_GREEN);
    forest->plantTree(3, 4, "Pine", DARK_GREEN);
    forest->plantTree(5, 6, "Neem", LIGHT_YELLOW);
    forest->plantTree(2, 3, "Pine", DARK_GREEN);

    // Draw all trees in the forest
    forest->drawTrees();
}
