int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> left(k+1);
        vector<int> right(k+1);
        int n,maxi=0,i;
        n=cardPoints.size();
        left[0]=0;
        right[0]=0;

        for(i=1;i<=k;i++)
        {
            left[i]=left[i-1]+cardPoints[i-1];
            right[i]=right[i-1]+cardPoints[n-i];
        }
        reverse(right.begin(), right.end());
        for(i=0;i<k+1;i++)
        {
            maxi=max(maxi,left[i]+right[i]);
        }
        return maxi;
    }
};