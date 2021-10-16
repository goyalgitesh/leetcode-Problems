#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if(n <3) {
            return {{}};

        }
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 1;
        int flag = 0;
        int k = nums.size()-1;
        while (i < n-2) {
            if(flag==1) {
                j = i + 1;
                k = n-1;
                flag = 0;
            }
            int targ = -nums[i];
            if(nums[j] + nums[k] == targ) {
                ans.push_back({nums[i],nums[j],nums[k]});
            }
            else if(nums[j] + nums[k] < targ) {
                if(j+1 != k)
                    j++;
                else {
                    i++;
                    flag = 1;
                }
            }
            else {
                if(k-1 != j)
                    k--;
                else {
                    i++;
                    flag = 1;
                }
            }
        }  
        return ans;
        
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
    for(auto i : ans) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}