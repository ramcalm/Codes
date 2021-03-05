class Solution {
public:
    int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        ans=1;
        depth(root);
        return ans-1;
    }
    
    int depth(TreeNode *root)
    {
        int l,r;
        if(!root)
            return 0;
        l=depth(root->left);
        r=depth(root->right);
        ans = max(ans, l+r+1);
        return max(l,r)+1;
    }
};