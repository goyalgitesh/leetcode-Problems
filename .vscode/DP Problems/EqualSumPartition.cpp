#include <bits/stdc++.h>
using namespace std;

bool EqualSumPartition(vector<int> &nums) {
    int n = nums.size();
    if (n == 0) return false;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += nums[i];
    if (sum % 2 != 0) return 0;
    int target = sum / 2;

    bool t[n + 1][target + 1];

    // Initialization
    for(int i=0; i<n+1; i++) {
        for(int j=0; j<target+1; j++) {
            if(i ==0)
                t[i][j] = 0;
            else if(j == 0)
                t[i][j] = 1;

    }
}
    // DP
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=target; j++) {
                if(nums[i-1] <= j)
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                else
                    t[i][j] = t[i-1][j];

            }
    }

    return t[n][target];

}

int main() {
    vector<int> nums = {1,2,3,5};
    cout << EqualSumPartition(nums) << endl;


    return 0;

}