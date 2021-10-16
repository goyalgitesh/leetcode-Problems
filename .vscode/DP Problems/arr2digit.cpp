#include <bits/stdc++.h>
using namespace std;

int arr2digit(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum * 10 + arr[i];
    }
    return sum;
}

int digittoarr(int n, int arr[]) {
    int i = 0;
    while (n > 0) {
        arr[i++] = n % 10;
        n /= 10;
    }
    return i;
}

