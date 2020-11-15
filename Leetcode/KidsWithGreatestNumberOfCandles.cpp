class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> op;
        int max=*max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                op.push_back(true);
            }
            else
            {
                op.push_back(false);
            }
        }
        return op;
    }
};