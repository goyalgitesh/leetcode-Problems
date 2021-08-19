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

vector<TreeNode*> t;
 void inorder(TreeNode* p) {
        if(p) {
            inorder(p->left);
            t.push_back(p);
            inorder(p->right);     
        }
}

void inordertrav(TreeNode* p) {
        if(p) {
            inordertrav(p->left);
            cout<<p->val<<" ";
            inordertrav(p->right);     
        }
}



TreeNode* increasingBST(TreeNode* root) {
    inorder(root);
    int root1 = t[0]->val;
    TreeNode* tree = new TreeNode(root1);
    TreeNode* p = tree;
    for(int i = 1; i <t.size(); i++) {
        tree->left = nullptr;
        tree->right = t[i];
        tree = tree->right;
}

return p;
    
}


int main() {

    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);

    TreeNode  *tree = increasingBST(root);
    inordertrav(tree);
    return 0;
}