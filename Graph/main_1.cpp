#include <iostream>

#include "Graph.h"

int main(int argc, char **argv) {
	Graph a;
	std::cout << "After default constructor" << std::endl;
	Graph b = Graph();
	Graph c(a);
	Graph d = c;
	Graph e(5);

	std::cout << "Number of nodes of graph e = " << e.numberOfNodes()
	          << std::endl;
	return 0;
}
