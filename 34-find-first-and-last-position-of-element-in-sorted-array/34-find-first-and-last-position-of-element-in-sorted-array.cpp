class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int ind1=start(nums,target);
        int ind2=end(nums,target);
        res.push_back(ind1);
        res.push_back(ind2);
        return res;
    }
    int start(vector<int>& nums,int target)
    {
        int left=0;
        int right=nums.size()-1;
        int mid;
        int res=-1;
        while(left<=right)
        {
             mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                res=mid;
                right=mid-1;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
                
        }
        return res;
    }
    int end(vector<int>& nums,int target)
    {
        int left=0;
        int right=nums.size()-1;
        int mid;
        int res=-1;
        while(left<=right)
        {
             mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                res=mid;
                left=mid+1;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            } 
        }
        return  res;
    }
};