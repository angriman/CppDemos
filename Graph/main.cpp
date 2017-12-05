#include "Graph.h"
#include <iostream>

int main() {

    Graph defaultGraph;
    Graph g("New graph", 10);
    int from = 0;
    int to = 10;
    std::cout << "Edge " << from << " , " << to;
    if (g.addEdge(from, to)) {
        std::cout << " added!" << '\n';
    }
    else {
        std::cout << " could not be added!" << '\n';
    }
    return 0;
}
