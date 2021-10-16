#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};
    string s;
    for (int i = 0; i < v.size(); i++) {
        s += to_string(v[i]);
        s += "->";
    }
    s.pop_back();
    s.pop_back();
    cout << s << endl;
    return 0;
}