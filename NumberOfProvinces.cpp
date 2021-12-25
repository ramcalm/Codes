class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        if(isConnected.size()==0)
            return 0;
        int i,n,count=0;
        n=isConnected.size();
        vector<int> visited(n,0);
        for(i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                visited[i]=1;
                dfs(i,isConnected,visited);
            }
        }
        return count;
        
    }
    void dfs(int i,vector<vector<int>> &isConnected,vector<int> &visited)
    {
        for(int j=0;j<isConnected.size();j++)
        {
            if(isConnected[i][j]&&!visited[j])
            {
                visited[j]=1;
                dfs(j,isConnected,visited);
            }
        }
    }
};