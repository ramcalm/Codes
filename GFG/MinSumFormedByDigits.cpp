#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int i,n,no,s1=0,s2=0,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    s1=0;
	    s2=0;
	    cin>>no;
	    vector<int> g1;
        for (int i = 1; i <= no; i++) 
        {
            cin>>k;
            g1.push_back(k);
        }
        sort(g1.begin(), g1.end()); 
	    for(j=0;j<no;j++)
	    {
	        if(j%2==0)
	        {
	            s1=s1*10+g1[j];
	        }
	        else
	        {
	            s2=s2*10+g1[j];
	        }
	    }
	    cout<<s1+s2<<"\n";
	}
	return 0;
}