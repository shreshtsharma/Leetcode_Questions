// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=0;
        int j=n;
        int mid;
        int res;
        
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(isBadVersion(mid)==true)
            {
                res=mid;
                j=mid-1;
            }
            else if(isBadVersion(mid)==false)
            {
                i=mid+1;
            }
        }
        return res;
    }
};