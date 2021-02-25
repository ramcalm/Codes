class Solution {
public:
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        return (abs(height(root->left)-height(root->right))<=1)&&(isBalanced(root->left))&&(isBalanced(root->right));
    }
};