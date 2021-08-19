#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vv;
    vv[0].push_back(1);
    vv[1].push_back(1);
    vv[1].push_back(1);

    for(int i=2;i<n; i++) {
        int rsize = i+1;
        vv[i][0] = 1;
        vv[i][rsize-1] = 1;
        for(int j=1; j<rsize-1; j++) {
            vv[i][j] = vv[i-1][j-1] + vv[i-1][j];
        }

        }

  
         


    }