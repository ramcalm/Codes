class Solution {
    public int minDepth(TreeNode root) {
        Queue<TreeNode> queue = new LinkedList<>();
        if(root==null)
            return 0;
        queue.add(root);
        int level=0;
        while(!queue.isEmpty())
        {
            level++;
            int size = queue.size();
            for(int i=0;i<size;i++)
            {
                TreeNode curr=queue.remove();
                if(curr.left==null && curr.right==null) return level;
                if(curr.left!=null) queue.add(curr.left);
                if(curr.right!=null) queue.add(curr.right);

            }

        }
        return level;

    }
}