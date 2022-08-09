class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]*=nums[i];
        }
        int n=nums.size();
        vector<int> arr(n,0);
        int i=0;
        int j=n-1;
        int k=n-1;
        while(i<=j)
        {
            if(nums[i]<nums[j])
            {
                arr[k]=nums[j];
                k--;
                j--;
                
            }
          
            else if(nums[i]>=nums[j])
            {
                arr[k]=nums[i];
                i++;
                k--;
            }
            
        }
        return arr;
        
    }
};