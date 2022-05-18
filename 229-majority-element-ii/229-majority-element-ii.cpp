class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=-1,el2=-1;
        int c1=0,c2=0;
        for(int i:nums)
        {
            if(el1==i)
            {
                c1++;
            }
            else if(el2==i)
            {
                c2++;
            }
            else if(c1==0)
            {
                el1=i;
                c1++;
            }
            else if(c2==0)
            {
                el2=i;
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int> res;
        c1=0;
        c2=0;
        for(int i:nums)
        {
            if(i==el1)
                c1++;
            else if(i==el2)
                c2++;
        }
        if(c1>(nums.size()/3))
            res.push_back(el1);
        if(c2>(nums.size()/3))
            res.push_back(el2);
        return res;
    }
};