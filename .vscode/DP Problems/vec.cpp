#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>& v) {
    for( auto val : v) {
        cout<<val<<" ";
    }
    cout<<endl;

}

int main() {
    vector<int> v = {-1,-4,-8,-9,0,7,2,5,1,8,4};
    for(int i=0; i<v.size(); i++) {
        if(v[i] < 0) {
            v.erase(v.begin() + i);
        }
    }

    printVec(v);
    return 0;
}