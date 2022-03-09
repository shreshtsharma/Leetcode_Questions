class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int  mid=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                right=mid-1;
            }
            else if(target>nums[mid])
            {
                left=mid+1;
            }
        }
     // if(nums[mid]<target)
     //    {
     //        return right+1;
     //    }
     //    else
     //    {
     //        return left;
     //    }
        return left;
    }
};