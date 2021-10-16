#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void pathSumUtil(TreeNode* root, int sum, vector<int> v, int target) {
    if(root == NULL) return;
    v.push_back(root->val);
    sum += root->val;
    if(sum == target && root->left == NULL && root->right == NULL) {
        ans.push_back(v);
    }
    pathSumUtil(root->left, sum, v, target);
    pathSumUtil(root->right, sum, v, target);

}


vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    
    pathSumUtil(root, 0, {}, targetSum);

    return ans;

}





int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    root->right->right->left = new TreeNode(5);
    vector<vector<int>> ans = pathSum(root, 22);
    for(auto v : ans) {
        for(auto i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
    

}