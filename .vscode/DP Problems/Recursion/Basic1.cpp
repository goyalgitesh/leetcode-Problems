#include <bits/stdc++.h>
using namespace std;

void fun1(int n) {
    if(n>0) {
        cout << n << " ";
        fun1(n-1);
    }
}

int main() {
    fun1(5);

    return 0;
}