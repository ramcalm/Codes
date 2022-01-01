class Solution {
public:
    int histogram(int dp[],int n)
    {
      int res=0;
     stack<int>s;
      int l_sum[n];
      s.push(0);
       l_sum[0]=0; 
      for(int i=1;i<n;i++)
      {
        while(s.empty()==false && dp[s.top()]>=dp[i])
        {
          s.pop(); 
        }
          int span=(s.empty())? 0:(s.top())+1;
          l_sum[i]=span;
          s.push(i);
      }
        
       stack<int>s1;
        int r_sum[n];
        s1.push(n-1);
        r_sum[n-1]=n-1;
        for(int i=n-2;i>=0;i--)
        {
         while(s1.empty()==false && dp[s1.top()]>=dp[i])
        {
           s1.pop(); 
        }
        
        int span=(s1.empty())?n-1:s1.top()-1;
        r_sum[i]=span;    
        s1.push(i);
        }    
        for(int i=0;i<n;i++)
        {
          int bars=0;
          int total=0;
          cout<<r_sum[i]<<" "<<l_sum[i]<<endl;
          bars=(r_sum[i]-l_sum[i])+1;
          total=bars*dp[i]; 
          cout<<i<<" "<<bars<<" "<<dp[i]<<endl;
          res=max(res,total);   
        }
        cout<<endl;
      return res;  
    }
    int maximalRectangle(vector<vector<char>>& matrix)
    {
       if(matrix.empty()==true)
       {
         return 0;  
        }
       int res=0; 
      int m=matrix.size();  
      int n=matrix[0].size();
     
            
      int dp[n];
      
       for(int i=0;i<n;i++)
       {
          dp[i]=matrix[0][i]-'0'; 
       }
      res=max(res,histogram(dp,n));
      for(int i=1;i<m;i++)
      {
         for(int j=0;j<n;j++)
         {
            if(matrix[i][j]=='0')
            {
               dp[j]=0; 
            }
            else
            {
              dp[j]=dp[j]+(matrix[i][j]-'0');
            }
            
            }
           res=max(res,histogram(dp,n)); 
      }
      return res;
        
    }
};