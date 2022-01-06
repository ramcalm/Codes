// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        bool check=true;
        int j=0;
        string s;
        while(check && j<arr[0].size())
        {
            for(int i=1;i<N;i++)
                if(arr[0][j]!=arr[i][j])
                    check=false;
            if(check)
                s.push_back(arr[0][j]);
            j++;
        }
        return s.length()?s:"-1";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends