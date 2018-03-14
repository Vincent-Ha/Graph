/*

 * Vincent Ha

 * CIS 22C, Winter 2017

 */

/*#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
	cout << "Graph Testing" << endl;
	cout << "-------------" << endl;
	cout << endl;

	Graph gTest(6);
	cout << "Testing isEmpty() on empty Graph (Should return true): ";
	cout << boolalpha << gTest.isEmpty() << endl;
	cout << "Testing getNumEdges() on empty Graph (Should return 0): ";
	cout << gTest.getNumEdges() << endl;
	cout << "Testing getNumVertices() (Should return 6): ";
	cout << gTest.getNumVertices() << endl;
	cout << "Using printGraph() on an empty graph (should return The graph is empty.): ";
	gTest.printGraph(cout);
	gTest.addEdge(1,2);
	gTest.addEdge(2,6);
	gTest.addEdge(3,4);
	gTest.addEdge(5,1);
	cout << "Adding edge connecting 8 and 1 (Would throw an assertion): " << endl;
	//gTest.addEdge(8,1);
	cout << "Removing same edge (Would throw an assertion): " << endl;
	//gTest.removeEdge(1,8);
	cout << "Added edges. Testing isEmpty() (Should return false): ";
	cout << boolalpha << gTest.isEmpty() << endl;
	cout << "Testing getNumEdges() (Should return 4): ";
	cout << gTest.getNumEdges() << endl;
	cout << "Testing Print Graph: " << endl;
	gTest.printGraph(cout);
	cout << endl;
	cout << "Removing change  edge(2,6). Printing new graph:" << endl;
	gTest.removeEdge(2,6);
	gTest.printGraph(cout);
}*/

/*
Output

Graph Testing
-------------

Testing isEmpty() on empty Graph (Should return true): true
Testing getNumEdges() on empty Graph (Should return 0): 0
Testing getNumVertices() (Should return 6): 6
Using printGraph() on an empty graph (should return The graph is empty.): The graph is empty.
Adding edge connecting 8 and 1 (Would throw an assertion):
Removing same edge (Would throw an assertion):
Added edges. Testing isEmpty() (Should return false): false
Testing getNumEdges() (Should return 4): 4
Testing Print Graph:
1: 2 5
2: 1 6
3: 4
4: 3
5: 1
6: 2

Total vertices: 6
Total edges: 4
 */

