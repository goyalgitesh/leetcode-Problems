// Shortest Common SUbsequence

#include <bits/stdc++.h>
using namespace std;

int SCS(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    int t[m+1][n+1];

    // Initialization
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i==0 || j==0)
                t[i][j] = 0;
        }
    }

    // tabulated dp code
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
                t[i][j] = max(t[i][j-1],t[i-1][j]);

        }
    }

    /*for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            cout<<t[i][j]<<"  ";
        } 
        cout<<endl;
    }*/

    //* Length of SCS = (Length of String1 + Length of String 2) - Length of their LCS;

    return m + n - t[m][n];
    
}


int main() {
    string s1 = "gitesh";
    string s2 = "ritika";
    cout<<SCS(s1,s2)<<endl;
}
