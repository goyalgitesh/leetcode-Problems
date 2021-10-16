#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int ans = INT_MIN;
        if(x==1)
            return 1;
        for(int i=0; i<=x/2; i++) {
            long long sq = i*i;
            if(sq <= x)
                ans = i;
        }
        
        return ans;
    }


 int main() {
      cout<<mySqrt(100000)<<endl;
      return 0;
 }       