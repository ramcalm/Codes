class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0],count=1;
        int i=1;
        while(i<nums.size())
        {
            if(count==0)
                maj=nums[i];
            if(nums[i]==maj)
                count++;
            else
                count--;
            i++;
        }
        return maj;
    }
};