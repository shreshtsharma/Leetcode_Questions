class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int curper=0;
        int maxper=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int a=i;
            int b=i+1;
            int c=i+2;
            if(nums[a]+nums[b]>nums[c])
            {
                curper=nums[a]+nums[b]+nums[c];
                if(maxper<curper)
                {
                    maxper=curper;
                }
            }
        }
        return maxper;
    }
};