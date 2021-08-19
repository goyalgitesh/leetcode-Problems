#include <bits/stdc++.h>
using namespace std;

int LCSub(string s1, string s2,int m, int n) {

    int t[m+1][n+1];

    // Initialization
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i==0 || j==0)
                t[i][j] = 0;
        }
    }

    // recursive code
    // choice 1 : if(last charactere in s1 is same as last character in s2)
    /*if(s1[m-1]==s2[n-1])
        return 1+LCS(s1,s2,m-1,n-1);
    // choice 2 : if(last charactere in s1 is not same as last character in s2)
    else
        return max(LCS(s1,s2,m,n-1),LCS(s1,s2,m-1,n));

}*/  
// this recursive code changed to tabulated dp code as given below.

    // tabulated dp code
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
                t[i][j] = max(t[i][j-1],t[i-1][j]);

        }
    }

    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            cout<<t[i][j]<<"  ";
        } 
        cout<<endl;
    }

    int max = 0;
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(t[i][j]>max) 
                max = t[i][j];
        }
    }
    return max;

}



int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<LCSub(s1,s2,s1.length(),s2.length())<<endl;
    return 0;
}
