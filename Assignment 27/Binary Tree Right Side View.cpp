/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   void func(TreeNode* root,int level,vector<int>& A){
    if(root==NULL)return;
    if(level==A.size()){
        A.push_back(root->val);
    }
    func(root->right,level+1,A);
    func(root->left,level+1,A);
   } 
     vector<int> rightSideView(TreeNode* root) {
     vector<int>A;
     func(root,0,A);
     return A;
  } 
};
