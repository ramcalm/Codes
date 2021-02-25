class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
    bool helper(TreeNode* s, TreeNode* t)
    {
        if(!s&&!t)
            return true;
        if(!s||!t)
            return false;
        return (s->val==t->val)&&(helper(s->right,t->left))&&(helper(s->left,t->right));
    }
};