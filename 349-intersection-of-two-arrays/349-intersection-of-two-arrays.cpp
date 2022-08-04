class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> vec;
        for(int i=0;i<nums1.size();i++)
        {
            if(search(nums2,nums1[i]))
            {
                vec.push_back(nums1[i]);
            }
        }
        set<int> st;
        for(int i=0;i<vec.size();i++)
        {
            st.insert(vec[i]);
        }
        vector<int> res(st.begin(),st.end());
        return res;
    }
    bool search(vector<int> arr,int tar)
    {
        sort(arr.begin(),arr.end());
        int low=0,high=arr.size()-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]==tar)
            {
                return true;
            }
            if(arr[mid]<tar)
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return false;
    }
};