class Solution {
public:
    void helper(TreeNode* root,int h,vector<int> &res)
    {
        if(!root)
            return;
        if(h>=res.size())
            res.push_back(root->val);
        helper(root->right,h+1,res);
        helper(root->left,h+1,res);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        helper(root,0,v);
        return v;
    }
};