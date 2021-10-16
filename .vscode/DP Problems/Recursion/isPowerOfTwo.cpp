#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0) return false;
    if (n == 1) return true;
    if (n % 2 == 0) return isPowerOfTwo(n / 2);
    return false;
}

int main() {
    int n = 36;
    bool ans = isPowerOfTwo(n);
    cout<<ans<<endl;
    return 0; 
}