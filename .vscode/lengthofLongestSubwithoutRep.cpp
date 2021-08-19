#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        
        int ans = 0;
        
        int i= -1;
        int j = -1;
        
        unordered_map<char,int> m;
        while(true) {
            bool f1 = false;
            bool f2 = false;
            while(i< s.size()-1) {
                
                // acquire
                f1 = true;
                i++;
                char ch = s[i];
                if(m.find(ch) != m.end())
                m[s[i]]++;
                else
                m.insert({s[i],1});
                
                if(m[s[i]]==2)
                    break;
                else {
                    int len = i-j;
                    if(len>ans)
                        ans = len;
                }
                
            }
                
                // release
                
                while (j < i) {
                    f2 = true;
                    j++;
                    char ch = s[j];
                    m[ch]--;
                    
                    if(m[ch]==1)
                        break;
                }
            
            if (f1==false && f2==false)
                break;
            
        }
        
        
        
        return ans;
        
        
        
        
    }

int main() {

    string s= "abcabcbb";

    int c = lengthOfLongestSubstring(s);

    cout<<c<<endl;



    return 0;
}