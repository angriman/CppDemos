
#ifndef CONNECTEDCOMPONENTSNEW_H_
#define CONNECTEDCOMPONENTSNEW_H_

#include "../graph/Graph.h"
#include "../base/Algorithm.h"
#include <set>
#include <queue>

namespace NetworKit {

class ConnectedComponentsNew : public Algorithm {
public:

	ConnectedComponentsNew(const Graph& G);

	void run();
	int componentOfNode(node u);
    std::map<int, int> getComponentSizes();
	int getNumberOfComponents();


private:
	const Graph& G;
    std::vector<int> component;
	std::map<int, int> componentSizes;
	int numberOfComponents;
	bool hasRun;
};

inline int ConnectedComponentsNew::componentOfNode(node u) {
	if (!hasRun) throw std::runtime_error("run method has not been called");
	return component[u];
}

inline int ConnectedComponentsNew::getNumberOfComponents() {
	if (!hasRun) throw std::runtime_error("run method has not been called");
	return numberOfComponents;
}


}


#endif
