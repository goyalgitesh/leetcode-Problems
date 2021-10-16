#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

TreeNode* GST(TreeNode *root, int &sum)
    {
        if(root == NULL)
            return NULL;
        
        GST(root->right, sum);
        
        sum = root->val + sum;
        root->val = sum;
        
        GST(root->left, sum);
        
        return root;
        
        
}

 void toGst(TreeNode*root,int key,vector<int>&v) {
        
        if(root) {
            if(root->val >= key)
                v.push_back(root->val);
            toGst(root->left,key,v);
            toGst(root->right,key,v);
        }
        
    }
    void solve(TreeNode* root) {
        if(root) {
            vector<int>v;
            toGst(root,root->val,v);
            int sum = accumulate(v.begin(),v.end(),0);
            root->val = sum;
            solve(root->left);
            solve(root->right);

        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        return GST(root,sum);
        
    }

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    root->left->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(8);
    root = bstToGst(root);
    preorder(root);
    return 0;


}