#include <iostream>

#include "Graph.h"

Graph::Graph() {
	std::cout << "Default constructor." << std::endl;
	n = 0;
}

Graph::Graph(int nodes) {
	std::cout << "Constructor with " << nodes << " nodes." << std::endl;
	n = nodes;
}

Graph::Graph(const Graph &toCopy) {
	std::cout << "Copy constructor." << std::endl;
}

Graph::~Graph() { std::cout << "Destructor." << std::endl; }

int Graph::numberOfNodes() const { return n; }
