class Solution {
public:
    int merge(vector<int>& nums,int l,int mid,int r)
    {
        int inv=0,j=mid+1;
        for(int i=l;i<=mid;i++)
        {
            while(j<=r && nums[i]>(2LL*nums[j]))
                j++;
            inv+=j-(mid+1);
        }
        vector<int> temp;
        int left=l,right=mid+1;
        while(left<=mid && right<=r)
        {
            if(nums[left]<nums[right])
            {
                temp.push_back(nums[left++]);
            }
            else
            {
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid)
            temp.push_back(nums[left++]);
        while(right<=r)
            temp.push_back(nums[right++]);
        for(int i=l;i<=r;i++)
        {
            nums[i]=temp[i-l];
        }
        return inv;
    }
    int solve(vector<int>& nums,int l,int r)
    {
        if(l>=r)
            return 0;
        int mid = l + (r-l)/2;
        int inv=solve(nums,l,mid);
        inv+=solve(nums,mid+1,r);
        inv+=merge(nums,l,mid,r);
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();