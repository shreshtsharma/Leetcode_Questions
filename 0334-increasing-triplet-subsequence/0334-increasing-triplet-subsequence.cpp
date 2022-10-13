class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pre(n,0);
        vector<int> post(n,0);
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<mini)
            {
                mini=nums[i];
            }
            pre[i]=mini;
        }
    int maxi=INT_MIN;
    for(int j=n-1;j>=0;j--)
    {
        if(nums[j]>maxi)
        {
            maxi=nums[j];
        }
        post[j]=maxi;
    }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>pre[i] && nums[i]<post[i])
                return true;
        }
        return false;
}
    
};