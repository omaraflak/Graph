#ifndef GRAPH
#define GRAPH

#include <iostream>
#include <vector>

#include "edge.h"
#include "utils.h"

class Graph{
	private:
		std::vector<Edge*> m_edges;
		std::vector<Node*> m_nodes;

		int getNodeIndex(Node* node) const;

	public:
		Graph();
		~Graph();

		std::vector<Node*> getNodes() const;
		std::vector<Edge*> getEdges() const;
		std::vector<Node*> getInConnections(std::string name) const;
		std::vector<Node*> getOutConnections(std::string name) const;
		Node* addNode(std::string name);
		Node* getNode(std::string name) const;
		void connect(std::string name1, std::string name2);
		bool hasNode(std::string name) const;

		void print();
		void toStream(std::ostream& os) const;
		void fromStream(std::istream& is);
};

std::ostream& operator<<(std::ostream& os, const Graph& graph);
std::istream& operator>>(std::istream& is, Graph& graph);

#endif