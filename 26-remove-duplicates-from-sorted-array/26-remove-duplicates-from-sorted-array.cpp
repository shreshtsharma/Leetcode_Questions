class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        int num=INT_MIN;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==num)
         {
             continue;
         }
            else
        {
                num=nums[i];
            nums[j++]=nums[i];
        }
        }
        
        return j;
    }
 
};