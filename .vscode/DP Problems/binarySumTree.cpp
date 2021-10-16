#include <bits/stdc++.h>
using namespace std;

int temp_ans = 0;
int ans = 0;
int val = 0;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 void preorder(TreeNode* root,vector<int>&v) {
     if (root == nullptr) return;
     v.push_back(root->val);
     preorder(root->left,v);
     preorder(root->right,v);
 }

void solve(TreeNode* rt) {
        if(rt!= NULL) {
            val = rt->val;
            temp_ans = temp_ans*2 + rt->val;
            solve(rt->left);
            solve(rt->right);
        }
        else {
            ans += temp_ans;
            temp_ans = temp_ans - val;
            return;
        }
    }
    
    
int sumRootToLeaf(TreeNode* root) {
        TreeNode* temp = root;
        solve(temp);
        return ans;
        
}


int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);
    int res = sumRootToLeaf(root);
    cout<<res<<endl;

    return 0;

}

 