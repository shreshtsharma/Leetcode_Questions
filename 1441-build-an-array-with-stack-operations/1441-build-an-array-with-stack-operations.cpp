class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        for(int i=1;i<=n;i++)
        {
            if(i>target[target.size()-1])
            break;
            res.push_back("Push");
            if(!search(target,i))
            {
                res.push_back("Pop");
            }
        }
        return res;
    }
        int search(vector<int>&arr,int tar){
            int low=0;
            int high=arr.size()-1;
            int mid;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(arr[mid]==tar)
                return 1;
                else if(arr[mid]>tar)
                {
                    high=mid-1;
                }
                else
                low=mid+1; 
            }
            return 0;
        }
};