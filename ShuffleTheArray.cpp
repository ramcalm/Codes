class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> op;
        for(int i=0;i<n;i++)
        {
            op.push_back(nums[i]);
            op.push_back(nums[i+n]);
        }
        return op;
    }
};