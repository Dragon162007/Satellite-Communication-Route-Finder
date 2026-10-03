#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <vector>

using namespace std;

class Graph {
public:

    void addNode(string name);

    void addLink(string source, string destination);

    void deleteLink(string source, string destination);

    bool searchNode(string name);

    void displayGraph();

    vector<string> BFS(string source, string destination);

    vector<string> DFS(string source, string destination);
};

#endif
