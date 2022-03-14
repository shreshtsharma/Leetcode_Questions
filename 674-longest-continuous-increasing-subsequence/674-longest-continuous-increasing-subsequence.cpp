class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curcount=0;
        int maxcount=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                curcount++;
            }
            else
            {
                curcount=0;
            }
             if(curcount>maxcount)
            {
                maxcount=curcount;
            }
        }
        return maxcount+1;
    }
};