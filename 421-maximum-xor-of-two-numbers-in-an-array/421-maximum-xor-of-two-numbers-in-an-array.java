class Solution {
    public class Trie
    {
        Trie children[];
        public Trie()
        {
            children=new Trie[2];
        }
    }
    public int findMaximumXOR(int[] nums) {
        Trie root=new Trie();
        int mx=0;
        for(int i=0;i<nums.length;i++)
        {
            Trie curr=root;
            for(int j=31;j>=0;j--)
            {
                int bit=(nums[i]&(1<<j))>0?1:0;
                if(curr.children[bit]==null)
                {
                    curr.children[bit]=new Trie();
                }
                curr=curr.children[bit];
            }
        }
        for(int i=0;i<nums.length;i++)
        {
            Trie curr=root;
            int val=0;
            for(int j=31;j>=0;j--)
            {
                int bit=(nums[i]&(1<<j))>0?1:0;
                if(bit==0)
                {
                    if(curr.children[1]!=null)
                    {
                        val=val*2+1;
                        curr=curr.children[1];
                    }
                    else
                    {
                        val=val*2;
                        curr=curr.children[0];
                    }
                }
                else
                {
                    if(curr.children[0]!=null)
                    {
                        val=val*2+1;
                        curr=curr.children[0];
                    }
                    else
                    {
                        val=val*2;
                        curr=curr.children[1];
                    }
                }
            }
            mx=Math.max(mx,val);
        }
        return mx;
        
    }
}