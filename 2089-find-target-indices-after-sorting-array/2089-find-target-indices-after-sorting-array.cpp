class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count=0;
        int lesscount=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                count++;
            else if(nums[i]<target)
                lesscount++;
        }
        vector<int> vec;
        for(int i=0;i<count;i++)
        {
            vec.push_back(lesscount++);
        }
        return vec;
    }
};