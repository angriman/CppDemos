#include "Graph.h"

Graph::Graph() {
    this->name = "My awesome graph";
    this->nodes = 0;
}

Graph::Graph(std::string name, int nodes) {
    this->name = name;
    this->nodes = nodes;
}

bool Graph::addEdge(int from, int to) {
    if (from < nodes && to < nodes) {
        edges.push_back(std::make_pair(from, to));
        return true;
    }
    return false;
}
