class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(auto num:left)
        {
            ans=max(ans,num);
        }
        for(auto num:right)
        {
            ans=max(ans,n-num);
        }
        return ans;
    }
};