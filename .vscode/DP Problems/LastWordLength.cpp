#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
        int len = 0;
        int i =s.size()-1;
        int wflag,cflag;
        if(s[i]==' ') {
            wflag = 1;
            cflag = 0;
        }
        else{
            cflag = 1;
            wflag = 0;
        }
    //int flag2 = 0; // for starting
        while(i>=0) {
            if(s[i]==' ' && wflag==1) {
                wflag = 1;
                i--;
            }
            if(s[i]!= ' '){
                wflag = 0;
                cflag = 1;
            //    flag2 = 1;
                len++;
                i--;
            }
            if(s[i]==' '&&wflag==0)
                break;
        }
        
        return len;
        
    }


int main() {
    string s = "Hello World    ";
    cout<<lengthOfLastWord(s);
    return 0;
}