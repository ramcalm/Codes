class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),in=2;
        if(n<3) return n;
        for(int i=2;i<n;i++)
            if(nums[i]!=nums[in-2])
                nums[in++]=nums[i];
        return in;
    }
};