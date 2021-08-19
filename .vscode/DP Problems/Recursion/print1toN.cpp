#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if (n <= 1) {
        cout<<1<<" ";
    }
    else {
    solve(n-1);
    cout<<n<<" ";
    } 
}

void solve2(int n) {
    if (n <= 1) {
        cout<<1<<" ";
    }
    else {
    cout<<n<<" ";
    solve2(n-1);
    
    } 
}


int main() {

    solve(10);
    cout<<endl;
    solve2(10);

    return 0;
}