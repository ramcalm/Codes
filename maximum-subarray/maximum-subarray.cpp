class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            mx=max(mx,sum);
            sum=max(0,sum);
        }
        return mx;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();