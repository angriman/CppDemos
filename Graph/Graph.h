#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>

class Graph {

public:
	Graph();
	Graph(int nodes);
	Graph(const Graph &toCopy);
	~Graph();

	int numberOfNodes();
	bool addEdge(int u, int v);

protected:
	int n;
	std::vector<std::pair<int, int>> edges;
};

inline int Graph::numberOfNodes() { return n; }

#endif /* ifndef GRAPH_H_ */
