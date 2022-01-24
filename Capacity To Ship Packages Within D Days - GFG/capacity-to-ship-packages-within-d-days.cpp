// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool isValid(int arr[], int n, int m , int mid)
   {
       int days=1,sum=0;
       
       for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];
           
           if(sum>mid)
           {
               days++;
               sum=arr[i];
           }
       }
       if(days>m)
       {
           return false;
       }
       return true;
   }
   
   
   int leastWeightCapacity(int arr[], int n, int m) 
   {
       if(n<m)
       {
           return -1;
       }
       
       int low = -1; 
       int high = 0;
       
       for(int i = 0; i < n; i++) 
       {
           low = max(arr[i],low);
           
           high += arr[i];
       }
       
       int res=-1;
       
       while(low<=high)
       {
           int mid= low+ (high-low)/2;
           
           if(isValid(arr,n,m,mid)==true)
           {
               res=mid;
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
       }
       return res;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends