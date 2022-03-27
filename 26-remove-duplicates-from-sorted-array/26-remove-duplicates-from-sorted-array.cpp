class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        int num=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==num)
         {
             continue;
         }
            else
        {
                arr.push_back(nums[i]);
                num=nums[i];
        }
        }
        for(int i=0;i<arr.size();i++)
        {
            nums[i]=arr[i];
        }
        return arr.size();
    }
};