/*
 * ConnectedComponents.cpp
 *
 *  Created on: Dec 16, 2013
 *      Author: cls
 */

#include "ConnectedComponentsNew.h"

namespace NetworKit {

ConnectedComponentsNew::ConnectedComponentsNew(const Graph& G) : G(G), hasRun(false) {
	if (G.isDirected()) {
		throw std::runtime_error("Error, connected components of directed graphs cannot be computed, use StronglyConnectedComponents for them.");
	}
}

void ConnectedComponentsNew::run() {

	// Initializing and clearing data structures

	// Starting to run


    hasRun = true;
}


std::map<int, int> ConnectedComponentsNew::getComponentSizes() {
	if (!hasRun) throw std::runtime_error("run method has not been called");
	return this->componentSizes;
}

}
