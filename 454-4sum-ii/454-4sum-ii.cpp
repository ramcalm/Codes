class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> sumoftwo;
        for(auto x:nums1)
        {
            for(auto y:nums2)
                sumoftwo[0-(x+y)]++;
        }
        int res=0;
        for(auto x:nums3)
        {
            for(auto y:nums4)
            {
                if(sumoftwo[x+y]>0)
                    res=res+sumoftwo[x+y];
            }
        }
        return res;
    }
};