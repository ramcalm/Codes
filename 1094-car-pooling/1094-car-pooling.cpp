class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> stations;
        for(auto trip: trips) {
            stations[trip[1]] += trip[0];
            stations[trip[2]] -= trip[0];
        }
        int cur = capacity;
        for(auto station: stations) {
            cur -= station.second;
            if(cur<0)
                return false;
        }
        return true;
    }
};