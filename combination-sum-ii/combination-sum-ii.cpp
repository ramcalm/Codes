class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> path;
        vector<vector<int>> res;
        helper(candidates,path,res,target,0);
        return res;
    }
    void helper(vector<int>& candidates,vector<int>& path, vector<vector<int>>& res,int target,int i)
    {
        if(target==0)
        {
            res.push_back(path);
            return;
        }
        if(target<0)
            return;
        for(int j=i;j<candidates.size();j++)
        {
            if((j>i)&&(candidates[j]==candidates[j-1]))
                continue;
            if(candidates[j]>target)
                break;
            path.push_back(candidates[j]);
            helper(candidates,path,res,target-candidates[j],j+1);
            path.pop_back();
        }
    }
};