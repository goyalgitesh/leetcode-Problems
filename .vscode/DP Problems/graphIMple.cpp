// graph implementation
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Vertex "<<i<<" : ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout <<adj[i][j]<<"->";
        }
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<int> adj[V]; // adjacency list (V vertices) (Array of vectors)
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 0);
    printGraph(adj, V);
    return 0;

}
