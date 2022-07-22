class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
                min=prices[i];
            if(prices[i]-min>profit)
                profit=prices[i]-min;
        }
        return profit;
    }
};