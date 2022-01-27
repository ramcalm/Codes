// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int n){
         int a[n];
      a[0]=1; a[1]=1;
      for(int i=2;i<n;i++){
          int j=0, k=i-1, s=0;
          while(j<i&& k>=0){
              s+=(a[j]*a[k]);
              j++; k--;
          }
          a[i]=s;
      }
      return a[n/2];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends