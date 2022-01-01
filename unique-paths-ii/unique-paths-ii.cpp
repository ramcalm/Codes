class Solution {
public:
    int solve(vector<vector<int>>& grid,int x,int y,int n,int m,vector<vector<int>>& memo)
    {
        if(x>n || y>m || grid[x][y]==1)
            return 0;
        
        if(memo[x][y]!=-1)
            return memo[x][y];
        if(x==n && y==m)
            return 1;
        return memo[x][y]=solve(grid,x+1,y,n,m,memo)+solve(grid,x,y+1,n,m,memo);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(!obstacleGrid.size() || !obstacleGrid[0].size())
            return 0;
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[n-1][m-1])
            return 0;
        vector<vector<int>> memo(n,vector<int>(m,-1));
        return solve(obstacleGrid,0,0,n-1,m-1,memo);
    }
};