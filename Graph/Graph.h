#include <string>
#include <vector>

class Graph {

protected:
    std::string name;
    int nodes;
    std::vector<std::pair<int, int>> edges;

public:
    Graph();
    Graph(std::string name, int nodes);
    int numberOfNodes();
    bool addEdge(int from, int to);

};

inline int Graph::numberOfNodes() {
    return nodes;
}
