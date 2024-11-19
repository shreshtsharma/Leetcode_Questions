class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        long long maxSum=0;
        int i=0;
        int j=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {
            // if the element is new/distinct
            if(mp.find(nums[j])==mp.end())
            {
                // add it to map and sum
                mp[nums[j]]++;
                sum+=nums[j];
            }
            else
            {
                while(mp.find(nums[j])!=mp.end())
                {
                    mp.erase(nums[i]);
                    sum-=nums[i];
                    i++;
                }
                mp[nums[j]]++;
                sum+=nums[j];
            }

            while(j-i+1 > k)
                {
                    sum-=nums[i];
                    mp.erase(nums[i]);
                    i++;
                }
            if(j-i+1 == k)
            {
                maxSum=max(sum,maxSum);
                
            }
            j++;
        }
        return maxSum;

    }
};