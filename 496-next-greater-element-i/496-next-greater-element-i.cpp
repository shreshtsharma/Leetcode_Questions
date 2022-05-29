class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int ind;
            int fl=0;
        for(int i=0;i<nums1.size();i++)
        {
            ind=search(nums2,nums1[i]);
            fl=0;
            for(int j=ind+1;j<nums2.size();j++)
            {
                if(nums2[j]>nums1[i])
                {
                    res.push_back(nums2[j]);
                    fl=1;
                    break;
                }
            }
            if(!fl)
            {
                res.push_back(-1);
            }
        }
        return res;
    }
    int search(vector<int> nums,int target){
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
        }
        return 0;
    }
};