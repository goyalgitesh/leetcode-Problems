#include <bits/stdc++.h>
using namespace std;

vector<int> dp{1000,-1};
int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
    
}

int main() {
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}

