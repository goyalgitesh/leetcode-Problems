#include <bits/stdc++.h>
using namespace std;

class Solution {   
public:
    
    int sum = 0;
    int climbStairs(int n) {
        if(n<=1) return 1;
        
        return climbStairs(n-1) + climbStairs(n-2);
        
        
    }
};

