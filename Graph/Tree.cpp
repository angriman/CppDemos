#include "Tree.h"

Tree::Tree() {
    name = "My great tree";
    nodes = 0;
}

Tree::Tree(std::string name, int nodes) : Graph(name, nodes) {
    hasParent.assign(nodes, false);
}

bool Tree::addEdge(int from, int to) {
    if (from < 0 || to < 0 || from >= nodes || to >= nodes) {
        return false;
    }

    if (hasParent[to]) {
        return false;
    }

    hasParent[to] = true;
    edges.push_back(std::make_pair(from, to));
    return true;
}
