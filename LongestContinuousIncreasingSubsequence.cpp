int min(int a,int b)
{
	if(a<b)
		return a;
	return b;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
class Solution {
public:
    int findLengthOfLCIS(vector<int>& ip) {
        
        int n,inc;
        n=ip.size();
        vector<int> lis(n,1);
        inc=0;
        for(int i=1;i<n;i++)
        {
            if(ip[i]>ip[i-1])
            {
                lis[i]=lis[i]+(++inc);
            }
            else
            {
                inc=0;
            }
        }
        int mx= 0;
        for(int i=0;i<n;i++)
        {
            mx=max(lis[i],mx);
        }
        return mx;
    }
};