#include <iostream>

#include "Tree.h"

Tree::Tree() : Graph() { std::cout << "Tree default construcvr." << std::endl; }

Tree::Tree(int nodes) : Graph(nodes), hasParent(nodes, false) {
	std::cout << "Tree construcvr with " << nodes << " nodes." << std::endl;
}

bool Tree::addEdge(int u, int v) {
	if (u >= 0 && v >= 0 && u < n && v < n) {
		if (!hasParent[v]) {

			hasParent[v] = true;
			edges.push_back(std::make_pair(u, v));
		}
	}

	return false;
}
