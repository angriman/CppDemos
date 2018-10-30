#include "Tree.h"
#include <iostream>

int main() {
	Tree t(10);
	int u = 0;
	int v = 1;

	if (t.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " added." << std::endl;
	}

	u = 1;
	v = 2;
	if (t.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " added." << std::endl;
	}
	u = 0;
	v = 2;
	if (!t.addEdge(u, v)) {
		std::cout << "Edge " << u << ", " << v << " not added." << std::endl;
	}

	return 0;
}
