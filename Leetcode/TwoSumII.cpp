class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start,end,sum;
        vector<int> result;
        start = 0;
        end = numbers.size()-1;
        while(start<end)
        {
            sum=numbers[start]+numbers[end];
            if(sum>target)
            {
                end--;
            }
            else if(sum<target)
            {
                start++;
            }
            else
            {
                result.push_back(start+1);
                result.push_back(end+1);
                break;
            }
        }
        return result;
        
    }
};