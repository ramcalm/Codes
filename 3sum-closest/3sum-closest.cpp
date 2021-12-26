class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int curr=nums[i]+nums[l]+nums[r];
                if(curr>target)
                {
                    r--;
                }
                else 
                {
                    l++;
                }
                if(abs(curr-target)<abs(res-target))
                    res=curr;
            }
        }
        return res;
    }
};