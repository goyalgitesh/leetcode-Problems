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

void preorder(TreeNode* root) {
    if(root == NULL) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void swap(TreeNode* curr) {
    if(!curr) return;
    swap(curr->left);
    swap(curr->right);
    TreeNode* temp = curr->left;
    curr->left = curr->right;
    curr->right = temp;

}

TreeNode* invertTree(TreeNode* root) {
    swap(root);
    return root;
}

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    preorder(root);
    cout<<endl;
    TreeNode* temp = invertTree(root);
    preorder(temp);
    return 0;
}
