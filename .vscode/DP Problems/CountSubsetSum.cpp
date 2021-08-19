#include <bits/stdc++.h>
using namespace std;

int countSubsetSum(vector<int> &nums, int target) {
    int n = nums.size();
    int t[n+1][target+1];
    // Initialization
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= target; j++) {
            if(i==0)
                t[i][j] = 0;
            else if(j==0)
                t[i][j] = 1;
        }
}
    t[0][0] = 1;
    // Actual Code
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= target; j++) {
            if(nums[i-1] <= j) {
                t[i][j] = t[i-1][j] + t[i-1][j-nums[i-1]];
            }
            else
                t[i][j] = t[i-1][j];
    
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= target; j++) {
            cout << t[i][j] << "   ";
    }
    cout << endl;
}

    return t[n][target];


}



int main() {
    vector<int> nums = {2,3,5,6,8,10};
    int target = 10;
    countSubsetSum(nums, target);


    return 0;
}