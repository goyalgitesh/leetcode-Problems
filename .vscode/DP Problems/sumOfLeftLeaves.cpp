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

int sumOfLeftLeaves(TreeNode* root) {
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return root->val;
    int sum = 0;
    if(root->left != NULL) {
        if(root->left->left == NULL && root->left->right == NULL) sum += root->left->val;
        else sum += sumOfLeftLeaves(root->left);
    }
    if(root->right != NULL) sum += sumOfLeftLeaves(root->right);
    return sum;
}


int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << sumOfLeftLeaves(root);
    return 0;
}


