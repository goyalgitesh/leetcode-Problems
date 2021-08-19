#include <bits/stdc++.h>
using namespace std;

static vector<vector<int>> t(5,vector<int>(12,-1));

// arr = {1,5,11,5};
// sum = 11

bool SubsetSumMemonized(vector<int> &nums, int sum,int n) {
    
    // base condition
    if(sum==0 && n==0)
        return true;
    if(sum == 0 && n!= 0)
        return true;
    if(n ==0 && sum != 0)
        return false;

    // Recursive Solution
    if(t[n][sum] != -1)
        return t[n][sum];
    else {
        if(nums[n-1] <= sum) {
            return t[n][sum] = SubsetSumMemonized(nums,sum-nums[n-1],n-1) || SubsetSumMemonized(nums,sum,n-1);
        }
        else {
            return t[n][sum] = SubsetSumMemonized(nums,sum,n-1);
        }
    }


}

int main() {
    vector<int> nums = {1,6,11,5};
    int sum = 17;
    int n = nums.size();
    cout << SubsetSumMemonized(nums,sum,n) << endl;
    //SubsetSumMemonized(nums,sum,n);

    for (int i =0; i<t.size(); i++) {
        for (int j =0; j<t[i].size(); j++) {
            cout << t[i][j] << "   ";

        }
        cout << endl;
    }

    return 0;
}