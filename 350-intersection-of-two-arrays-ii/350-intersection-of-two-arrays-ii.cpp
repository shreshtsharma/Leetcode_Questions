class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        for(int i=0;i<nums2.size();i++)
        {
            bool res=search(nums1,nums2[i]);
                if(res==true)
                    inter.push_back(nums2[i]);
        }
        return inter;
    }
        bool search(vector<int>& nums1,int target)
        {
            sort(nums1.begin(),nums1.end());
            int low=0;
            int high=nums1.size()-1;
            int mid;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(nums1[mid]==target)
                {
                    nums1[mid]=-1;
                    return true;
                }
                else if(nums1[mid]>target)
                {
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            return false;
        }
    
};