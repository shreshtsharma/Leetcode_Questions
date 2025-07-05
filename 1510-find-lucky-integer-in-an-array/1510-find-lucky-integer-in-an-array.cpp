class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int bigLucky=-1;
        int x=arr[0];
        int count=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                count++;
            }
            else
            {
                if(count==x)
                {
                    bigLucky=max(bigLucky,x);
                }
                count=1;
                x=arr[i];
            }
        }
        if(count==x)
                {
                    bigLucky=max(bigLucky,x);
                }
        return bigLucky;
    }
};