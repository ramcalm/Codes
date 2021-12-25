class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX,prof=0;
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(prices[i],minprice);
            prof=max(prices[i]-minprice,prof);
        }
        return prof;
    }
};