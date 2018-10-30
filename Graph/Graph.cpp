#include <iostream>

#include "Graph.h"

Graph::Graph() {
	std::cout << "Default constructor." << std::endl;
	n = 0;
}

Graph::Graph(int n) {
	std::cout << "Constructor with " << n << " n." << std::endl;
	this->n = n;
}

Graph::Graph(const Graph &toCopy) {
	std::cout << "Copy constructor." << std::endl;
}

Graph::~Graph() { std::cout << "Destructor." << std::endl; }

bool Graph::addEdge(int u, int v) {
	if (u < n && v < n && u >= 0 && v >= 0) {
		edges.push_back(std::make_pair(u, v));
		return true;
	}
	return false;
}
