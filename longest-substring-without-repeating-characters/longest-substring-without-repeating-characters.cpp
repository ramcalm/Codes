class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size())
            return 0;
        vector<int> lastindex(256,-1);
        int l=0,r=0,mx=1,n=s.size();
        while(r<s.size())
        {
            if(lastindex[s[r]]!=-1)
                l=max(l,lastindex[s[r]]+1);
            lastindex[s[r]]=r;
            mx=max(mx,r-l+1);
            r++;
        }
        return mx;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();