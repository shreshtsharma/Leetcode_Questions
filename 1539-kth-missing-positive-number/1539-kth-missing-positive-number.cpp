class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int missing;
        int j=1;
        while(i<k)
        {
            if(ispresent(arr,j)==0)
            {
                j++;
                continue;
            }
            else
            {
                missing=j;
                i++;
            }
            j++;
        }
        return missing;
    }
    int ispresent(vector<int>& arr,int target)
    {
        int low=0;
        int high=arr.size()-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]==target)
            {
                return 0;
            }
            else if(arr[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return 1;
    }
};