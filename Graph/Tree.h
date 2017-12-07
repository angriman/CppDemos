#include "Graph.h"

class Tree: public Graph {

public:
    Tree();
    Tree(std::string name, int nodes);
    bool addEdge(int from, int to);

private:
    std::vector<bool> hasParent;
};
