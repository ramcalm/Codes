class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2,0);
        
        int sz = nums.size();
        for(int i=0;i < sz;i++){
            for(int j=i+1;j < sz;j++){
                if((nums[i]+nums[j])==target){
                    result[0]=i;
                    result[1]=j;
                    break;
                }
            }
        }
        return result;
    }
};