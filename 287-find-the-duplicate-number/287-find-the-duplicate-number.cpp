class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0,j=i+1;j<nums.size();i++,j++)
        {
            if(nums[j]==nums[i])
            {
                return nums[i];
            }
        }
        return 0;
    }
};