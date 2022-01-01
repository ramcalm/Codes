class Solution {
public:
    //matrix-chain-multiplication
    int maxCoins(vector<int>& nums, int l, int r, vector<vector<int>>& dp){
        if(l==r) return 0;
        if(dp[l][r] != -1) return dp[l][r];
        dp[l][r]=0;
        for(int k=l;k<r;k++){
            dp[l][r]=max(dp[l][r], maxCoins(nums,l,k,dp)+maxCoins(nums,k+1,r,dp)+nums[l-1]*nums[k]*nums[r]);
        }
        return dp[l][r];
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin()+0,1);
        nums.push_back(1);
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return maxCoins(nums,1,n-1,dp);
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
