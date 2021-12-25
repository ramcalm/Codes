class Solution {
public:
    int lengthOfLongestSubstring(string str) { 
        int n=str.size(),ans=0;
        map<char, int> m;
        for(int i=0,j=0;j<n;j++)
        {
            if(m.find(str[j])!=m.end()){
     
                i=max(i,m[str[j]]);
            }
            ans=max(ans,j-i+1);
            m[str[j]]=j+1;
        }
        return ans;
    }
};