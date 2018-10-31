#include <iostream>

#include "Graph.h"

int main(int argc, char **argv) {

	Graph defaultGraph;
	Graph g(10);

	std::vector<std::pair<int, int>> edges(
	    {std::make_pair(0, 1), std::make_pair(1, 2), std::make_pair(3, 10)});

	for (auto edge : edges) {

		int u = edge.first;
		int v = edge.second;

		std::cout << "Edge " << u << " , " << v;

		if (g.addEdge(u, v)) {
			std::cout << " added!" << std::endl;
		} else {
			std::cout << " could not be added!" << std::endl;
		}
	}

	return 0;
}
