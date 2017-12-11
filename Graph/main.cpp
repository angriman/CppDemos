#include "Graph.h"
#include <iostream>

int main() {

    Graph defaultGraph;
    Graph g("New graph", 10);

    std::vector<std::pair<int, int>> edges({
        std::make_pair(0,1),
        std::make_pair(1,2),
        std::make_pair(3,10)
    });

    for (auto edge : edges) {

        int from = edge.first;
        int to = edge.second;

        std::cout << "Edge " << from << " , " << to;
        
        if (g.addEdge(from, to)) {
            std::cout << " added!" << '\n';
        }
        else {
            std::cout << " could not be added!" << '\n';
        }
    }
    return 0;
}
