#include <bits/stdc++.h>
using namespace std;

vector<int> findMode(vector<int>& nums) {
    if(nums.size()==0)
        return {};
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
    int max=0;
    auto it1 = m.begin();
    for(auto it=m.begin();it!=m.end();it++) {
        if(it->second>max) {
            max=it->second;
            it1 = it;
    }
}
    ans.push_back(it1->first);
    for(auto it=m.begin();it!=m.end();it++) {
        if(it->second==max && it!=it1)
            ans.push_back(it->first);

}

    return ans;

}

int main() {
    vector<int> nums = {1,1,2,2,2,3};
    int sum = accumulate(nums.begin(),nums.end(),0);
    cout<<sum<<endl;
    vector<int> ans = findMode(nums);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}