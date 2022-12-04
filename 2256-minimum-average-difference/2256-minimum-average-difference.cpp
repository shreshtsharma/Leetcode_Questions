class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long sum=0,s=0;
         for(int i=0;i<nums.size();i++)
          {
              s+=nums[i];
          }
          long min=INT_MAX;
          int index=-1;
        for(int i=0;i<nums.size();i++)
        {
            long avg=0;
             sum+=nums[i];
             s-=nums[i];
            if(nums.size()-i-1>0)
            {
             avg=sum/(i+1)-s/(nums.size()-i-1);
             avg=abs(avg);
            }
            else{
                avg=abs(sum/(i+1));
            }
             if(avg<min)
             {
                 min=avg;
                 index=i;
             }
        }
        return index;
    }
};