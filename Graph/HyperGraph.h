#include "Graph.h"

class HyperGraph: public Graph {

    std::vector<std::vector<int>> edges;

public:
    HyperGraph();
    HyperGraph(std::string name, int nodes);
    bool addEdge(std::vector<int> newEdge);
};
