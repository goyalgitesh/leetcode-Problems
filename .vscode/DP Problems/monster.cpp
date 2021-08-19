#include <bits/stdc++.h>
using namespace std;


int win(vector<int> &power, vector<int>&bonus, int e, int n) {
    //  base condition
    if(n==0 || e==0)
        return 0;

    // recursive code
    if(e >= power[n-1])
     {
         return max(1 + win(power, bonus, e + bonus[n-1], n-1), win(power, bonus, e, n-1));

     }
     else {
         return win(power, bonus, e, n-1);
     }
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> power(n);
    vector<int> bonus(n);
    for(int i = 0; i < n; i++) {
        cin>>power[i];
}
    for(int i = 0; i < n; i++) {
        cin>>bonus[i];
    }

    cout << win(power, bonus, e, n) << endl;
    return 0;
}