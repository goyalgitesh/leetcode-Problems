#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n, int o, int c, string op, vector<string> &res) {
    if(o==0 && c==0) {
        res.push_back(op);
        return;
    }
    if(o !=0) {
        string op1 = op;
        op1.push_back('(');
        solve(n,o-1,c,op1,res);
    }
    if( c > o) {
        string op2 = op;
        op2.push_back(')');
        solve(n,o,c-1,op2,res);

    }

    return res;

}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    int o = n;
    int c = n;
    string op = "";
    vector<string> ans;
    ans = solve(n,o,c,op,res);
    return ans;
    
}



int main() {
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(3);
    for ( auto c : ans) {
        cout<<c<<endl;
    }

    return 0;

}