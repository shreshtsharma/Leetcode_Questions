class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++)
        {
            if(istrue(arr1[i],arr2,d)==0)
            {
                count++;
            }
        }
        return count;
    }
    int istrue(int ele,vector<int>& arr2,int d)
    {
        int left=0;
        int right=arr2.size()-1;
        int mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(abs(ele-arr2[mid])<=d)
            {
                return 1;
            }
            else if(arr2[mid]>ele)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return 0;
    }
};