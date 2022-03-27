class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num=INT_MIN;
        int j=0;
        //traversing through array 
        for(int i=0;i<nums.size();i++)
        {
            //comparing each element with previus element as array is sorted
         if(nums[i]==num)
         {
             continue;
         }
            //if element is not duplicate put it at front index
            else
        {
                num=nums[i];
                //j is only incrmented when a element is pushed in array.
            nums[j++]=nums[i];
        }
        }
        //returning size of index j;
        return j;
    }
 
};