#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &nums) {
    for(auto val: nums) {
        cout<<val<<" ";
    }
    cout<<endl;
}




int main() {
    int a = 1;  // 0001
    int b = 0;  // 0000
    int c = 2;  // 0010
    int d = 3;  // 0011
    int e = 5;  // 0101

    int res1 =  a << b;
    int res2 =  c >> d;
    //int res1 =  a << b;
    int res3 =  c << d;
    int res4 = res1 >> a;
    int res5 =  c & d;
    int res6 = d << e;
    int res7 = e << d;

    cout<<res1<<endl;
    cout<<res2<<endl;
    cout<<res3<<endl;
    cout<<res4<<endl;
    cout<<res5<<endl;
    cout<<res6<<endl;
    cout<<res7<<endl;
    
    return 0;
    

}