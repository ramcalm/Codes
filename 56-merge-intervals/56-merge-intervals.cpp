class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        for(auto i:intervals)
        {
            if(res.empty() || res[res.size()-1][1]<i[0])
                res.push_back(i);
            else
                res[res.size()-1][1]=max(res[res.size()-1][1],i[1]);
        }
        return res;
    }
};