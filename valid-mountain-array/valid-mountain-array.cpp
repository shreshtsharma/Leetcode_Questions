class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        
        int count=0;
        int pivot=0;;
        for(int i=0,j=1;j<arr.size();i++,j++)
        {
            if(arr[i]==arr[j])
            {
                return false;
            }
            else if(arr[j]<arr[i])
            {
                pivot=j;
                break;
            }
            else
                count++;
        }
        if(pivot==0 || count==0)
            return false;
        
        for(int i=pivot,j=pivot+1;j<arr.size();i++,j++)
        {
            if(arr[j]>arr[i] || arr[j]==arr[i])
                return false;
            
        }
        return true;
    }
};