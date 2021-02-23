class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int sum=0;
        int l[n],r[n];
        int lm=arr[0],rm=arr[n-1];
        l[0]=arr[1];
        r[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            l[i]=lm;
            if(arr[i]>lm)
                lm=arr[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            r[i]=rm;
            if(arr[i]>rm)
                rm=arr[i];
        }
        
        for(int i=1;i<n-1;i++)
        {
            //cout<<arr[i]<<"\t"<<l[i]<<"\t"<<r[i]<<"\t"<<min(l[i],r[i])-arr[i]<<endl;
            if(arr[i]>=l[i] || arr[i]>=r[i])
                continue;
            else
                sum=sum+min(l[i],r[i])-arr[i];
        }
        
        return sum;
    }
};