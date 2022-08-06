class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1=nums;
        arr2=nums;
        for(int i=1;i<arr1.size();i++)
        {
            arr1[i]=arr1[i-1]+arr1[i];
        }
        for(int i=arr2.size()-2;i>=0;i--)
        {
            arr2[i]=arr2[i]+arr2[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(arr1[i]==arr2[i])
                return i;
        }
        return -1;
    }
};