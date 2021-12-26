class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int curr=nums[i]+nums[j];
                int req=target-curr;
                int k=j+1,l=nums.size()-1;
                while(k<l)
                {
                    if((nums[k]+nums[l])<req)
                    {
                        while(k<l && nums[k]==nums[k+1])
                            k++;
                        k++;
                    }
                    else if((nums[k]+nums[l])>req)
                    {
                        while(k<l && nums[l]==nums[l-1])
                            l--;
                        l--;
                    }
                    else
                    {

                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        while(k<l && nums[k]==nums[k+1])
                            k++;
                        k++;
                        while(k<l && nums[l]==nums[l-1])
                            l--;
                        l--;
                    }
                }
                while(j<nums.size()-1 && nums[j]==nums[j+1])
                    j++;
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1])
                i++;
        }
        return res;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();