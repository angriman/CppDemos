#pragma once

class Graph {

public:
	Graph();
	Graph(int n);
	Graph(const Graph &toCopy);
	~Graph();

	int numberOfNodes() const;

private:
	int n;
};
