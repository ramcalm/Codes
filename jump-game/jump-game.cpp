class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n,i,li;
        n=nums.size();
        li=n-1;
        for(i=n-1;i>=0;i--)
        {
            if(i+nums[i]>=li)
                li=i;      
        }
        if(li==0)
            return true;
        return false;
    }
};