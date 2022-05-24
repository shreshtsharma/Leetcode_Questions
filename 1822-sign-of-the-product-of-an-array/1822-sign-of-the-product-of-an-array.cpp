class Solution {
public:
    int arraySign(vector<int>& nums) {
        return sign(nums,0,1);
    }
    int sign(vector<int>nums,int n,int prod)
    {
        if(n==nums.size())
        {
            return prod;
        }
        
        else {
            if(nums[n]<0)
            {
                prod*=-1;
            }
            else if(nums[n]>0)
            {
                prod*=1;
            }
            else
                prod*=0;
             return sign(nums,n+1,prod); 
        }
    }
};