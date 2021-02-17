class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i,n;
        vector<vector<string>> grouped;
        map<string, vector<string>> mapp;
        n=strs.size();
        for(i=0;i<n;i++)
        {
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            mapp[tmp].push_back(strs[i]);
        }
        for (auto p: mapp)
            grouped.push_back(p.second);
        return grouped;
    }
};