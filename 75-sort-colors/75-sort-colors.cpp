class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                r++;
            else if(nums[i]==1)
                w++;
            else
                b++;
        }
        int idx=0;
        for(int i=0;i<r;i++)
        {
            nums[idx++]=0;
        }
        for(int j=0;j<w;j++)
        {
            nums[idx++]=1;
        }
        for(int k=0;k<b;k++)
        {
            nums[idx++]=2;
        }
        
    }
};