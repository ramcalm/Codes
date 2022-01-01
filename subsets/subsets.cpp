class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        helper(0,nums.size(),nums,temp,res);
        return res;
    }
    void helper(int i,int n,vector<int>& nums,vector<int>& temp,vector<vector<int>>& res)
    {
        if(i==n)
        {
            res.push_back(temp);
            return ;
        }
        temp.push_back(nums[i]);
        helper(i+1,n,nums,temp,res);
        temp.pop_back();
        helper(i+1,n,nums,temp,res);
    }
};