class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        solve(vec,nums,0);
        return vec;
    }
    void solve(vector<vector<int>> &vec,vector<int> nums,int ind)
    {
        if(ind==nums.size())
        {
            vec.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            solve(vec,nums,ind+1);
            swap(nums[i],nums[ind]);
        }
    }
};