class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0,ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                ind=i;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]%2==0)
                    {
                        ind=j;
                        break;
                    }
                }
                swap(nums[i],nums[ind]);
            }
            else
                continue;
        } 
        return nums;
    }
};