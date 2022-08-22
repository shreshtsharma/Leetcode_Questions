class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force
        if(nums.size()==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0,j=1;j<nums.size();i++,j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
                if(count+1>nums.size()/2)
                return nums[i];
            }
            else if(nums[i]!=nums[j])
            {
                count=0;
            }
        }
        return 0;
    }
};