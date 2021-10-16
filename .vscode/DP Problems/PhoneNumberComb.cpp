#include <bits/stdc++.h>
using namespace std;
 vector<string> ans;
 unordered_map<int,string> m;

 void backtrack(string digits, int i, string combo)  {
     if(i>=digits.size()) {
        ans.push_back(combo);
        return;
 }
    for(auto c: m[digits[i]-'0']) {
        combo.push_back(c);
        backtrack(digits, i+1, combo);
        combo.pop_back();
    }
 
 }

 vector<string> letterCombinations(string digits) {
       
        int n = digits.size();
        if(digits=="")
            return {};
        
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";

        backtrack(digits, 0, "");
        return ans;
 }

 int main() {

        vector<string> ans = letterCombinations("23");
        for(auto s: ans) {
            cout << s << endl;
        }


     return 0;
 }


