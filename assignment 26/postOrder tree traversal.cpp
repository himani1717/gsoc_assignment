class Solution {
public:
    void postOrder(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return ;
        }
        
        postOrder(root->left,v);
        postOrder(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        postOrder(root,v);
        return v;
    }
};
