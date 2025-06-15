#ifndef TREE_H
#define TREE_H

#include <string>
#include <unordered_map>

enum Color {
    LIGHT_GREEN, DARK_GREEN, LIGHT_YELLOW
};

class Image {};

class TreeType {
public:
    TreeType(std::string name, Color color)
        : name_(name), color_(color) {
            image_ = new Image(); // Assume Image is created here
        }

    void draw(int x, int y);

private:
    std::string name_;
    Color color_;
    Image* image_;
};

class TreeTypeFactory {
public:
    static TreeType* getTreeType(std::string name, Color color);
private:
    struct TreeTypeKey {
        std::string name;
        Color color;
        bool operator==(const TreeTypeKey& other) const {
            return name == other.name && color == other.color;
        }
    };
    struct TreeTypeKeyHash {
        std::size_t operator()(const TreeTypeKey& key) const {
            return std::hash<std::string>()(key.name) ^ (std::hash<int>()(key.color) << 1);
        }
    };
    static std::unordered_map<TreeTypeKey, TreeType*, TreeTypeKeyHash> tree_types_;
};

class Tree {
public:
    Tree(int x, int y, std::string name, Color color)
        : x_(x), y_(y) {
        tree_type_ = TreeTypeFactory().getTreeType(name, color);
    }

    void draw();

private:
    int x_, y_;
    TreeType* tree_type_;
};

#endif // TREE_H