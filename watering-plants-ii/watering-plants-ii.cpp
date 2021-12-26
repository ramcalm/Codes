class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int l=0,r=plants.size()-1;
        int mxa=capacityA,mxb=capacityB;
        int fills=0;
        while(l<=r)
        {
            if(l==r)
            {
                int cap=max(capacityA,capacityB);
                if(cap<plants[l])
                    fills++;
                break;
            }
            if(plants[l]<=capacityA)
                capacityA-=plants[l];
            else
            {
                fills++;
                capacityA=mxa-plants[l];
            }
            if(plants[r]<=capacityB)
                capacityB-=plants[r];
            else
            {
                fills++;
                capacityB=mxb-plants[r];
            }
            cout<<capacityA<<" "<<capacityB<<endl;
            l++;
            r--;
        }
        return fills;
    }
};