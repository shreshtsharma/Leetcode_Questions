class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        int diff=0;
        if(nums.size()>=3)
        {
        for(int i=0;i<nums.size()-2;i++)
        {
            diff=nums[i+1]-nums[i];
            for(int j=i+1;j<nums.size()-1;j++)
            {
                if(nums[j+1]-nums[j]==diff)
                    count++;
                else
                    break;
                    
            }
        }
            return count;
                
        }
        else{
            return 0;
            }
    }
};