class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort (nums.begin(),nums.end());
        int sum_diff=INT_MAX;
        int res;
        for(int i=0;i<nums.size();i++)
        {
            int s=i+1,e=nums.size()-1;
            int sum;
            while(s<e)
            {
                sum=nums[i]+nums[s]+nums[e];
                 if(sum>target)
                 {
                      e--;
                 }else
                     s++;
               
                 if(abs(target-sum)<sum_diff)
                {
                    sum_diff=abs(target-sum);
                    res=sum;
                }
                
                
            }
        }
        return res;
    }
};