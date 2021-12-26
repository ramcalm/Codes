class Solution {
public:
    void helper(int open,int close,int n,string& path,vector<string>& res)
    {
        if(path.size()==n*2)
        {
            res.push_back(path);
            return;
        }
        if(open<n)
        {
            path+="(";
            helper(open+1,close,n,path,res);
            path.pop_back();
        }
        if(close<open)
        {
            path+=")";
            helper(open,close+1,n,path,res);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string path="(";
        helper(1,0,n,path,res);
        return res;
    }
};