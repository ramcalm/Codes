// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    bool check(int s)
    {
        while(s/10)
        {
            if(s%10<=s/10%10)
                return false;
            s/=10;
        }
        return true;
    }
    vector<int> increasingNumbers(int n)
    {
        vector<int>v;
        if(n==1)
        {
            for(int i=0;i<10;i++)
            v.push_back(i);
            return v;
        }
        if(n==9)
        {
            v.push_back(123456789);
            return v;
        }
        if(n==8)
        {
            v.push_back(12345678);
            v.push_back(12345679);
            v.push_back(12345689);
            v.push_back(12345789);
            v.push_back(12346789);
            v.push_back(12356789);
            v.push_back(12456789);
            v.push_back(13456789);
            v.push_back(23456789);
            return v;
        }
        int s=pow(10,n-1)+2;
        int e=pow(10,n)-1;
        while(s<e)
        {
            if(check(s))
            {
                v.push_back(s);
            }
            s++;
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends