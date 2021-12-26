class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size(),low,high,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i==0||nums[i]!=nums[i-1])
            {
                low=i+1;
                high=n-1;
                sum=0-nums[i];
                while(low<high)
                {
                    if(nums[high]+nums[low]==sum)
                    {
                        res.push_back({nums[i],nums[low],nums[high]});
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        low++;
                        high--;
                    }
                    else if((nums[high]+nums[low])>sum)
                    {
                        while(low<high && nums[high-1]==nums[high])
                            high--;
                        high--;
                    }
                    else
                    {
                        while(low<high && nums[low]==nums[low+1])
                            low++;
                        low++;
                    }
                }
            }            
        }
        return res;
    }
};