#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return nums;
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    nums.resize(i + 1);
    return nums;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> ans = removeDuplicates(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
   // cout<<removeDuplicates(nums);
    return 0;
}
