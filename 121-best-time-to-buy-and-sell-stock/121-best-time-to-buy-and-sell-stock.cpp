class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buy=INT_MAX;
        int profit=0;
        for(int i=0;i<arr.size();i++)
        {
        if(arr[i]<buy)
        {
            buy=arr[i];
        }
        if(arr[i]-buy>profit)
        {
            profit=arr[i]-buy;
        }
        }
        return profit;
        
        
    }
};