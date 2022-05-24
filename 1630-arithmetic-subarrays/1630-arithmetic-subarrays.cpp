class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i=0;i<l.size();i++)
        {
            res.push_back(determine(nums,l[i],r[i]));
        }
        return res;
    }
    bool determine(vector<int>nums,int m,int n)
    {
        sort(nums.begin()+m,nums.begin()+n+1);
        // for(int i=m;i<=n;i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        int diff=abs(nums[m]-nums[m+1]);
        for(int i=m+1;i<n;i++)
        {
            if(abs(nums[i]-nums[i+1])!=diff)
                return false;
        }
        return true;
    }
};