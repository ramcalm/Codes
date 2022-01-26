// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
   public:
   vector<int> TopK(vector<int>& a, int k)
   {
       int i,x=0;
       map<int,int>m;
       vector<int>v;
       vector<pair<int,int>>vp;
       
       for(i=0; i<a.size(); i++){
           x=max(x,a[i]);
           m[a[i]]++;
       }
       
       for(i=x; i>=1; i--){
           if(m[i]){
               vp.push_back({(-1)*m[i],(-1)*i});
           }
       }
       
       sort(vp.begin(),vp.end());
       for(auto it:vp){
           v.push_back((-1)*it.second);
           k--;
           if(k==0)break;
       }
       
       return v;
   }
};
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends