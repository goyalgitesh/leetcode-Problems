#include <bits/stdc++.h>
using namespace std;

int recurMCM(vector<int> &v, int i, int j) {
    // base condition
    if (i >= j)
        return 0;
    int min = INT_MAX;
    for(int k = i; k<=j-1; k++) {
        int temp_ans = recurMCM(v, i, k) + M(v, k+1, j) + (v[i-1]*v[k]*v[j]);

        if (temp_ans < min)
            min = temp_ans;        
        
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << recurMCM(v, 1, n-1) << endl;

    return 0;
}