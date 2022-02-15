class Solution {
public:
   int dp[10001];
    int solve(vector<int>&nums,int i,int n){
        if(i==n){
            return dp[i] = 0;
        }
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        int c = INT_MAX-1;
        for(int j=1;j<=nums[i];j++){
            c = min(c,1+solve(nums,i+j,n));
        }
        return dp[i] = c;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size()-1);
    }
};