class Solution {
public:
    int max = 0, curr = 0, prev = INT_MIN;
    vector<int> res;

    vector<int> findMode(TreeNode *root)
    {
        helper(root);
        return res;
    }

    void helper(TreeNode *root)
    {
        if (root == NULL) 
            return; 
        helper(root->left);
        if (prev == root->val) 
            curr++;
        else 
            curr=1;
        if(curr>max)
        {
            res.clear();
            max = curr;
            res.push_back(root->val);
        }
        else if (curr == max)
        {
            res.push_back(root->val);
        }
        prev = root->val;
        helper(root->right); 
    }
};