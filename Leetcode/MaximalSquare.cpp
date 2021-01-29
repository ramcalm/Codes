class Solution {
public:
    int minim(int a,int b,int c)
    {
        if (a <= b && a <= c) 
            return a;
        else if (b <= a && b <= c) 
            return b;
        return c;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int i,j,m,n,max=0;
        m=matrix.size();
        n=matrix[0].size();
        int res[m][n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                int tmp=matrix[i][j]-48;
                if(i==0||j==0)
                    res[i][j]=tmp;
                else if(tmp==0)
                    res[i][j]=0;
                else
                    res[i][j]=minim(res[i-1][j],res[i][j-1],res[i-1][j-1])+1;
                if(res[i][j]>max)
                    max=res[i][j];
            }
        }
        return max*max;
        }
};