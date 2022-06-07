class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vec;
        if(nums[0]>=0)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]*=nums[i];
            }
            return nums;
        }
        else if(nums[nums.size()-1]<0)
        {
            for(int i=nums.size()-1;i>=0;i--)
            {
             vec.push_back(nums[i]*nums[i]);
            }
            return vec;
        }
        else 
        {
            int ind=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                {
                    ind=i;
                    break;
                }
            }
            int i=ind-1;
            int j=ind;
            while(i>=0 && j<nums.size())
            {
                if(nums[i]*nums[i]>nums[j]*nums[j])
                {
                    vec.push_back(nums[j]*nums[j]);
                    j++;
                }
                else
                {
                    vec.push_back(nums[i]*nums[i]);
                    i--;
                }
            }
            if(i>=0 && j==nums.size())
            {
                while(i>=0)
                {
                    vec.push_back(nums[i]*nums[i]);
                    i--;
                }
            }
            else if(i==-1 && j!=nums.size())
            {
                while(j!=nums.size())
                {
                    vec.push_back(nums[j]*nums[j]);
                    j++;
                }
            }
        }
        return vec;
    }
};