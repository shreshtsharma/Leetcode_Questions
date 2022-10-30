class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        int j;
        int n=arr.size();
        for(int i=n;i>=1;i--)
        {
            for( j=0;arr[j]!=i;j++);
            reverse(arr.begin(),arr.begin()+j+1);
            res.push_back(j+1);
            reverse(arr.begin(),arr.begin()+i);
            res.push_back(i);
        }
        return res;
    }
};