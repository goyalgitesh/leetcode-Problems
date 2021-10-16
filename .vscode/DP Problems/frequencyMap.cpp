#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,int> m;
    vector<int> v = {1,2,1,3,4,5,5,4,3,3,3,2,6,7,7};
    for(auto i:v)
        m[i]++;
    
    cout<<m[3]<<endl;


    return 0;
}