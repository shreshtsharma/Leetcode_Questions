class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0,end=nums.size()-1;
        int maxsum=0;
        while(st<end)
        {
            if(nums[st]+nums[end]>maxsum)
            {
                maxsum=nums[st]+nums[end];
            }
            st++;
            end--;
        }
        return maxsum;
    }
};