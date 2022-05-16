class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[(nums[i]-1)%n]+=n;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>2*n)
                return i+1;
        }
        return 0;
    }
};