class Solution {
public:
    unordered_map<string,int> mp;
    int uniquePaths(int m, int n) {
        if(m==0||n==0)
            return 0;
        if(m==1||n==1)
            return 1;
        string st=to_string(m)+","+to_string(n);
        if(mp.find(st)!=mp.end())
            return mp[st];
        return mp[to_string(m)+","+to_string(n)]=uniquePaths(m-1,n)+uniquePaths(m,n-1);
    }
};