#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    if (n < 3) return 0;
    sort(nums.begin(), nums.end());
    int ans = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == target) return sum;
            else if (sum < target) l++;
            else r--;
            if (abs(sum - target) < abs(ans - target)) ans = sum;
        }
    }
    return ans;
}


int threeSumClosest(vector<int>& nums, int target) {
        int mindiff = INT_MAX;
        int i = 0; 
        int j = i+1;
        int lsum = 0;
        int rsum = 0;
        int k = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i < k-1) {
            if(nums[j] + nums[k] == target - nums[i])
                return target;
            else if(nums[j]+nums[k] < target-nums[i]) {
                lsum = nums[j] + nums[k];
                rsum = target - nums[i];
                int diff = rsum - lsum;
                if(mindiff > diff) {
                    mindiff = diff;
                }
                if(j+1 != k) {
                    j++;
                }
                if(j+1 == k) {
                    i++;
                    j = i+1;
                    k = nums.size()-1;
                }
            }
            else {
                lsum = nums[j] + nums[k];
                rsum = target - nums[i];
                int diff = lsum - rsum;
                if(mindiff > diff) {
                    mindiff = diff;
                }
                if(k-1 != j) {
                    k--;
                }
                if(k-1 == j) {
                    i++;
                    j = i+1;
                    k = nums.size()-1;
                }
                
            }

            
        }
        
        return mindiff;   
    }

int main() {
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    cout<<threeSumClosest(nums,target);
    return 0;

}