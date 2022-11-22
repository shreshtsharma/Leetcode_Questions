class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
                 int j=0;
                 int i=0;
                 int mini=INT_MAX;
                 int sum=0;
                 while(j<nums.size())
                 {
                     sum+=nums[j];

                     while(sum>=target)
                     {
                         mini=min(mini,j-i+1);
                         sum-=nums[i];
                         i++;
                     }

                     if(sum<target)
                     {
                         j++;
                     }

                 }
                 if(mini==INT_MAX)
                 return 0;
                 else
                 return mini;
    }
};