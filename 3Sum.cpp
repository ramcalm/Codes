class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;// = new vector<vector<int>>;
        vector<int> temp(3,0);
        if(nums.size()<2)
            return {};
        // if(nums.size()<2)
        //     return [];
        sort(nums.begin(),nums.end());
        
        int k=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low = i+1;
                int high = nums.size()-1;
                int sum = 0 - nums[i];

                while(low<high)
                {
                    if(nums[low]+nums[high] == sum)
                    {
                        temp[0] = nums[i];
                        temp[1] = nums[low];
                        temp[2] = nums[high]; 
                        result.push_back(temp);
                 //       result[k++] = temp; 
                        while(low<high && nums[low+1] == nums[low]) low++;
                        while(low<high && nums[high-1] == nums[high]) high--;
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] < sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        if(result.empty())
            return {};
        return result;
    }
};