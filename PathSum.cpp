
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum,0);
    }
    bool helper(TreeNode *root, int targetSum,int curr_sum)
    {
        if(!root)
            return false;
        if(!root->left&&!root->right)
        {
            if(curr_sum+root->val==targetSum)
                return true;
        }
        return helper(root->right,targetSum,curr_sum+root->val)||helper(root->left,targetSum,curr_sum+root->val);
    }
};