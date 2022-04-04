class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        int mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
             if(mid>0 && mid<arr.size()-1)
             {
                 if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                {
                return mid;
                }
                else if(arr[mid-1]>arr[mid])
                {
                 right=mid-1;
                }
                else if(arr[mid+1]>arr[mid])
                {
                left=mid+1;
                }
             }
                else if(mid==0)
                {
                    if(arr[mid]>arr[mid+1])
                    {
                        return mid;
                    }
                    else
                        return mid+1;
                }
                else if(mid==arr.size()-1)
                {
                    if(arr[mid]>arr[mid-1])
                    {
                        return mid;
                    }
                    else 
                        return mid-1;
                }
        }
        return 0;
    }
        
};