class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(search(arr,arr[i]*2,i)){
               return true;
            }
        }
        return false;
              
    }
              bool search(vector<int> arr,int tar,int i)
               {
                  
                   int left=0;
                   int right=arr.size()-1;
                   int mid;
                   while(left<=right)
                   {
                       mid=left+(right-left)/2;
                       if(arr[mid]==tar && mid!=i){
                           return true;
                       }
                       else if(arr[mid]<tar)
                       {
                            left=mid+1;                    
                       }
                       else
                           right=mid-1;
                   }
                   return false;
               }
};