class Solution {
public:
    bool isPalin(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    void helper(int curr,string& s,vector<string>& path,vector<vector<string>>& res)
    {
        if(curr==s.size())
        {
            res.push_back(path);
            return;
        }
        for(int i=curr;i<s.size();i++)
        {
            if(isPalin(s,curr,i))
            {
                path.push_back(s.substr(curr,i-curr+1));
                helper(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        vector<vector<string>> res;
        helper(0,s,path,res);
        return res;
    }
};