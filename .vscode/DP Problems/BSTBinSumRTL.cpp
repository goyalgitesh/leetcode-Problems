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


 vector<double> averageOfLevels(TreeNode* root) {
     queue<TreeNode*> q;
     vector<double> res;
     if(root == nullptr) return res;
     q.push(root);
     while(!q.empty()) {
         int size = q.size();
         double sum = 0;
         for(int i = 0; i < size; i++) {
             TreeNode* node = q.front();
             q.pop();
             if(node->left != nullptr) q.push(node->left);
             if(node->right != nullptr) q.push(node->right);
             sum += node->val;
         }
         res.push_back(sum / size);
     }
     return res;

 }

 int height(TreeNode* root) {
     TreeNode* p = root;
     if(p == nullptr)
        return 0;
    return 1 + max(height(p->left), height(p->right));
 }


 int sumRootToLeaf(TreeNode* root) {
  //   int h = height(root);
    if(root == nullptr) return 0;
    int sum = 0;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()) {
        TreeNode* node = s.top();
        s.pop();
        if(node->left == nullptr && node->right == nullptr) {
            sum += node->val;
        }
        if(node->left) s.push(node->left);
        if(node->right) s.push(node->right);
 }

    return sum;

}
 
 



int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);

    cout << sumRootToLeaf(root) << endl;
    cout<<height(root)<<endl;
    return 0; 
}