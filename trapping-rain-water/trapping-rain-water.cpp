class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(!n)
            return 0;
        int l=0,r=n-1,res=0,lmax=0,rmax=0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]<lmax)
                    res+=lmax-height[l];
                else
                    lmax=height[l];
                l++;
            }
            else
            {
                if(height[r]<rmax)
                    res+=rmax-height[r];
                else
                    rmax=height[r];
                r--;
            }
        }
        return res;
    }
};