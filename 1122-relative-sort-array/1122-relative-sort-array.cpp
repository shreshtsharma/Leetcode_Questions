class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int s=0;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++)
            {
                if(arr1[j]==arr2[i])
                {
                    swap(arr1[s],arr1[j]);
                    s++;
                }
            }
        }
        sort(arr1.begin()+s,arr1.end());
        return arr1;
    }
};