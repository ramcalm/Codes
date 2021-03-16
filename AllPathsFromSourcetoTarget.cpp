
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        helper(graph,res,path,0);
        return res;
    }
    void helper(vector<vector<int>>& g,vector<vector<int>>& res,vector<int>& path, int cur)
    {
        path.push_back(cur);
        if(cur==g.size()-1)
        {
            res.push_back(path);
        }
        else
        {
            for(int i=0;i<g[cur].size();i++)
                helper(g,res,path,g[cur][i]);
        }
        path.pop_back();
    }
};
          