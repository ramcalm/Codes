class Solution {
public:
    void generatePermu(vector<int>& nums, int startIdx, vector<vector<int> >& res) {
        if(startIdx == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for(int i = startIdx; i<nums.size(); i++) {
            swap(nums[i], nums[startIdx]);
            generatePermu(nums, startIdx+1, res);
            swap(nums[i], nums[startIdx]);
        }
        
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size() == 0) {
            return res;
        }
        
        generatePermu(nums, 0, res);
        
        return res;
    }
};