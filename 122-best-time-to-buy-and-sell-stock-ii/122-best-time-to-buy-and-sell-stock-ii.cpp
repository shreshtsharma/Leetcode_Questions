class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            if(prices[i]>buy)
            {
                profit+=prices[i]-buy;
                buy=prices[i];
            }
                
        }
        return profit;
    }
};