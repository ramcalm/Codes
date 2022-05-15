class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(!matrix.size())
            return ;
        int n=matrix.size();
        int m=matrix[0].size();
        bool fr=false,fc=false;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
            {
                fr=true;
                cout<<fr<<endl;
                break;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(matrix[0][j]==0)
            {
                fc=true;
                break;
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(fr)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
            
        }
        if(fc)
        {
            for(int i=0;i<m;i++)
                matrix[0][i]=0;
            
        } 
    }
};