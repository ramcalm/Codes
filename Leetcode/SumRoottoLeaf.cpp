class Solution {
    public int sumNumbers(TreeNode root) {
        return helper(root,0);

    }
    int helper(TreeNode root,int sum_till)
    {
        int sum=0;
        sum=sum_till*10+root.val;
        if(root.left==null && root.right==null)
        {
            return sum;
        }
        int sum_new=0;
        if(root.left!=null)
        {
            sum_new+=helper(root.left,sum);

        }
        if(root.right!=null)
        {
            sum_new+=helper(root.right,sum);
        }
        return sum_new;

    }
}