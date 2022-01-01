class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        helper(0,nums.size(),temp,res,nums);
        return res;
    }
    void helper(int start,int n,vector<int>& temp,vector<vector<int>>& res,vector<int>& nums)
    {
        res.push_back(temp);
        for(int i=start;i<n;i++)
        {
            if(i==start || nums[i]!=nums[i-1])
            {
                temp.push_back(nums[i]);
                helper(i+1,n,temp,res,nums);
                temp.pop_back();
            }
        }
    }
};