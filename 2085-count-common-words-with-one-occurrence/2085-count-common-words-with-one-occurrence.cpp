class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mem;
        
        for (auto s:words1){
            mem[s]++;
        }
        for (auto m:mem){
            if(m.second>1)
                mem[m.first]=-1;
        }

        for (auto s:words2){
            mem[s]--;
        }
        
        int ans = 0;
        for (auto m:mem){
            if(m.second==0)
                ans++;
        }
        return ans;
    }
};