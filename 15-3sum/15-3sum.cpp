class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> vec;
        vector<int> arr;
        for(int i=0;i<nums.size()-2 ;i++)
        {
            if(i==0 || i>0 && nums[i]!=nums[i-1])
            {
                int j=i+1,k=nums.size()-1;
                while(j<k)
                {
                    if(nums[j]+nums[k]==(0-nums[i]))
                    {
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[k]);
                        vec.push_back(arr);
                        arr.erase(arr.begin(),arr.end());
                        while(j<k && nums[j]==nums[j+1])j++;
                        while(k>j && nums[k]==nums[k-1])k--;
                    }
                    if(nums[j]+nums[k]<(0-nums[i]))
                    {
                        j++;
                    }
                    else
                        k--;
                }
            }
        }
        return vec;
    }
};