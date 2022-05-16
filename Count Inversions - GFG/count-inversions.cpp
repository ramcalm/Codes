// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    long long int merge(long long arr[],int l,int mid,int r)
    {
        int n1=mid-l+1,n2=r-mid;
        long long int inv=0;;
        long long int a[n1],b[n2];
        for(int i=l;i<=mid;i++)
            a[i-l]=arr[i];
        for(int i=mid+1;i<=r;i++)
            b[i-mid-1]=arr[i];
        int i=0,j=0,k=l;
        while(i<n1&&j<n2)
        {
            if(a[i]>b[j])
            {
                arr[k++]=b[j++];
                inv+=(n1-i);
            }
            else
            {
                arr[k++]=a[i++];
            }
        }
        while(i<n1)
            arr[k++]=a[i++];
        while(j<n2)
            arr[k++]=b[j++];
        return inv;
    }
    long long int solve(long long arr[], int l,int r)
    {
        if(l>=r)
            return 0;
        int mid=l + (r-l)/2;
        return solve(arr,l,mid)+solve(arr,mid+1,r)+merge(arr,l,mid,r);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        return solve(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends