class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int count=0;
         for(int i=0;i<grid.size();i++)
         {
             int res=count_it(grid[i]);
             cout<<res<<" ";
             count+=res;
         }
        return count;
    }
    int count_it(vector<int> arr)
    {
        int left=0;
        int right=arr.size()-1;
        int mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(mid==0 && arr[mid]<0)
            {
                return arr.size()-mid;
            }
            if(mid!=0 && arr[mid]<0 && arr[mid-1]>=0)
            {
                return arr.size()-mid;
            }
            else if(arr[mid]>=0)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return 0;
    }
};