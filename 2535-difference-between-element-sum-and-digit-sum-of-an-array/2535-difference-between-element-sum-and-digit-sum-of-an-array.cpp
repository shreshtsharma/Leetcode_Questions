class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            int temp=nums[i];
            while(temp>0)
            {
                sum2+=temp%10;
                temp=temp/10;
            }
        }
        return abs(sum1-sum2);
        
    }
};