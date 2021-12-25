class Solution {
public:
  int maxSubArray(vector<int> &nums)
  {
    int candidat = nums[0], result = candidat;
    const int n = nums.size();
    
    for (int i = 1; i < n; ++i) {
        const int num = nums[i];
        if(candidat+num>num)
            candidat+=num;
        else
            candidat=num;
        if (result < candidat)
            result = candidat;
    }

    return result;
  }
};