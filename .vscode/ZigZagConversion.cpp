#include <bits/stdc++.h>
using namespace std;

void printVector(vector<string> v) {
    for (auto val : v) {
        cout<<"Size = "<<v.size()<<endl;
        cout<<val<<" ";
    }
    cout<<endl;

}

void ZigZagConv(string s, int numRows) {
    vector<string> vs(min(numRows, int(s.size())));
    int dirn = -1;
    int row = 0;

    for(int i=0; i<s.size();i++) {
        vs[row].push_back(s[i]);
        if(row==0 || row == numRows-1) {
            dirn *= -1;
        }
        row += dirn;

    }
    printVector(vs);
    

}

int main() {
    string s = "PAYPALISHIRING";
    int n = 3;
    ZigZagConv(s,n);

    return 0;
}