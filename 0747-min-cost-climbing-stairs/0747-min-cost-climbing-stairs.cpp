class Solution {
public:
int left=0, right=0;
    int minCostClimbingStairs(vector<int>& cost) {
               vector<int> dp(cost.size()+1,-1);

       return  min(solve(cost.size()-1,cost,dp),solve(cost.size()-2,cost,dp));
    }
    int solve(int ind,vector<int> &cost,vector<int> &dp)
    {
        if(ind==0)return cost[ind];
        if(ind==1) return cost[1];
        if(dp[ind]!=-1)
        return dp[ind];

        return dp[ind]=cost[ind]+min(solve(ind-1,cost,dp),solve(ind-2,cost,dp));
    }
};