#include <iostream>
#include <fstream>
#include "../include/graph.h"

using namespace std;

Graph createGraph(){
	Graph graph;

	// Nodes are created implicitly when using connect()
	graph.connect("Emmanuel M", "François B");
	graph.connect("Manuel V", "Christiane T");
	graph.connect("Manuel V", "Alain J");
	graph.connect("François B", "Emmanuel M");
	graph.connect("Marine L", "Manuel V");
	return graph;
}

int main(){
	Graph graph = createGraph();
	graph.print();
}
