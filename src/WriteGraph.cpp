/*

 * Vincent Ha

 * CIS 22C, Winter 2017

 */
#include <fstream>
#include <string>
#include "Graph.h"
using namespace std;

int main()
{
	string name;
	ifstream fin;
	ofstream fout;
	cout << "Welcome to WriteGraph!" << endl;
	cout << endl;

	cout << "Enter the name of the file containing the graph information: ";
	getline(cin, name);

	fin.open(name);
	while(!fin.good()){
		cout << "Invalid file name!" << endl;
		cout << endl;
		cout << "Please enter the name of the file: ";
		getline(cin, name);
		fin.open(name);
	}
	cout << endl;

	cout << "***Reading from " << name << "***" << endl;

	int size, u, v;
	fin >> size;
	Graph g(size);
	while(fin >> u >> v){
		g.addEdge(u,v);
	}
	fin.close();
	cout << endl;

	cout << "Please enter the name of the output file: ";
	getline(cin,name);
	fout.open(name);
	g.printGraph(fout);
	fout.close();
	cout << endl;

	cout << "Thank you! Your Graph is now written to output.txt!" << endl;
}




