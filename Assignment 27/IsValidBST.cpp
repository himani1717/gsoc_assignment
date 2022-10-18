class Solution {
public:
    bool Validate(TreeNode* root, const long left,const long &right) {
        if(root == NULL)
            return 1;
        if(!(root->val > left && root->val < right))
            return 0;
        return (Validate(root->left,left,root->val) && Validate(root->right,root->val,right));
    }
    bool isValidBST(TreeNode* root) {
        if(root->left == NULL && root->right == NULL)
            return 1;
        return Validate(root,LONG_MIN,LONG_MAX);
        
    }
};
