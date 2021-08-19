#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int recurMCM(vector<int> &v, int i, int j) {
    // base condition
    if (i >= j) 
        return 0;

   // bottom up dp
    if (t[i][j] != -1)   // return value if already calculated (memonization)
        return t[i][j];
    int min = INT_MAX;
    for(int k = i; k<=j-1; k++) { 
        int temp_ans = recurMCM(v, i, k) + recurMCM(v, k+1, j) + (v[i-1]*v[k]*v[j]); // recur for each subproblem

        if (temp_ans < min) // update min
            min = temp_ans;        
        
    }
    return t[i][j] =  min;  // store value in t[i][j] before returning
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    memset(t, -1, sizeof(t));
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << recurMCM(v, 1, n-1) << endl;

    return 0;
}