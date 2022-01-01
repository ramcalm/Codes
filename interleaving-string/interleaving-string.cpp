class Solution {
public:
    int dp[101][101];
    bool helper(string s1,int i,string s2,int j,string s3,int k)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==s1.size() && j==s2.size() && k == s3.size()) return dp[i][j] = true;
        bool ans = false;
        if(i!=s1.size())
        {
            if(s1[i] == s3[k]) 
                ans = ans || helper(s1,i+1,s2,j,s3,k+1);
        }
        if(j!=s2.size())
        {
            if(s2[j] == s3[k]) 
                ans = ans || helper(s1,i,s2,j+1,s3,k+1);
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    bool isInterleave(string s1, string s2, string s3) {
        if (s1.length() + s2.length() != s3.length()) {
            return false;
        }
        memset(dp,-1,sizeof dp);
       return helper(s1,0,s2,0,s3,0);
    }
};