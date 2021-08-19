#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int ans;
    vector<vector<int>> a(0,vector<int>(k,0));
    int i = 1;
   while (i<=n) {
        int j = 1;
        int l = 1;
        vector<int> temp(0);
        while(j<=k) {
            temp.push_back(i);
            j++;
        }
        while (l<=k) {
            int x = i + j;
            if(x>n)
                temp.push_back(x%n);
            else
                temp.push_back(x);
            l++;
   }

    for(int i=0; i<a.size(); i++) {
        for(int j=0; j<a[i].size(); j++) {
            cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;

        
}







