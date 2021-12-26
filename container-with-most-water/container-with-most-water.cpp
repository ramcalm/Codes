class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int i=0;
        int mx=0;
        while(i<=j)
        {
            int curr=min(height[i],height[j])*(j-i);
            mx=max(curr,mx);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return mx;
    }
};