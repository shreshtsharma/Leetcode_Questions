class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        long long int sum1=0;
        long long int sum2=0;
        for(int j=1;j<nums.size();j++)
        {
            sum1+=nums[j];
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            sum2+=nums[i];
            if(sum2>=sum1)
            {
                count++;
            }
            sum1-=nums[i+1];
        }
        return count;
    }
};