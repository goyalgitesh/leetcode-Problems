#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    cout<<"Size : "<<v.size()<<endl;
    for (auto val : v) {
        cout<<val<<" ";
    }
    cout<<endl;
}

int main() {
    int N;
    cin>>N;
    vector<int> v[N]; // Array of vectors
    for(int i=0;i<N;i++){
        int M;
        cin>>M;
        for(int j=0;j<M;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
}

for(int i=0; i<N;i++) {
    printVector(v[i]);
}

return 0;



}
