class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int res=1,flag=0;
        int n=nums.size();
        if(n==0)
            return 1;
        map<int, int> mymap;
        for(int i=1;i<=n+1;i++)
            mymap[i]=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0&&nums[i]<=n)
            {
                mymap[nums[i]]=0;
            }
        }
        for(int i=1;i<=n+1;i++)
        {
            if(mymap[i]==-1)
            {
                res=i;
                flag++;
                break;
            }
        }
        return res;
    }
};