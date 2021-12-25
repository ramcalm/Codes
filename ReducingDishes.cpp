class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int sum=0,mx=0,i,n=satisfaction.size(),start=0;
        sort(satisfaction.begin(),satisfaction.end());
        for(i=n-1;i>=0;i--)
        {
            sum=sum+satisfaction[i];
            if(sum<0)
            {
                start=i+1;
                break;
            }
        }
        cout<<start;
        if(start==n)
            return 0;
        for(i=0;i<n-start;i++)
            mx=mx+(i+1)*satisfaction[i+start];
        return mx;
        
    }
};