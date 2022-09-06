class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> arr;
        vec.push_back(arr);
        sort(nums.begin(),nums.end());
        solve(nums,vec,arr,0);
        return vec;
    }
    void solve(vector<int> nums,vector<vector<int>> &vec,vector<int> arr,int ind)
    {
        if(ind==nums.size())
        {
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1])continue;
            arr.push_back(nums[i]);
            vec.push_back(arr);
            solve(nums,vec,arr,i+1);
            arr.pop_back();
        }
    }
};