class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> arr;
        
        if(k==0 && nums1==nums2)
            return 0;
        else if(k==0)
            return -1;
            long long  sum=0;
        for(int i=0;i<nums1.size();i++)
        {
            sum+=nums1[i]-nums2[i];
            arr.push_back(abs(nums1[i]-nums2[i]));
            if(arr[i]!=0 && arr[i]<k)
                return -1;
            if( arr[i]%k!=0)
                return -1;
        }
        if(sum!=0)
            return -1;
        long long ans=0;
        
        for(int i=0;i<arr.size();i++)
        {
            
            ans+=arr[i]/k;
        }
        return ans/2;
        
    }
};