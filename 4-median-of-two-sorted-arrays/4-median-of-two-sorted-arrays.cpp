class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2.at(i));
        }
        sort(nums1.begin(),nums1.end());
        // cout<<nums1.size()<<endl;
        if(nums1.size()%2==1)
        {
            return nums1[nums1.size()/2];
        }
        else
        {
            // cout<<nums1[nums1.size()/2]<<" "<<nums1[(nums1.size()/2)-1]<<endl;
            return (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2.0;
        }
    }
};