#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2,int m, int n) {
   

    // base condition
    if(m==0 || n==0)
        return 0;
    
    // recursive code
    // choice 1 : if(last charactere in s1 is same as last character in s2)
    if(s1[m-1]==s2[n-1])
        return 1+LCS(s1,s2,m-1,n-1);
    // choice 2 : if(last charactere in s1 is not same as last character in s2)
    else
        return max(LCS(s1,s2,m,n-1),LCS(s1,s2,m-1,n));
        

}


int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<LCS(s1,s2,s1.length(),s2.length())<<endl;
    return 0;
}
