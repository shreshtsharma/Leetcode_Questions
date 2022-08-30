class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        rev(nums,0,n-1);
        rev(nums,0,k-1);
        rev(nums,k,n-1);
        
    }
    void rev(vector<int> &nums,int st,int end)
    {
        int i=st,j=end; 
        for(i,j;i<=j;i++,j--)
        {
            swap(nums[i],nums[j]);
            
        }
    }
};