class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ct=0;
        if(nums.size()>=1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==1)
                {
                    ct++;
                }
            }
            if(ct==0)
            {
                return 1;
            }
        }
        nums.push_back(1);
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=nums[nums[i]])
            {
                swap(nums[i],nums[nums[i]]);
            }
            else
                i++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return 0;
    }
};