#include "HyperGraph.h"

HyperGraph::HyperGraph(std::string name, int nodes) : Graph(name, nodes) {
    // Optional code
}

bool HyperGraph::addEdge(std::vector<int> newEdge) {
    for (int node : newEdge) {
        if (node >= numberOfNodes() || node < 0) {
            return false;
        }
    }
    edges.push_back(newEdge);
    return true;
}
