
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> map;
        map.push_back("abc");
        map.push_back("def");
        map.push_back("ghi");
        map.push_back("jkl");
        map.push_back("mno");
        map.push_back("pqrs");
        map.push_back("tuv");
        map.push_back("wxyz");
        vector<string> res;
        string path;
        if(digits.size()==0)
            return res;
        helper(0,digits,res,path,map);
        return res;
    }
    void helper(int curr,string n,vector<string>& res,string path,vector<string> map)
    {
        if(curr==n.size())
        {
            res.push_back(path);
            return ;
        }
        for(int i=0;i<map[n[curr]-'2'].size();i++)
        {
            path.push_back(map[n[curr] - '2'][i]);
            helper(curr+1,n,res,path,map);
            path.pop_back();
        }
    }
    
};
