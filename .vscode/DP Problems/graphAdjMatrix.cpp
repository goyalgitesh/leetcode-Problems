#include <bits/stdc++.h>
using namespace std;

int adjm[100][100];

void print_matrix(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout<<"Enter no. of vertices"<<endl;
    cin>>N;
    cout<<"Enter the adjacency matrix. Total "<<N*N<<" values."<<endl;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cout<<"["<<i<<"]["<<j<<"] : ";
            cin>>adjm[i][j];
        }
    }

    print_matrix(N,N);

    return 0;

}