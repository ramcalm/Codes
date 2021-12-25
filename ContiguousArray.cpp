class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> m;
        int count=0,maxlen=0;
        m[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            count+=(nums[i]==0)?-1:1;
            if(m.find(count)!=m.end())
            {
                maxlen=max(maxlen,i-m[count]);
            }
            else
            {
                m[count]=i;
            }
        }
        return maxlen;
    }
};
