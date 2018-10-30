#include <iostream>

#include "Graph.h"

Graph::Graph() {
	std::cout << "Graph default constructor." << std::endl;
	n = 0;
}

Graph::Graph(int n) {
	std::cout << "Graph constructor with " << n << " nodes." << std::endl;
	this->n = n;
}

Graph::Graph(const Graph &toCopy) {
	std::cout << "Graph copy constructor." << std::endl;
}

Graph::~Graph() { std::cout << "Graph destructor." << std::endl; }

bool Graph::addEdge(int u, int v) {
	if (u >= 0 && v >= 0 && u < n && v < n) {
		edges.push_back(std::make_pair(u, v));
		return true;
	}
	return false;
}
