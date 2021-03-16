class Solution {
public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        int res=0,n=price.size();
        for(int j=0;j<n;j++){
            res+=price[j]*needs[j];
        }
        for(auto i:special)
        {
            bool isValid=true;
            for(int j=0;j<needs.size();j++)
            {
                if(needs[j]-i[j]<0)
                    isValid=false;
                needs[j]-=i[j];
            }
            if(isValid){
                res=min(shoppingOffers(price,special,needs)+i.back(),res);
            }
            for(int j=0;j<n;j++){
                needs[j]+=i[j];
            } 
        }
        return res;
    }
};