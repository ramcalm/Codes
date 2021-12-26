class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(0,target,candidates,temp,res);
        return res;
    }
    void helper(int start,int curr,vector<int>& candidates,vector<int>& temp,vector<vector<int>>& res)
    {
        if(start==candidates.size())
        {
            if(curr==0)
                res.push_back(temp);
            return;
        }
        if(candidates[start]<=curr)
        {
            temp.push_back(candidates[start]);
            helper(start,curr-candidates[start],candidates,temp,res);
            temp.pop_back();
        }
        helper(start+1,curr,candidates,temp,res);
    }
};
