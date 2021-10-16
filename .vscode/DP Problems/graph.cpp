#include <bits/stdc++.h>
using namespace std;

 bool dfs(int n,vector<vector<int>> &edges,vector<bool> &vis,int start,int end) {
        if(start == end)
            return true;
        vis[start] = true;
        for(auto val : edges[start]) {
            if(vis[val]==false) {
                if(dfs(n,edges,vis,val,end) == true)
                    return true;
            }
        }
        
        return false;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<bool> visited(n,false);
        return dfs(n,edges,visited,start,end);
        
}

int main() {
    int n = 3;
    vector<vector<int>> edges = {{0,1},{0,2},{3,5},{5,4},{4,3}};
    int start = 0;
    int end = 5;
    if(validPath(n,edges,start,end))
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
}