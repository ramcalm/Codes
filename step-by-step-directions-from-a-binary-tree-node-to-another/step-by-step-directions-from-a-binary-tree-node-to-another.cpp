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
    bool path(TreeNode* root,int target,string &pth)
    {
        if(!root)
            return false;
        if(root->val==target)
            return true;
        if(path(root->left,target,pth))
            pth.push_back('L');
        else if(path(root->right,target,pth))
            pth.push_back('R');
        return pth.size();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string sp="",dp="";
        path(root,startValue,sp);
        path(root,destValue,dp);
        reverse(sp.begin(), sp.end());
        reverse(dp.begin(),dp.end());
        int m=sp.size(),n=dp.size();
        int i=0;
        while(i<m && i<n && sp[i]==dp[i])
            i++;
        sp=sp.substr(i);
        dp=dp.substr(i);
        return string(sp.size(), 'U')+dp;
    }
};