class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                return true;
            }
             if((nums[low] == nums[mid]) && (nums[high] == nums[mid]))
            {
                low++;
                high--;
            }
            else if(nums[mid]>=nums[low])
            {
                if(target<=nums[mid] && target>=nums[low])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(nums[mid]<=nums[high])
            {
                if(target<=nums[high] && target>=nums[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            
        }
        return false;
    }
};