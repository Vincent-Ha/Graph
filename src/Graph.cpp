/*

 * Vincent Ha

 * CIS 22C, Winter 2017

 */

#include "assert.h"
#include "Graph.h"

Graph::Graph(int n) {
	vertices = n;
	edges = 0;
	for(int a = 0; a <= n; a++){
		adj.push_back(List<int>());
	}
}

int Graph::getNumEdges() {
	return edges;
}

int Graph::getNumVertices() {
	return vertices;
}

bool Graph::isEmpty() {
	for (int count = 1; count <= vertices; count++) {
		if (!adj[count].isEmpty())
			return false;
	}

	return true;
}

void Graph::addEdge(int u, int v) {
	assert(u <= getNumVertices() && v <= getNumVertices());
	adj[u].insertLast(v);
	adj[v].insertLast(u);
	edges++;
}

void Graph::removeEdge(int u, int v) {
	assert(u <= getNumVertices() && v <= getNumVertices());

	adj[u].startIterator();
	while (!adj[u].offEnd()) {
		if (adj[u].getIterator() == v) {
			adj[u].removeIterator();
			break;
		}
		adj[u].advanceIterator();
	}

	adj[v].startIterator();
	while (!adj[v].offEnd()) {
		if (adj[v].getIterator() == u) {
			adj[v].removeIterator();
			break;
		}
		adj[v].advanceIterator();
	}

	edges--;
}

void Graph::printGraph(ostream& output) {
	if(isEmpty()){
		output << "The graph is empty." << endl;
		return;
	}

	for (int count = 1; count <= vertices; count++) {
		output << count << ": ";
		if(!adj[count].isEmpty()){
			adj[count].startIterator();
			while (!adj[count].offEnd()) {
				output << adj[count].getIterator() << " ";
				adj[count].advanceIterator();
			}
			output << endl;
		}
	}
	output << endl;
	output << "Total vertices: " << getNumVertices() << endl;
	output << "Total edges: " << getNumEdges() << endl;
}
