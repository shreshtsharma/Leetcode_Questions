class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=1;
        for(int i=0,j=1;j<nums.size();i++,j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[ind++]=nums[j];
            }
        }
        return ind;
    }
};