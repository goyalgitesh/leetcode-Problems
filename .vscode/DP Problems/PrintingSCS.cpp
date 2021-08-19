#include <bits/stdc++.h>
using namespace std;

string SCS(string s1, string s2) {
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

    /*for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            cout<<t[i][j]<<"  ";
        } 
        cout<<endl;
    }*/

    string ans = "";
    int i = m;
    int j = n;
    while (i>0 || j>0) {
        if(s1[i-1] == s2[j-1]) {  //*if same then, store the result and simply moves to last diagonal element
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else { //* if not same then find max of t[i-1][j] and t[i][j-1], and move to that max block in the table;
            if(t[i-1][j] > t[i][j-1]) {
                ans.push_back(s1[i-1]);
                i--;
            }
            else {
                ans.push_back(s2[j-1]);
                j--;

        }
        }
    }

        while(i>0) 
            ans.push_back(s1[i--]);
        while(j>0) 
            ans.push_back(s2[j--]);
        
        

    reverse(ans.begin(),ans.end()); //! we start from end so for getting answer we have to reverse our ans.

    return ans;

}



int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<SCS(s1,s2)<<endl;
    return 0;
}
