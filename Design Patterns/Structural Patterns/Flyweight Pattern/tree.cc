#include "tree.h"

#include <iostream>

void TreeType::draw(int x, int y) {
    std::cout << "Drawing tree of type " << name_ << " at (" << x << ", " << y << ") with color " << color_ << std::endl;
}

std::unordered_map<TreeTypeFactory::TreeTypeKey, TreeType*, TreeTypeFactory::TreeTypeKeyHash> TreeTypeFactory::tree_types_;

TreeType* TreeTypeFactory::getTreeType(std::string name, Color color) {
    TreeTypeKey key = {.name = name, .color = color};
    // Check if the tree type exists or not
    if (tree_types_.find(key) == tree_types_.end()) {
        std::cout << "Creating new tree type: " << name << " and color: " << color << std::endl;
        tree_types_[key] = new TreeType(name, color);
    }
    return tree_types_[key];
}

void Tree::draw() {
    tree_type_->draw(x_, y_);
}