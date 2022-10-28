class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=2;i<nums.size();i++)
        {
            int start=0;
            int end=i-1;
            while(start<end)
            {
                if(nums[start]+nums[end]>nums[i])
                {
                    count+=(end-start);
                    end--;
                }
                else
                    start++;
            }
        }
        return count;
    }
};