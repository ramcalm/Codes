class Solution {
    public int jump(int[] nums) {
        
        return helper(nums, 0, new Integer[nums.length]);
    }
    
    public int helper(int[] nums, int index, Integer[] dp){
        
        if(index>=nums.length-1)
            return 0;
        
        if(dp[index]!=null)
            return dp[index];
        
        int min= Integer.MAX_VALUE-1;
        for(int i=1;i<=nums[index];i++){
            min=Math.min(min, 1+helper(nums, index+i, dp));
        }
        
        dp[index]=min;
        return min;
    }
}