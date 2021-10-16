#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& graph,int src,int dest,vector<int>& path,vector<bool>& visited, vector<vector<int>>& result) {
    if(src == dest) {
        result.push_back(path);
        return;
    }
    visited[src] = true;
    path.push_back(src);
    for(int i = 0; i < graph[src].size(); i++) {
        if(!visited[graph[src][i]]) {
            dfs(graph,graph[src][i],dest,path,visited,result);
        }
    }
    path.pop_back();
    visited[src] = false;
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    int src = 0;
    int dest = graph.size() - 1;
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> visited(graph.size(), false);
    path.push_back(src);
    dfs(graph, src, dest, path, visited, ans);
    return ans;

} 

int main() {
    vector<vector<int>> graph = {{1,2},{3},{3},{}};
    vector<vector<int>> ans = allPathsSourceTarget(graph);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}