class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int prod=1;
        int res=0;
        
        while(j<nums.size())
        {
            prod*=nums[j];
            while(prod>=k && i<nums.size())
            {
                prod=prod/nums[i];
                i++;
            }
            if(prod<k)
            {
                res+=(j-i+1);
            }
            j++;
        }
        return res;
    }
};