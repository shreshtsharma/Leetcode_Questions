class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int j;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                for(j=arr.size()-2;j>=i;j--){
                    arr[j+1]=arr[j];
                }
                 i++;
            }
            
        }

    }
};