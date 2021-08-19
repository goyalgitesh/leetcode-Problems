#include <bits/stdc++.h>
using namespace std;

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


 int t2sum(TreeNode* A, int B) {




    return 0;
 }


 int main() {
     TreeNode *root = new TreeNode(10);
     root->left = new TreeNode(9);
     root->right = new TreeNode(20);

     int B = 19;
     vector<int> v;
     preorder(root,v);
     for (int i = 0; i < v.size(); i++) {
         cout << v[i] << " ";
     }


     return 0;
 }