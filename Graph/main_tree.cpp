#include "Tree.h"
#include <iostream>

int main() {
	Tree tree;
	tree = Tree(10);
	int u = 0;
	int v = 1;

	if (tree.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " added." << std::endl;
	}

	u = 1;
	v = 2;
	if (tree.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " added." << std::endl;
	}
	u = 0;
	v = 2;
	if (!tree.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " not added." << std::endl;
	}

	std::cout << "The tree has " << tree.numberOfNodes() << " nodes."
	          << std::endl;

	return 0;
}
