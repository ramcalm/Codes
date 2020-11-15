#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n],i,sum=0,p;
      for(i=0;i<n;i++)
      cin>>a[i];
      vector<int> left(n),right(n);
      left[0]=0;
      for(i=1;i<n;i++)
      left[i]=max(left[i-1],a[i-1]);
      right[n-1]=0;
      for(i=n-2;i>=0;i--)
       right[i]=max(right[i+1],a[i+1]);
       for(i=0;i<n;i++)
       {
       p=min(right[i],left[i])-a[i];
       if(p>0)
       sum+=p;
       }
       cout<<sum<<endl;
    }
	return 0;
 }