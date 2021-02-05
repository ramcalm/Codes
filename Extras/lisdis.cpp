#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,tmp;
    cin>>n;
    vector<int> a;
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        a.push_back(tmp);
    }
    vector<int> lis(n,1);
    vector<int> dis(n,1);
    int inc=0,dec=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            lis[i]=lis[i-1]+1;
    }
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1])
            dis[i]=dis[i+1]+1;
    }
    int mx=0;
    for(i=0;i<n;i++)
    {
        mx=max(mx,2*min(lis[i],dis[i])-1);
    }
    cout<<mx<<endl;
    return 0; 
}