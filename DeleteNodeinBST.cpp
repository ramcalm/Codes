class Solution {
    int inorder_predecessor(TreeNode* root){
        root = root->left;
        while(root->right) root = root->right;
        return root->val;
    }
    int inorder_successor(TreeNode* root){
        root = root->right;
        while(root->left) root = root->left;
        return root->val;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(key > root->val) root->right = deleteNode(root->right, key);
        else if(key < root->val) root->left = deleteNode(root->left, key);
        else{
            if(!root->left && !root->right) root = nullptr;
            else if(root->left){ // find inorder predecessor
                root->val = inorder_predecessor(root);
                root->left = deleteNode(root->left, root->val);
            }
            else { // find inorder successor
                root->val = inorder_successor(root);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};
