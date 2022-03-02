class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size(), m = s.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1, 0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[j-1] == t[i-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m] == m;
    }
};