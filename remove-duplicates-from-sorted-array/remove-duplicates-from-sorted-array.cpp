class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i=1;
        if(!n)
            return NULL;
        for(int j=1;j<n;j++)
        {
            if(nums[j]!=nums[j-1])
            {
                nums[i++]=nums[j];
            }
        }
        return i;
    }
};