#include <bits/stdc++.h>
using namespace std;

 int maximum69Number (int num) {
         int n = num;
        int digits = (int)log10(n);
        
        for(int i=digits; i>0; i--) {
            n = (int)(num / pow(10, i));
            cout<<n;

        }
        
        return 0;

}

int main() {

   // maximum69Number(9696);
    cout<<9696/1000<<endl;
    cout<<9696/100<<endl;
    cout<<9696/10<<endl;
    cout<<9696/1<<endl;


    return 0;
}