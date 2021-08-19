#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void printvec(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    printvec(v);

    sort(v.begin(), v.end());
    printvec(v);

    


return 0;
}


