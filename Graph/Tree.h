#include "Graph.h"

class Tree : public Graph {

public:
	Tree();
	Tree(int nodes);
	Tree(const Tree &toCopy);
	~Tree();
	bool addEdge(int from, int to);

private:
	std::vector<bool> hasParent;
};
