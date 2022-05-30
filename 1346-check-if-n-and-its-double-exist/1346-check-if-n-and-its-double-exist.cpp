class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(search(arr,2*arr[i],i))
            {
                return true;
            }
        }
        return false;
    }
        int search(vector<int>arr,int target,int i)
        {
            int low=0;
            int high=arr.size()-1;
            int mid;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(arr[mid]==target && mid!=i)
                    return 1;
                else if(arr[mid]<target)
                    low=mid+1;
                else
                    high=mid-1;
            }
            return 0;
        }
        
};