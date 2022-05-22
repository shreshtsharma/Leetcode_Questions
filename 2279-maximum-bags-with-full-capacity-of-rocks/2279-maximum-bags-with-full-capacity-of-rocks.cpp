class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> arr(rocks.size());
        int count=0;
        for(int i=0;i<rocks.size();i++)
        {
            arr[i]=capacity[i]-rocks[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(additionalRocks<=0)
            {
                break;
            }
            else if(arr[i]<=additionalRocks)
            {
                additionalRocks-=arr[i];
                count++;
            }
        }
        return count;
    }
};