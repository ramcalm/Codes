class Solution {
public:
    std::unordered_map<int,std::unordered_set<char>>map;
    int countPoints(string rings) {
        int result = 0;
        for(int i=0;i<(int)rings.length();i+=2)
            map[rings[i+1]-'0'].insert(rings[i]);
        for(auto it = map.begin();it!=map.end();it++){
            if((int)it->second.size() == 3)
                result++;
        }
        return result;
    }
};